/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface _UIReflectingView : UIView {
	UIView* _containerView;
	UIView* _gradientView;
	float _reflectionAlpha;
}
@property(readonly, assign, nonatomic) UIView* containerView;	// @synthesize=_containerView
@property(assign, nonatomic) float reflectionAlpha;
@property(assign, nonatomic) float reflectionFraction;
-(id)initWithFrame:(CGRect)frame;
-(id)_gradientLayer;
-(void)_updateGradientColors;
// declared property getter: -(id)containerView;
-(void)layoutSubviews;
// declared property getter: -(float)reflectionAlpha;
// declared property getter: -(float)reflectionFraction;
-(void)setBackgroundColor:(id)color;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setReflectionAlpha:(float)alpha;
// declared property setter: -(void)setReflectionFraction:(float)fraction;
@end
