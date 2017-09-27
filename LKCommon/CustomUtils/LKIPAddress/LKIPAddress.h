//
//  LKIPAddress.h
//  LKCommon
//
//  Created by mac_lx on 17/9/27.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LKIPAddress : NSObject

/**
 获取IP

 @param preferIPv4 preferIPv4
 @return IP
 */
+ (NSString *)getIPAddress:(BOOL)preferIPv4;

@end
