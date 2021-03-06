//
//  AxeptaConfiguration.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 AxeptaConfiguration
 
 The AxeptaConfiguration class encapsulates all Merchant & App related data, generated by Axepta.

 */

typedef struct {
    __unsafe_unretained NSString* applicationID;
    __unsafe_unretained NSString* key;
    __unsafe_unretained NSString* mchID;
    __unsafe_unretained NSString* subMchID;
    __unsafe_unretained NSString* universalLink;
} WeChatParamStructure;

@interface AxeptaConfiguration : NSObject

/**
 Alphanumerical value which uniquely identifies the merchant within the Paygate
 */

+ (NSString *)merchantID;
+ (void) setMerchantID: (NSString *)newMerchandID;

/**
 Alphanumerical value which uniquely identifies the paygate for bnp
 */
+ (NSString *)paygate;
+ (void) setPaygate: (NSString *)newPaygate;

/**
 Identifies the merchant, as previously agreed with Apple.  Must match one of the merchant
 identifiers in the application's entitlement.
 */
+ (NSString *)merchantAppleID;
+ (void) setMerchantAppleID: (NSString *)newMerchandID;

/**
 Merchant's auth request url
 */
+ (NSString *)authURL;
+ (void) setAuthURL: (NSString *)newAuthURL;


+ (void)registerApp: (NSString *)app;

+ (BOOL)handleOpenURL:(NSURL *) url;

/**
 HMAC key
 */
+ (NSString *)hmacKey;
+ (void) setHmacKey: (NSString *)newHmacKey;

+ (WeChatParamStructure *) WeChat;
+ (void)setWechatParams: (WeChatParamStructure *)WeChat;

@end
