//
//  PayPal.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AxeptaPaymentData.h"
#import "AxeptaPaymentMethod.h"


@interface AxeptaPayPal : NSObject

 - (void)startPaypalPay:(AxeptaPaymentMethod *)paymentMethod success:(void (^)(NSData *data))onSuccess failure:(void (^)(NSError *error))onFailure;

-(id) init;
    
@end
