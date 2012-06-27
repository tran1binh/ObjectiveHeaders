/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridHeader : UIView {
@private
	UILabel* _inlineTextLabel;
	float _inlineTextRightMargin;
}
@property(copy, nonatomic) NSString* inlineText;
@property(retain, nonatomic) UILabel* inlineTextLabel;	// @synthesize=_inlineTextLabel
@property(assign, nonatomic) float inlineTextRightMargin;	// @synthesize=_inlineTextRightMargin
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
// declared property getter: -(id)inlineText;
// declared property getter: -(id)inlineTextLabel;
// declared property getter: -(float)inlineTextRightMargin;
-(void)layoutSubviews;
// declared property setter: -(void)setInlineText:(id)text;
// declared property setter: -(void)setInlineTextLabel:(id)label;
// declared property setter: -(void)setInlineTextRightMargin:(float)margin;
@end
