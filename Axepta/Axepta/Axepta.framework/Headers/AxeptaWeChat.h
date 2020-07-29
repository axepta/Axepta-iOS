//
//  AxeptaWeChat.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.

// hey Gerald
//

#import <Foundation/Foundation.h>
#import "AxeptaPaymentData.h"
#import "AxeptaPaymentMethod.h"
@interface AxeptaWeChat : NSObject

// TODO: add descriptiondd
// TODO: instead of block use delegation because the final response is going to be handled in AxeptaWeChatManager and we need to get it from there.
- (void)startPaymentWithPaymentData:(AxeptaPaymentMethod *)paymentMethod success:(void (^)(NSData *data))onSuccess failure:(void (^)(NSError *error))onFailure;

@end
