//
//  UIButton+Submitting.m
//  JSCommonCodeSet
//
//  Created by mac_lx on 17/9/21.
//  Copyright © 2017年 mac_lx. All rights reserved.
//

#import "UIButton+Submitting.h"
#import <objc/runtime.h>

@interface UIButton ()

@property(nonatomic, strong) UIView *modalView;
@property(nonatomic, strong) UIActivityIndicatorView *spinnerView;
@property(nonatomic, strong) UILabel *spinnerTitleLabel;

@end

@implementation UIButton (Submitting)

- (void)beginSubmitting:(NSString *)title
{
    [self endSubmitting];
    
    self.submitting = @YES;
    self.hidden = YES;
    
    self.modalView = [[UIView alloc] initWithFrame:self.frame];
    self.modalView.backgroundColor =
    [self.backgroundColor colorWithAlphaComponent:0.6];
    self.modalView.layer.cornerRadius = self.layer.cornerRadius;
    self.modalView.layer.borderWidth = self.layer.borderWidth;
    self.modalView.layer.borderColor = self.layer.borderColor;
    
    CGRect viewBounds = self.modalView.bounds;
    self.spinnerView = [[UIActivityIndicatorView alloc]
                        initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhite];
    self.spinnerView.tintColor = self.titleLabel.textColor;
    CGRect spinnerViewBounds = self.spinnerView.bounds;
    CGRect spinnerViewFrame = CGRectMake(8.0, viewBounds.size.height / 2 - spinnerViewBounds.size.height / 2, spinnerViewBounds.size.width, spinnerViewBounds.size.height);
    self.spinnerView.frame = spinnerViewFrame;
    
    CGRect spinnerTitleLabelFrame = CGRectMake(CGRectGetMaxX(spinnerViewFrame) + 8.0, CGRectGetMinY(spinnerViewFrame), CGRectGetWidth(viewBounds) - 8.0 * 3 - CGRectGetWidth(spinnerViewFrame), CGRectGetHeight(spinnerViewFrame));
    self.spinnerTitleLabel = [[UILabel alloc] initWithFrame:spinnerTitleLabelFrame];
    self.spinnerTitleLabel.textAlignment = NSTextAlignmentCenter;
    self.spinnerTitleLabel.text = title;
    self.spinnerTitleLabel.font = self.titleLabel.font;
    self.spinnerTitleLabel.textColor = self.titleLabel.textColor;
    
    [self.modalView addSubview:self.spinnerView];
    [self.modalView addSubview:self.spinnerTitleLabel];
    [self.superview addSubview:self.modalView];
    [self.spinnerView startAnimating];
}

- (void)endSubmitting
{
    if (!self.isSubmitting.boolValue) {
        return;
    }
    
    self.submitting = @NO;
    self.hidden = NO;
    
    [self.modalView removeFromSuperview];
    self.modalView = nil;
    self.spinnerView = nil;
    self.spinnerTitleLabel = nil;
}

#pragma mark - Setter & Getter

- (void)setSubmitting:(NSNumber *)submitting
{
    objc_setAssociatedObject(self, @selector(setSubmitting:), submitting, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (NSNumber *)isSubmitting
{
    return objc_getAssociatedObject(self, @selector(setSubmitting:));
}

- (void)setModalView:(UIView *)modalView
{
    objc_setAssociatedObject(self, @selector(setModalView:), modalView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (UIView *)modalView
{
    return objc_getAssociatedObject(self, @selector(setModalView:));
}

- (void)setSpinnerView:(UIActivityIndicatorView *)spinnerView
{
    objc_setAssociatedObject(self, @selector(setSpinnerView:), spinnerView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (UIActivityIndicatorView *)spinnerView
{
    return objc_getAssociatedObject(self, @selector(setSpinnerView:));
}

- (void)setSpinnerTitleLabel:(UILabel *)spinnerTitleLabel
{
    objc_setAssociatedObject(self, @selector(setSpinnerTitleLabel:), spinnerTitleLabel, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (UILabel *)spinnerTitleLabel
{
    return objc_getAssociatedObject(self, @selector(setSpinnerTitleLabel:));
}

@end
