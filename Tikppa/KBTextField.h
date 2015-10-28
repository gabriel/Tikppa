//
//  KBTextField.h
//  Tikppa
//
//  Created by Gabriel on 1/12/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

#import <YOLayout/YOLayout.h>
#import "KBAppearance.h"
#import "TikppaDefines.h"

@class KBTextField;

@protocol KBTextFieldFocusDelegate
- (void)textField:(KBTextField *)textField didChangeFocus:(BOOL)focused;
@end

@interface KBTextField : YOView

@property (nonatomic) NSString *text;
@property (nonatomic) NSString *placeholder;
@property (readonly) NSTextField *textField;

@property (readonly) NSBox *focusView;
@property UIEdgeInsets insets;

@property (copy) dispatch_block_t onChange;

@property (nonatomic) NSMutableDictionary *attributes;

@property id<KBTextFieldFocusDelegate> focusDelegate;

+ (BOOL)isFocused:(NSTextField *)textField;

@end

@interface KBSecureTextField : KBTextField
@end
