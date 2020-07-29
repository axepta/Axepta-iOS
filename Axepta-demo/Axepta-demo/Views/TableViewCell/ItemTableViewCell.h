//
//  ItemTableViewCell.h
//  Axepta-demo
//
//  Created by Gerald Çollaku
//  Copyright © 2020 Endava Berlin GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ItemTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *itemImage;
@property (strong, nonatomic) IBOutlet UILabel *itemTitle;
@property (strong, nonatomic) IBOutlet UILabel *itemDetail;

@end
