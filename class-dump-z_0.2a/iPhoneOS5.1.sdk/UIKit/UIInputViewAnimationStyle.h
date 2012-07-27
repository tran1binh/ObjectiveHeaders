/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : XXUnknownSuperclass {
@private
	BOOL animated;
	double duration;
	int outDirection;
	BOOL force;
}
@property(assign, nonatomic) BOOL animated;	// @synthesize
@property(assign, nonatomic) double duration;	// @synthesize
@property(assign, nonatomic) BOOL force;	// @synthesize
@property(assign, nonatomic) int outDirection;	// @synthesize
+(id)animationStyleAnimated:(BOOL)animated duration:(double)duration outDirection:(int)direction;
+(id)animationStyleDefault;
+(id)animationStyleImmediate;
// declared property getter: -(BOOL)animated;
-(id)description;
// declared property getter: -(double)duration;
// declared property getter: -(BOOL)force;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(int)outDirection;
// declared property setter: -(void)setAnimated:(BOOL)animated;
// declared property setter: -(void)setDuration:(double)duration;
// declared property setter: -(void)setForce:(BOOL)force;
// declared property setter: -(void)setOutDirection:(int)direction;
@end
