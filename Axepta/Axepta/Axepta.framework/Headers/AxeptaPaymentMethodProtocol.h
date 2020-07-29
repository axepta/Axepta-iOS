//
//  AxeptaPaymentMethodProtocol.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright © BNP PARIBAS. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 AxeptaPaymentMethodProtocol
 
 Protocol that defines all payment method data.
 
 */
@protocol AxeptaPaymentMethodProtocol

@required

/**
 Payment method id.
 */
@property (nonatomic, strong) NSString *pmID;

/**
 Payment method url.
 */
@property (nonatomic, strong) NSString *url;

/**
 Payment method image.
 */
@property (nonatomic, strong) UIImage *image;




- (instancetype)initWithDictionary:(NSDictionary*)dictionary;

@optional

@end
