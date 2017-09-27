//
//  UIButton+Circular.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Circular)

+ (UIButton *)buttonWithTitle:(NSString *)title
                    textColor:(UIColor *)color
                         font:(UIFont *)font
                        frame:(CGRect)frame
                       Radius:(NSInteger)Radius;

- (void)circularWithR:(NSInteger)Radius;

- (void)circularWithR:(NSInteger)Radius
          borderWidth:(NSInteger)width
          borderColor:(UIColor*)color;

@end
