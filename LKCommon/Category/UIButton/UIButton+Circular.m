//
//  UIButton+Circular.m
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import "UIButton+Circular.h"

@implementation UIButton (Circular)

+(UIButton *)buttonWithTitle:(NSString *)title textColor:(UIColor *)color font:(UIFont *)font frame:(CGRect)frame Radius:(NSInteger)Radius
{
    UIButton *button = [[UIButton alloc] initWithFrame:frame];
    [button setTitle:title forState:UIControlStateNormal];
    button.titleLabel.font = font;
    [button setTitleColor:color forState:UIControlStateNormal];
    button.layer.cornerRadius = Radius;
    
    return button;
}


- (void)circularWithR:(NSInteger)Radius;
{
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = Radius;
    self.layer.borderColor = [UIColor whiteColor].CGColor;
    self.layer.borderWidth = 0.8;
}

- (void)circularWithR:(NSInteger)Radius borderWidth:(NSInteger)width borderColor:(UIColor*)color;
{
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = Radius;
    self.layer.borderColor = color.CGColor;
    self.layer.borderWidth = width;
}


@end
