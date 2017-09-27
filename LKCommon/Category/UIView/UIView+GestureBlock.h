//
//  UIView+GestureBlock.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/22.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^GestureActionBlock)(UIGestureRecognizer *gestureRecognizer);

@interface UIView (GestureBlock)

- (void)addTapActionWithBlock:(GestureActionBlock)block;

- (void)addLongPressActionWithBlock:(GestureActionBlock)block;

@end
