/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer {
@private
	double _maximumDeviation;
	double _minimumDistance;
	CGPoint _startPosition;
	BOOL _restrictsToAngle;
	double _angle;
	UITouch* _touch;
	UIDelayedAction* _tooSlow;
	double _startAngle;
}
@property(assign, nonatomic) double angle;	// @synthesize=_angle
@property(assign, nonatomic) double maximumDeviation;	// @synthesize=_maximumDeviation
@property(assign, nonatomic) double minimumDistance;	// @synthesize=_minimumDistance
@property(assign, nonatomic) BOOL restrictsToAngle;	// @synthesize=_restrictsToAngle
@property(assign, nonatomic) double startAngle;	// @synthesize=_startAngle
@property(assign, nonatomic) CGPoint startPosition;	// @synthesize=_startPosition
@property(retain, nonatomic) UITouch* touch;	// @synthesize=_touch
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)_resetGestureRecognizer;
// declared property getter: -(double)angle;
-(void)clearTimer;
-(void)dealloc;
// declared property getter: -(double)maximumDeviation;
// declared property getter: -(double)minimumDistance;
// declared property getter: -(BOOL)restrictsToAngle;
// declared property setter: -(void)setAngle:(double)angle;
// declared property setter: -(void)setMaximumDeviation:(double)deviation;
// declared property setter: -(void)setMinimumDistance:(double)distance;
// declared property setter: -(void)setRestrictsToAngle:(BOOL)angle;
// declared property setter: -(void)setStartAngle:(double)angle;
// declared property setter: -(void)setStartPosition:(CGPoint)position;
// declared property setter: -(void)setTouch:(id)touch;
// declared property getter: -(double)startAngle;
// declared property getter: -(CGPoint)startPosition;
-(void)tooSlow:(id)slow;
// declared property getter: -(id)touch;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end
