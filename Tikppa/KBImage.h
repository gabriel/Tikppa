//
//  KBImage.h
//  Tikppa
//
//  Created by Gabriel on 6/12/15.
//  Copyright (c) 2015 Tikppa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

@interface NSImage (KBImage)

- (NSImage *)kb_imageTintedWithColor:(NSColor *)tint;

@end
