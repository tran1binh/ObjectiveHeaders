/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSInvocation, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : XXUnknownSuperclass {
@private
	BOOL _enableUserInteraction;
	int _reqcnt;
	NSInvocation* _presentInvocation;
	id _cancellationHandler;
	double _timeout;
	NSObject<OS_dispatch_source>* _timerSource;
}
@property(copy, nonatomic) id cancellationHandler;	// @synthesize=_cancellationHandler
@property(retain, nonatomic) NSInvocation* presentInvocation;	// @synthesize=_presentInvocation
-(id)initWithTimeout:(double)timeout cancellationHandler:(id)handler;
-(void)beginDelayedPresentation;
-(void)cancelDelayedPresentation:(BOOL)presentation;
// declared property getter: -(id)cancellationHandler;
-(void)dealloc;
-(int)decrementRequestCount;
-(id)delayingController;
-(void)finishDelayedPresentation:(id)presentation;
-(int)incrementRequestCount;
-(id)invocationTarget;
// declared property getter: -(id)presentInvocation;
-(int)requestCount;
// declared property setter: -(void)setCancellationHandler:(id)handler;
// declared property setter: -(void)setPresentInvocation:(id)invocation;
@end
