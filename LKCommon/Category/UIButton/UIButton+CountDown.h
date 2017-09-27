//
//  UIButton+CountDown.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (CountDown)

/**
 倒计时按钮

 @param timeout 倒计时时间 单位s
 @param normalTitle 正常标题
 @param waitTittle 倒计时标题
 */
- (void)startTime:(NSInteger )timeout
           normalTitle:(NSString *)normalTitle
      waitTittle:(NSString *)waitTittle;

@end
