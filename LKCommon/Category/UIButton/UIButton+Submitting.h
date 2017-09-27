//
//  UIButton+Submitting.h
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/21.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Submitting)

@property (nonatomic, readonly, getter=isSubmitting) NSNumber *submitting;

- (void)beginSubmitting:(NSString *)title;

- (void)endSubmitting;

@end
