//
//  AxeptaCheckout.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AxeptaCheckoutViewController.h"
#import "AxeptaPaymentData.h"
#import "AxeptaPaymentMethod.h"

/**
 AxeptaCheckout
 
 The AxeptaCheckout class is a top-level class that facilitates the payment procedure.
 It is responsible for validating payment data and instantiating a AxeptaCheckoutViewController object.
 
 */

@interface AxeptaCheckout : NSObject

/**
 Validates parameters and instantiates an AxeptaCheckoutViewController object.
 
 @param paymentMethod          A model object that contains all the Payment Method's related data.
 @param onSuccess              Returns a AxeptaCheckoutViewController object, if it could be instantiated
 @param onFailure              Returns an error, if the AxeptaCheckoutViewController object could not be instantiated

 @return Void
 */
- (void)instantiateCheckoutViewControllerWithPaymentMethod:(AxeptaPaymentMethod *)paymentMethod
                                                 onSuccess:(void (^)(AxeptaCheckoutViewController *checkoutViewController))onSuccess
                                                 onFailure:(void (^)(NSError *error))onFailure;

@end
