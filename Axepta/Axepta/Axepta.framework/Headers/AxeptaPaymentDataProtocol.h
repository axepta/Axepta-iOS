//
//  AxeptaPaymentDataProtocol.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AxeptaPaymentParam.h"

/**
 AxeptaPaymentDataProtocol
 
 Protocol that defines all payment data.
 
 */
@protocol AxeptaPaymentDataProtocol

@required

@property (nonatomic, strong, readonly) NSDictionary *dataThatNeedsToBeValidated;

- (instancetype)initWithDictionary:(NSDictionary*)dictionary
     withParamValidationDictionary:(NSDictionary *)paramValidationDictionary;
- (AxeptaPaymentParam *)paymentParamWithKey:(NSString *)key;
- (void)setParamWithKey:(NSString *)key withValue:(NSString *)value;

@end
