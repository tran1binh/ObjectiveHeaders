/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UIImageView, UIColor, UIImage;

@interface UISlider : UIControl <NSCoding> {
@private
	float _value;
	float _minValue;
	float _maxValue;
	float _alpha;
	CFDictionaryRef _contentLookup;
	UIImageView* _minValueImageView;
	UIImageView* _maxValueImageView;
	UIImageView* _thumbView;
	UIImageView* _minTrackView;
	UIImageView* _maxTrackView;
	UIView* _maxTrackClipView;
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned removeFromView : 1;
	} _sliderFlags;
	float _hitOffset;
	UIColor* _minTintColor;
	UIColor* _maxTintColor;
	UIColor* _thumbTintColor;
}
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;
@property(readonly, assign, nonatomic) UIImage* currentMaximumTrackImage;
@property(readonly, assign, nonatomic) UIImage* currentMinimumTrackImage;
@property(readonly, assign, nonatomic) UIImage* currentThumbImage;
@property(retain, nonatomic) UIColor* maximumTrackTintColor;	// @synthesize=_maxTintColor
@property(assign, nonatomic) float maximumValue;	// @dynamic
@property(retain, nonatomic) UIImage* maximumValueImage;
@property(retain, nonatomic) UIColor* minimumTrackTintColor;	// @synthesize=_minTintColor
@property(assign, nonatomic) float minimumValue;	// @dynamic
@property(retain, nonatomic) UIImage* minimumValueImage;
@property(retain, nonatomic) UIColor* thumbTintColor;	// @synthesize=_thumbTintColor
@property(assign, nonatomic) float value;	// @dynamic
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(id)_contentForState:(unsigned)state;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_controlMouseDown:(GSEventRef)down;
-(void)_controlMouseDragged:(GSEventRef)dragged;
-(void)_controlMouseUp:(GSEventRef)up;
-(void)_controlTouchBegan:(id)began withEvent:(id)event;
-(void)_controlTouchEnded:(id)ended withEvent:(id)event;
-(void)_controlTouchMoved:(id)moved withEvent:(id)event;
-(void)_initImages;
-(void)_initSubviews;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)size;
-(BOOL)_isThumbEnabled;
-(void)_layoutSubviewsForBoundsChange:(BOOL)boundsChange;
-(id)_maximumTrackImageForState:(unsigned)state;
-(id)_minimumTrackImageForState:(unsigned)state;
-(void)_populateArchivedSubviews:(id)subviews;
-(id)_scriptingInfo;
-(void)_sendDelayedActions;
-(void)_setContent:(id)content forState:(unsigned)state;
-(void)_setMaximumTrackImage:(id)image forStates:(unsigned)states;
-(void)_setMinimumTrackImage:(id)image forStates:(unsigned)states;
-(void)_setMinimumTrackVisible:(BOOL)visible withDuration:(double)duration;
-(void)_setThumbEnabled:(BOOL)enabled;
-(void)_setThumbImage:(id)image forStates:(unsigned)states;
-(void)_setThumbTintColor:(id)color forStates:(unsigned)states;
-(void)_setTrackEnabled:(BOOL)enabled;
-(void)_setValue:(float)value andSendAction:(BOOL)action;
-(void)_setValue:(float)value minValue:(float)value2 maxValue:(float)value3 andSendAction:(BOOL)action;
-(void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void*)context;
-(void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void*)context;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(id)_thumbImageForState:(unsigned)state;
-(BOOL)_trackEnabled;
-(void)_updateAppearanceForEnabled:(BOOL)enabled;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(id)createThumbView;
// declared property getter: -(id)currentMaximumTrackImage;
// declared property getter: -(id)currentMinimumTrackImage;
// declared property getter: -(id)currentThumbImage;
-(void)dealloc;
-(id)description;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)coder;
-(void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isAnimatingValueChange;
// declared property getter: -(BOOL)isContinuous;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)layoutSubviews;
-(id)maximumTrackImageForState:(unsigned)state;
// declared property getter: -(id)maximumTrackTintColor;
// declared property getter: -(float)maximumValue;
// declared property getter: -(id)maximumValueImage;
-(CGRect)maximumValueImageRectForBounds:(CGRect)bounds;
-(id)minimumTrackImageForState:(unsigned)state;
// declared property getter: -(id)minimumTrackTintColor;
// declared property getter: -(float)minimumValue;
// declared property getter: -(id)minimumValueImage;
-(CGRect)minimumValueImageRectForBounds:(CGRect)bounds;
-(id)scriptingInfoWithChildren;
-(void)setAlpha:(float)alpha;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setContinuous:(BOOL)continuous;
-(void)setEnabled:(BOOL)enabled;
-(void)setFrame:(CGRect)frame;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setMaximumTrackImage:(id)image forState:(unsigned)state;
-(void)setMaximumTrackImage:(id)image forStates:(unsigned)states;
// declared property setter: -(void)setMaximumTrackTintColor:(id)color;
// declared property setter: -(void)setMaximumValue:(float)value;
// declared property setter: -(void)setMaximumValueImage:(id)image;
-(void)setMinimumTrackImage:(id)image forState:(unsigned)state;
-(void)setMinimumTrackImage:(id)image forStates:(unsigned)states;
// declared property setter: -(void)setMinimumTrackTintColor:(id)color;
// declared property setter: -(void)setMinimumValue:(float)value;
// declared property setter: -(void)setMinimumValueImage:(id)image;
-(void)setSelected:(BOOL)selected;
-(void)setShowValue:(BOOL)value;
-(void)setThumbImage:(id)image forState:(unsigned)state;
-(void)setThumbImage:(id)image forStates:(unsigned)states;
// declared property setter: -(void)setThumbTintColor:(id)color;
// declared property setter: -(void)setValue:(float)value;
-(void)setValue:(float)value animated:(BOOL)animated;
-(CGSize)sizeThatFits:(CGSize)fits;
-(id)thumbImageForState:(unsigned)state;
-(CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;
// declared property getter: -(id)thumbTintColor;
-(CGRect)trackRectForBounds:(CGRect)bounds;
// declared property getter: -(float)value;
-(CGRect)valueTextRectForBounds:(CGRect)bounds;
@end

