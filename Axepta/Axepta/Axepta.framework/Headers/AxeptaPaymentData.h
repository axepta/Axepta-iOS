//
//  AxeptaPaymentData.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AxeptaPaymentDataProtocol.h"
#import "AxeptaPaymentParam.h"

/**
 AxeptaPaymentData
 
 The AxeptaPaymentData class constitutes the model that contains all the, inserted by the User, Payment data.
 
 */
@interface AxeptaPaymentData : NSObject <AxeptaPaymentDataProtocol>

/**
 Dictionary containing all payment related data, with parameter name as key and AxeptaPaymentParam object as value.
 
 */
@property (nonatomic, strong, readonly) NSDictionary *data;

/**
 dictionary containing all additional URL params data, with parameter name as key and AxeptaPaymentParam object as value.
 */
@property (nonatomic, strong, readonly) NSDictionary *additionalURLParams;


/**
 Init method.
 
 @param dataElements  The 'dataElements' dictionary as fetched from JSON.
 @param additionalURLParams The additional URL Params as fethced from JSON
 @param paramValidationDictionary The dictionary containing all validation information for all payment data parameters.
 */
- (instancetype)initWithDataElements:(NSDictionary*)dataElements
                 additionalURLParams: (NSDictionary*)additionalURLParams
        andParamValidationDictionary:(NSDictionary *)paramValidationDictionary;


/**
 Returns a payment data parameter's value given its key.
 
 @param key The name of payment data parameter.
 
 @return A AxeptaPaymentParam object. if nil, data for given key doesn't exist.
 
 */
- (AxeptaPaymentParam *)paymentParamWithKey:(NSString *)key;

/**
 Sets a payment data parameter in the dictionary.
 
 If given key doesn't exist, the value will not be set.
 
 @param key The name of payment data parameter.
 @param value  The value for the payment data parameter.
 
 */
- (void)setParamWithKey:(NSString *)key withValue:(NSString *)value;

@end
