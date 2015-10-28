//
//  KBProgressOverlayView.h
//  Tikppa
//
//  Created by Gabriel on 1/19/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

@import Foundation;
@import AppKit;

#import <YOLayout/YOLayout.h>
#import "KBActivityIndicatorView.h"

@interface KBProgressOverlayView : YOView

@property BOOL hidesWhenStopped;
@property (nonatomic, getter=isAnimating) BOOL animating;

- (void)setTitle:(NSString *)title;

- (void)startAnimating;
- (void)stopAnimating;

@end
