//
//  AxeptaApplePayDelegate.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AxeptaPaymentDataProtocol.h"
#import "AxeptaPaymentRespose.h"

/**
 AxeptaApplePayDelegate
 
 The AxeptaApplePayDelegate protocol is used to return the navigation and payment results to the object conforming to it.
 
 */
@protocol AxeptaApplePayDelegate <NSObject>

@required

/**
 Called when PKPaymentAuthorizationViewController is dismissed.
 
 */
- (void)applePayDidDismiss;

/**
 Called after Apple Pay payment is authorized successfully.
 All the shipping data entered are merged into the existing PaymentData.
 
 @param paymentData A paymentData object conforming to AxeptaPaymentDataProtocol.
 @param response    Response received after exexuting payment request.

 */
- (void)applePayDidAuthorizePaymentForPaymentData:(id <AxeptaPaymentDataProtocol>) paymentData withResponse: (AxeptaPaymentRespose *)response;


/**
 Called after Apple Pay payment failed to be authorized.
 
 @param paymentData A paymentData object conforming to AxeptaPaymentDataProtocol.
 @param error Returns the error if the authorization was not successful.
 @param response    Response received after exexuting payment request.

 */
- (void)applePayDidFailToAuthorizePaymentForPaymentData:(id <AxeptaPaymentDataProtocol>) paymentData withError:(NSError *)error withResponse: (AxeptaPaymentRespose *)response;


@optional

/**
 Called when User has selected a new payment card. Use this delegate callback if you need to 
 update the summary items in response to the card type changing (for example, applying credit card surcharges).
 
 @param paymentMethod A PKPaymentMethod object containing details of the selected payment method.
 @param completion A block that is called to pass PKPaymentSummaryItem objects in order to update the summary items in response to the card type changing.

 */
- (void)applePayPaymentDidSelectPaymentMethod:(PKPaymentMethod *)paymentMethod
                                   completion:(void (^)(NSArray<PKPaymentSummaryItem *> *summaryItems))completion NS_AVAILABLE_IOS(9_0);

/**
 Called when User changes shipping data.
 
 @param contact A PKContact object containing details of the selected shipping data.
 @param completion A block that is called to pass a PKPaymentAuthorizationStatus object and PKPaymentSummaryItem objects in order to update the summary items in response to the shipping data changing.
 
 */
- (void)applePayPaymentDidSelectShippingContact:(nonnull PKContact *)contact
                                     completion:(nonnull void (^)(PKPaymentAuthorizationStatus authorizationStatus, NSArray<PKPaymentSummaryItem *> *summaryItems))completion NS_AVAILABLE_IOS(9_0);

@end
