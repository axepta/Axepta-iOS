//
//  AxeptaPaymentMethod.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AxeptaPaymentMethodProtocol.h"
#import "AxeptaPaymentData.h"
#import <UIKit/UIKit.h>

/**
 AxeptaPaymentMethod
 
 The AxeptaPaymentMethod class constitutes the model that contains all the data for a Payment method.
 
 */
@interface AxeptaPaymentMethod : NSObject <AxeptaPaymentMethodProtocol>

/**
 Payment method id.
 */
@property (nonatomic, strong, readonly) NSString *pmID;

/**
 Payment method localized description.
 */
@property (nonatomic, strong, readonly) NSString *localizedDescription;

/**
 Payment method url.
 */
@property (nonatomic, strong, readonly) NSString *url;

/**
 Payment method image.
 */
@property (nonatomic, strong, readonly) UIImage *image;

/**
 Payment method template string.
 deprecated, merchant developer should use instead of
 [method.paymentData setParamWithKey:@"Template" withValue:@"ct_brasil"]';
 */
@property (nonatomic, strong, readonly) NSString *templateStr __deprecated_msg("merchant developer should use instead of '[method.paymentData setParamWithKey:@\"Template\" withValue:@\"ct_brasil\"]';");

/**
 Payment data
 */
@property (nonatomic, strong, readonly) AxeptaPaymentData *paymentData;

/**
 Init method.
 
 @param dictionary A dictionary containing all payment method's data.
 @param paramValidationDictionary A dictionary containing all validation information for the parameters.
 
 @param instancetype
 
 */
- (instancetype)initWithDictionary:(NSDictionary*)dictionary
     withParamValidationDictionary:(NSDictionary *)paramValidationDictionary;

@end
