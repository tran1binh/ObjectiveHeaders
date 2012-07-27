/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface CMGestureManager : XXUnknownSuperclass {
	id _internal;
}
@property(copy) id gestureHandler;	// @dynamic
+(BOOL)isGestureServiceEnabled;
+(void)setGestureServiceEnabled:(BOOL)enabled;
-(id)init;
-(id)initWithPriority:(int)priority;
-(void)dealloc;
// declared property getter: -(id)gestureHandler;
// declared property setter: -(void)setGestureHandler:(id)handler;
-(void)startWatchdogCheckins;
-(void)stopWatchdogCheckins;
@end
