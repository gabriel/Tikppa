//
//  KBScrollView.m
//  Tikppa
//
//  Created by Gabriel on 2/12/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import "KBScrollView.h"

@interface KBScrollView ()
@property KBBorder *border;
@end

@implementation KBScrollView

- (void)viewInit {
  [super viewInit];

  _scrollView = [[NSScrollView alloc] init];
  // TODO probably shouldn't have these defaults here, they seem to be more common though
  _scrollView.hasVerticalScroller = YES;
  _scrollView.verticalScrollElasticity = NSScrollElasticityAllowed;
  _scrollView.autohidesScrollers = YES;
  [self addSubview:_scrollView];

  YOSelf yself = self;
  self.viewLayout = [YOLayout layoutWithLayoutBlock:^(id<YOLayout> layout, CGSize size) {
    UIEdgeInsets insets = yself.border.insets;
    [layout setSize:size view:yself.border options:0];

    CGRect scrollRect = YOCGRectApplyInsets(CGRectMake(0, 0, size.width, size.height), insets);

    if ([yself.scrollView.documentView isKindOfClass:YOView.class]) {
      [layout sizeToFitVerticalInFrame:CGRectMake(0, 0, scrollRect.size.width, scrollRect.size.height) view:yself.scrollView.documentView];
    }

    [layout setFrame:scrollRect view:yself.scrollView];
    return size;
  }];
}

+ (instancetype)scrollViewWithDocumentView:(NSView *)documentView {
  KBScrollView *scrollView = [[KBScrollView alloc] init];
  [scrollView setDocumentView:documentView];
  return scrollView;
}

- (void)setDocumentView:(NSView *)documentView {
  [_scrollView setDocumentView:documentView];
  [self setNeedsLayout];
}

- (void)setBorderEnabled:(BOOL)borderEnabled {
  if (borderEnabled) {
    _border = [[KBBorder alloc] init];
    [self addSubview:_border positioned:NSWindowAbove relativeTo:_scrollView];
  } else {
    [_border removeFromSuperview];
    _border = nil;
  }
}

@end
