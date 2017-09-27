//
//  ViewController.m
//  LKCommon
//
//  Created by mac_lx on 17/9/27.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import "ViewController.h"
#import "LKIPAddress.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSLog(@"IPAddress = %@", [LKIPAddress getIPAddress:YES]);
    
    NSLog(@"IPAddress = %@", [LKIPAddress getIPAddress:NO]);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
