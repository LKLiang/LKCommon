//
//  UIImage+Extension.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

#pragma mark - Color Image

@interface UIImage (Color)

/**
 根据颜色生成纯色图片

 @param color 颜色
 @return 纯色图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 取图片某一点颜色

 @param point 某一点
 @return 颜色
 */
- (UIColor *)colorAtPoint:(CGPoint)point;

/**
 取某一像素的颜色

 @param point 一像素
 @return 颜色
 */
- (UIColor *)colorAtPixel:(CGPoint)point;  //more accurate method ,colorAtPixel 1x1 pixel

/**
 返回该图片是否有透明度通道

 @return 是否有透明度通道
 */
- (BOOL)hasAlphaChannel;

/**
 转换至灰度图

 @return 灰度图
 */
- (UIImage *)covertToGrayImage;

@end

#pragma mark - Blurred Image

@interface UIImage (Blurred)

/**
 生成一张高斯模糊的图片

 @param blurriness 模糊程度 (0~1)
 @return 模糊图片
 */
- (UIImage *)imageWithBlurriness:(CGFloat)blurriness;

@end

@interface UIImage (Merge)

/**
 合并两个图片

 @param firstImage 一图片
 @param secondImage 另一图片
 @return 合成图片
 */
+ (UIImage *)mergeImage:(UIImage *)firstImage withImage:(UIImage *)secondImage; // 没验证成功

@end
