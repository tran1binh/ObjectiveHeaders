/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAPropertyAnimation.h"


@interface CABasicAnimation : CAPropertyAnimation {
}
@property(retain) id byValue;
@property(assign) float endAngle;
@property(retain) id fromValue;
@property(assign) BOOL roundsToInteger;
@property(assign) float startAngle;
@property(retain) id toValue;
-(void)CA_prepareRenderValue;
-(Animation*)_copyRenderAnimationForLayer:(id)layer;
-(BOOL)_setCARenderAnimation:(Animation*)animation layer:(id)layer;
-(double)_timeFunction:(double)function;
-(void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;
// declared property getter: -(id)byValue;
// declared property getter: -(float)endAngle;
// declared property getter: -(id)fromValue;
// declared property getter: -(BOOL)roundsToInteger;
// declared property setter: -(void)setByValue:(id)value;
// declared property setter: -(void)setEndAngle:(float)angle;
// declared property setter: -(void)setFromValue:(id)value;
// declared property setter: -(void)setRoundsToInteger:(BOOL)integer;
// declared property setter: -(void)setStartAngle:(float)angle;
// declared property setter: -(void)setToValue:(id)value;
// declared property getter: -(float)startAngle;
// declared property getter: -(id)toValue;
@end

