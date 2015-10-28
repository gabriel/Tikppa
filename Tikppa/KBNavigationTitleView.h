//
//  KBNavigationTitleView.h
//  Tikppa
//
//  Created by Gabriel on 1/28/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <YOLayout/YOLayout.h>
#import "KBButton.h"
#import "KBNavigationView.h"
#import "KBMenuBar.h"
#import "KBBox.h"

@interface KBNavigationTitleView : YOView <KBNavigationTitleView>

@property (weak) KBNavigationView *navigation;

@property (nonatomic) NSString *title;

@property (readonly) KBBox *border;

+ (instancetype)titleViewWithTitle:(NSString *)title navigation:(KBNavigationView *)navigation;

@end
