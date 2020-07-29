//
//  AxeptaCheckoutViewControllerDelegate.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AxeptaPaymentRespose.h"
#import "AxeptaPaymentData.h"

/**
 AxeptaCheckoutViewControllerDelegate
 
 Protocol used by a AxeptaCheckoutViewController object, in order to inform the conforming object regarding payment results.
 
 */
@protocol AxeptaCheckoutViewControllerDelegate <NSObject>

@required

/**
 Called after payment is authorized successfully.
 
 @param paymentData A paymentData object.
 @param response    Response received after exexuting payment request.

 */
- (void)checkoutDidAuthorizePaymentForPaymentData:(AxeptaPaymentData *)paymentData withResponse: (AxeptaPaymentRespose *)response;


/**
 Called after payment failed to be authorized.
 
 @param paymentData A paymentData object.
 @param error Returns the error if the authorization was not successful.
 @param response    Response received after exexuting payment request.

 */
- (void)checkoutDidFailToAuthorizePaymentForPaymentData:(AxeptaPaymentData *)paymentData withError:(NSError *)error withResponse: (AxeptaPaymentRespose *)response;

/**
 Called after payment has be cancelled by User.
 
 @param paymentData A paymentData object.
 
 */
- (void)checkoutDidCancelForPaymentData:(AxeptaPaymentData *)paymentData;

@end
