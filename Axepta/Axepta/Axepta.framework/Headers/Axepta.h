//
//  Axepta.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Axepta.
FOUNDATION_EXPORT double AxeptaVersionNumber;

//! Project version string for Axepta.
FOUNDATION_EXPORT const unsigned char AxeptaVersionString[];

#import <Axepta/AxeptaConfiguration.h>
#import <Axepta/AxeptaCheckout.h>
#import <Axepta/AxeptaCheckoutViewController.h>
#import <Axepta/AxeptaCheckoutViewControllerDelegate.h>
#import <Axepta/AxeptaApplePay.h>
#import <Axepta/AxeptaApplePayDelegate.h>
#import <Axepta/AxeptaCheckout.h>
#import <Axepta/AxeptaPaymentData.h>
#import <Axepta/AxeptaPaymentDataProtocol.h>
#import <Axepta/AxeptaPaymentMethod.h>
#import <Axepta/AxeptaPaymentMethodProtocol.h>
#import <Axepta/AxeptaWeChat.h>
#import "Axepta/AxeptaPayPal.h"

/**
 'Axepta'
 
 A project generic Singleton object
 
 */
@interface Axepta : NSObject

/**
 Singleton
 
 */
+ (Axepta *)sharedInstance;

/**
 Fetches and returns a list of available payment methods for the current Merchant.
 
 @param onSuccess   Returns an array of AxeptaPaymentMethod objects.
 @param onFailure   Returns an error if the payment methods could not be retrieved.
 
 */
- (void)paymentMethodsOnSuccess:(void (^)(NSArray<AxeptaPaymentMethod *> *paymentMethods))onSuccess
                      onFailure:(void (^)(NSError *error))onFailure;

/**
 Fetches and returns a payment method given its ID parameter.
 
 @param pmID Payment method's ID parameter.
 
 @return A AxeptaPaymentMethod object.
 
 */
- (AxeptaPaymentMethod *)paymentMethodForID:(NSString *)pmID;

@end

