//
//  ItemVO.h
//  Axepta-demo
//
//  Created by Gerald Çollaku
//  Copyright © 2020 Endava Berlin GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ItemVO : NSObject

@property (strong, nonatomic) NSString *desc;
@property (strong, nonatomic) NSNumber* amount;
@property (strong, nonatomic) NSString *imgStr;

- (id) initWithDescr:(NSString *)desc withAmount:(unsigned long)amount withImg:(NSString *)imgStr;

- (NSString *)majorCurrencyAmount;

@end
