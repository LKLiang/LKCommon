//
//  UIColor+Gradient.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Gradient)

/**
 渐变颜色

 @param c1 开始颜色
 @param c2 结束颜色
 @param height 渐变高度
 @return 渐变颜色
 */
+ (UIColor *)gradientFromColor:(UIColor*)c1 toColor:(UIColor *)c2 withHeight:(int)height;

@end
