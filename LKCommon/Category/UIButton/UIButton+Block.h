//
//  UIButton+Block.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^TouchedBlock)(NSInteger tag);

@interface UIButton (Block)

- (void)addActionHandler:(TouchedBlock)touchedBlock;

@end
