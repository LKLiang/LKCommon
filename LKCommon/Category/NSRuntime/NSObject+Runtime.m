//
//  NSObject+Runtime.m
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/25.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import "NSObject+Runtime.h"
#import <objc/runtime.h>

@implementation NSObject (Runtime)

- (void)getAllVars
{
    unsigned int count = 0;
    Ivar *ivars = class_copyIvarList(self.class, &count);
    for(int i = 0; i < count; i++) {
        Ivar ivar = ivars[i];
        
        const char *name = ivar_getName(ivar);
        const char *type = ivar_getTypeEncoding(ivar);
       
        NSLog(@"key : %s ,    type : %s", name, type);
    }
}

- (void)getAllMethods
{
    unsigned int methCount = 0;
    
    Method *meths = class_copyMethodList([self class], &methCount);
    
    for(int i = 0; i < methCount; i++) {
        
        Method meth = meths[i];
        
        SEL sel = method_getName(meth);
        
        const char *name = sel_getName(sel);
        
        NSLog(@"成员方法 : %s", name);
    }
    
    free(meths);
}


@end
