/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSXPCDistantObjectWithError.h"


__attribute__((visibility("hidden")))
@interface _NSXPCDistantObjectSynchronousWithError : _NSXPCDistantObjectWithError {
@private
	double _timeout;
}
@property(assign) double timeout;	// @synthesize=_timeout
-(id)_initWithConnection:(id)connection proxyNumber:(unsigned long long)number interface:(id)interface error:(id)error timeout:(double)timeout;
-(void)forwardInvocation:(id)invocation;
// declared property setter: -(void)setTimeout:(double)timeout;
// declared property getter: -(double)timeout;
@end
