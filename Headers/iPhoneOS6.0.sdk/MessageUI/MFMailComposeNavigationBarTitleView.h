/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UILabel, NSString;

@interface MFMailComposeNavigationBarTitleView : XXUnknownSuperclass {
@private
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _subtitleImageView;
	unsigned _style;
}
@property(copy, nonatomic) NSString* title;
-(id)initWithFrame:(CGRect)frame;
-(id)_subtitleImageWhenMini:(BOOL)mini;
-(id)_subtitleTextColor;
-(float)_verticalOffsetForSubtitleImageWhenMini:(BOOL)subtitleImageWhenMini;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSubtitleText:(id)text withStyle:(unsigned)style;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
@end

