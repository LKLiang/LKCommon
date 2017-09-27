//
//  UIButton+Block.m
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/20.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import "UIButton+Block.h"
#import <objc/runtime.h>

static const void *UIButtonBlockKey = &UIButtonBlockKey;

@implementation UIButton (Block)

- (void)addActionHandler:(TouchedBlock)touchedBlock
{
    objc_setAssociatedObject(self, UIButtonBlockKey, touchedBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
    [self addTarget:self action:@selector(actionTouched:) forControlEvents:UIControlEventTouchUpInside];
}

- (void)actionTouched:(UIButton *)sender
{
    TouchedBlock touchedBlock = objc_getAssociatedObject(self, UIButtonBlockKey);
    if (touchedBlock) {
        touchedBlock(sender.tag);
    }
}

@end
