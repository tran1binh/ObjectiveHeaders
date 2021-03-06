/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAPropertyAnimation.h"
#import "QuartzCore-Structs.h"
#import "CAAnimation.h"

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;
@property(assign, getter=isCumulative) BOOL cumulative;
@property(copy) NSString* keyPath;
@property(retain) CAValueFunction* valueFunction;
+(id)animationWithKeyPath:(id)keyPath;
-(unsigned)_propertyFlagsForLayer:(id)layer;
-(BOOL)_setCARenderAnimation:(Animation*)animation layer:(id)layer;
-(BOOL)additive;
-(void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;
-(BOOL)cumulative;
// declared property getter: -(BOOL)isAdditive;
// declared property getter: -(BOOL)isCumulative;
// declared property getter: -(id)keyPath;
// declared property setter: -(void)setAdditive:(BOOL)additive;
// declared property setter: -(void)setCumulative:(BOOL)cumulative;
// declared property setter: -(void)setKeyPath:(id)path;
// declared property setter: -(void)setValueFunction:(id)function;
// declared property getter: -(id)valueFunction;
@end

@interface CAPropertyAnimation (CAAnimationPrivate)
@end

