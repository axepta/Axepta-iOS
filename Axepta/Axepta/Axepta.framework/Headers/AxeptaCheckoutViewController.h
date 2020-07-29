//
//  AxeptaCheckoutViewController.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

#import "AxeptaPaymentDataProtocol.h"
#import "AxeptaCheckoutViewControllerDelegate.h"
#import "AxeptaPaymentMethod.h"

/**
 AxeptaCheckoutViewController
 
 This is the main UIViewController encapsulating all the views stack in order to proceed with the Payment and providing delegation as well.
 
 */
@interface AxeptaCheckoutViewController : UIViewController <WKScriptMessageHandler, WKNavigationDelegate>

/**
 Delegate object conforming to AxeptaCheckoutViewControllerDelegate protocol in order to be informed regarding payment results.
 */
@property (nonatomic, weak) id <AxeptaCheckoutViewControllerDelegate> delegate;

/**
 An AxeptaPaymentMethod object that contains all the data for a Payment method.
 */
@property (strong, nonatomic) AxeptaPaymentMethod *paymentMethod;


@end

