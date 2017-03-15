//
//  CollCellNear.h
//  Introke
//
//  Created by zhouMR on 2017/3/15.
//  Copyright © 2017年 luowei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "INTNear.h"

@interface CollCellNear : UICollectionViewCell
@property (nonatomic, strong) IntNearLive *near;
- (void)showAnimation;

@end
