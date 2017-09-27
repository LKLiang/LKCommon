//
//  UIView+Frame.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/21.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;

#pragma mark - maxX  maxY

- (CGFloat)maxX;
- (CGFloat)maxY;

#pragma mark - Four Angle Point

@property (readonly) CGPoint bottomLeft;
@property (readonly) CGPoint bottomRight;
@property (readonly) CGPoint topLeft;
@property (readonly) CGPoint topRight;

@end
