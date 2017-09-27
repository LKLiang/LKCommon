//
//  UIColor+Extension.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/19.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

#pragma mark - RandomColor

@interface UIColor (Random)

/**
 随机颜色
 
 @return 颜色
 */
+ (UIColor *)randomColor;

@end

#pragma mark - Hex change into UIColor

@interface UIColor (Hex)

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

#pragma mark - Gradient Color

@interface UIColor (Gradient)

/**
 *  @brief  渐变颜色
 *
 *  @param c1     开始颜色
 *  @param c2     结束颜色
 *  @param height 渐变高度
 *
 *  @return 渐变颜色
 */
+ (UIColor *)gradientFromColor:(UIColor*)c1 toColor:(UIColor *)c2 withHeight:(int)height;

@end

#pragma mark - Web Color

@interface UIColor (Web)

/**
 *  @brief  获取canvas用的颜色字符串
 *
 *  @return canvas颜色
 */
- (NSString *)canvasColorString;
/**
 *  @brief  获取网页颜色字串
 *
 *  @return 网页颜色
 */
- (NSString *)webColorString;

@end

#pragma mark - Color Modify

@interface UIColor (Modify)

/**
 相反颜色

 @return 当前颜色相反颜色
 */
- (UIColor *)invertedColor;

/**
 半透明颜色

 @return 半透明颜色
 */
- (UIColor *)colorForTranslucency; // 两个颜色一样的😣

/**
 亮度颜色

 @param lighten 亮度值  0.0 ~ 1.0  亮 ~ 暗
 @return 亮度颜色
 */
- (UIColor *)lightenColor:(CGFloat)lighten;

/**
 灰度颜色

 @param darken 灰度值  0.0 ~ 1.0  亮 ~ 灰
 @return 灰度颜色
 */
- (UIColor *)darkenColor:(CGFloat)darken;

@end
