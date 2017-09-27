//
//  UIColor+HexToColor.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexToColor)

/**
 十六进制转UIColor实例
 
 @param hex 十六进制值
 @param alpha 透明度
 @return 颜色
 */
+ (UIColor *)colorWithHex:(uint)hex alpha:(CGFloat)alpha;

/**
 十六进制字符串转颜色
 
 @param HexString 十六进制字符串
 @return 颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)HexString;

/**
 颜色亮度
 
 @param color 颜色
 @param delta 亮度
 @return 颜色
 */
+ (UIColor *)colorRGBonvertToHSB:(UIColor *)color withBrighnessDelta:(CGFloat)delta;

/**
 颜色透明度
 
 @param color 颜色
 @param delta 透明度
 @return 颜色
 */
+ (UIColor *)colorRGBonvertToHSB:(UIColor *)color withAlphaDelta:(CGFloat)delta;

/**
 十六进制值转颜色
 
 @param hexValue 十六进制值
 @return 颜色
 */
+ (UIColor *)colorWithHex:(uint)hexValue;

@end
