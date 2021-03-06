/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"

@class UIView;

@interface GKInsetCaptiveView : XXUnknownSuperclass {
@private
	UIEdgeInsets _contentInsets;
	UIView* _captiveSubview;
}
@property(retain, nonatomic) UIView* captiveSubview;	// @synthesize=_captiveSubview
@property(assign, nonatomic) UIEdgeInsets contentInsets;	// @synthesize=_contentInsets
-(id)init;
// declared property getter: -(id)captiveSubview;
// declared property getter: -(UIEdgeInsets)contentInsets;
-(void)dealloc;
-(void)layoutSubviews;
// declared property setter: -(void)setCaptiveSubview:(id)subview;
// declared property setter: -(void)setContentInsets:(UIEdgeInsets)insets;
@end

