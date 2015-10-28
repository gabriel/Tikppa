//
//  KBTextView.h
//  Tikppa
//
//  Created by Gabriel on 2/12/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <YOLayout/YOLayout.h>
#import "KBAppearance.h"

@class KBTextView;

typedef BOOL (^KBTextViewOnPaste)(KBTextView *textView);
typedef void (^KBTextViewOnChange)(KBTextView *textView);

@interface KBTextView : NSScrollView <NSTextViewDelegate>

@property (readonly) NSTextView *view;
@property (nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSString *text;
@property (nonatomic, getter=isEditable) BOOL editable;

@property (copy) KBTextViewOnChange onChange;
@property (copy) KBTextViewOnPaste onPaste;

- (void)viewInit;

- (void)setText:(NSString *)text font:(NSFont *)font color:(NSColor *)color;
- (void)setText:(NSString *)text font:(NSFont *)font color:(NSColor *)color alignment:(NSTextAlignment)alignment lineBreakMode:(NSLineBreakMode)lineBreakMode;

- (void)setText:(NSString *)text style:(KBTextStyle)style;
- (void)setText:(NSString *)text style:(KBTextStyle)style alignment:(NSTextAlignment)alignment lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (void)setText:(NSString *)text style:(KBTextStyle)style options:(KBTextOptions)options alignment:(NSTextAlignment)alignment lineBreakMode:(NSLineBreakMode)lineBreakMode;

- (void)setEnabled:(BOOL)enabled;

@end
