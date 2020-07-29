//
//  itemsController.h
//  Axepta-demo
//
//  Created by Gerald Çollaku
//  Copyright © 2020 Endava Berlin GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ItemsController : NSObject

@property (strong, nonatomic) NSMutableArray *selectedItems;
@property (strong, nonatomic) NSArray *totalItems;

+ (ItemsController *)sharedManager;

- (NSString *)totalItemsAmount;

@end
