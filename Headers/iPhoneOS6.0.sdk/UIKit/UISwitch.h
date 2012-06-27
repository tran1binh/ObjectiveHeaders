/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UIColor, UIImage;

@interface UISwitch : UIControl <NSCoding> {
@private
	id _control;
	float _enabledAlpha;
}
@property(assign, nonatomic) float enabledAlpha;	// @synthesize=_enabledAlpha
@property(retain, nonatomic) UIImage* offImage;
@property(assign, nonatomic, getter=isOn) BOOL on;	// @dynamic
@property(retain, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor* onColor;
@property(retain, nonatomic) UIImage* onImage;
@property(retain, nonatomic) UIColor* onTintColor;
@property(retain, nonatomic) UIColor* thumbTintColor;
@property(retain, nonatomic) UIColor* tintColor;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(void)_animateToOn:(BOOL)on withDuration:(float)duration sendAction:(BOOL)action;
-(void)_commonInitNewLook;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)_encodeFrameWithCoder:(id)coder;
-(void)_handlePanNL:(id)nl;
-(void)_handleTapNL:(id)nl;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)size;
-(void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void*)context;
// declared property getter: -(id)_onColor;
-(id)_onTintColor;
-(void)_populateArchivedSubviews:(id)subviews;
-(id)_scriptingInfo;
// declared property setter: -(void)_setOnColor:(id)color;
-(void)_setOnTintColor:(id)color;
-(BOOL)_useOldSize;
-(void)dealloc;
-(unsigned long long)defaultAccessibilityTraits;
// declared property getter: -(float)enabledAlpha;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
// declared property getter: -(BOOL)isOn;
// declared property getter: -(id)offImage;
// declared property getter: -(id)onImage;
// declared property getter: -(id)onTintColor;
-(void)setAlpha:(float)alpha;
-(void)setAlternateColors:(BOOL)colors;
-(void)setEnabled:(BOOL)enabled;
// declared property setter: -(void)setEnabledAlpha:(float)alpha;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setOffImage:(id)image;
// declared property setter: -(void)setOn:(BOOL)on;
-(void)setOn:(BOOL)on animated:(BOOL)animated;
// declared property setter: -(void)setOnImage:(id)image;
// declared property setter: -(void)setOnTintColor:(id)color;
// declared property setter: -(void)setThumbTintColor:(id)color;
// declared property setter: -(void)setTintColor:(id)color;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)thumbTintColor;
// declared property getter: -(id)tintColor;
@end
