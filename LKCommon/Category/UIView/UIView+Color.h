//
//  UIView+Color.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/22.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Color)

// 获取某点的颜色
- (UIColor *)colorOfPoint:(CGPoint)point;

// 将view的绘制成图片（对webView无法截图十分有效）
- (UIImage *)captureWithFrame:(CGRect)frame;

@end
