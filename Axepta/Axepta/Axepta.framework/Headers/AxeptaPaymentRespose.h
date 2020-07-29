//
//  AxeptaPaymentRespose.h
//  Axepta
//
//  Created by Gerald Çollaku
//  Copyright ©  BNP PARIBAS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AxeptaPaymentRespose : NSObject

@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) NSString *desc;
@property (nonatomic, strong) NSString *payID;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *transID;
@property (nonatomic, strong) NSString *prepayid;
@property (nonatomic, strong) NSString *XID;
@property (nonatomic, strong) NSString *mid;
@property (nonatomic, strong) NSString *refnr;
@property (nonatomic, strong) NSString *MAC;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *paypalurl;
@property (nonatomic, strong) NSString *token;
 @property (nonatomic, strong) NSString *useraction;
    
- (instancetype)initWithDictionary:(NSDictionary*)dictionary;

@end
