//
//  KBImageTextView.h
//  Tikppa
//
//  Created by Gabriel on 2/18/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <YOLayout/YOLayout.h>
#import "KBImageView.h"
#import "KBLabel.h"
#import "KBBox.h"
#import "KBAppearance.h"

@interface KBImageTextView : YOView

@property (readonly) KBImageView *imageView;
@property (readonly) KBLabel *titleLabel;
@property (readonly) KBLabel *infoLabel;
@property (readonly) KBBox *border;

@property UIEdgeInsets insets;
@property CGSize imageSize;
@property BOOL tintImageForStyle;

- (void)setTitle:(NSString *)title info:(NSString *)info image:(NSImage *)image lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (void)setTitle:(NSString *)title info:(NSString *)info imageURLString:(NSString *)imageURLString imageSize:(CGSize)imageSize lineBreakMode:(NSLineBreakMode)lineBreakMode;

@end


@interface KBImageTextCell : KBImageTextView
@end
