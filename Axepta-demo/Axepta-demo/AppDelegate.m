//
//  AppDelegate.m
//  Axepta-demo
//
//  Created by Gerald Çollaku
//  Copyright © 2020 Endava Berlin GmbH. All rights reserved.
//

#import "AppDelegate.h"
#import<Axepta/Axepta.h>


@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    AxeptaConfiguration.merchantID      = @"YOUR_MERCHANT_ID";
    AxeptaConfiguration.merchantAppleID = @"YOUR_APPLE_MERCHANT_ID";
    AxeptaConfiguration.authURL         = @"YOUR_AUTH_URL";
    
    AxeptaConfiguration.WeChat->applicationID = @"YOUR_APP_ID";
    AxeptaConfiguration.WeChat->key = @"YOUR_WECHAT_KEY";
    AxeptaConfiguration.WeChat->mchID = @"YOUR_WECHAT_MERCHANTID";
    AxeptaConfiguration.WeChat->subMchID = @"YOUR_WECHAT_SUBMERCHANTID";
    
    return YES;
}


- init
{
    self = [super init];
    if (!self) return nil;

    
    return self;
}

- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url
{
    return  [AxeptaConfiguration handleOpenURL: url];
}

- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation {
    [AxeptaConfiguration handleOpenURL: url];
    if ([url.scheme localizedCaseInsensitiveCompare:@"YOUR_URL_SCHEME"] == NSOrderedSame) {
        if([url.host localizedCaseInsensitiveCompare:@"return"] == NSOrderedSame) {
            NSNotificationCenter* nc = [NSNotificationCenter defaultCenter];
            //completePayPalCheckout and cancelPayPalCheckout keys should be used by the developer since thy are called in Axepta framework
            [nc postNotificationName:@"completePayPalCheckout" object: self userInfo: nil];
        }
        else {
            NSNotificationCenter* nc = [NSNotificationCenter defaultCenter];
            [nc postNotificationName:@"cancelPayPalCheckout" object: self userInfo: nil];
        }
        return YES;
    }
    
    return NO;
    
    
}


- (void)applicationWillResignActive:(UIApplication *)application {

}

- (void)applicationDidEnterBackground:(UIApplication *)application {
 
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
  
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}



@end
