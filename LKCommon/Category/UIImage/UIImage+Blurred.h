//
//  UIImage+Blurred.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Blurred)

/**
 生成一张高斯模糊的图片
 
 @param blurriness 模糊程度 (0~1)
 @return 模糊图片
 */
- (UIImage *)imageWithBlurriness:(CGFloat)blurriness;

@end
