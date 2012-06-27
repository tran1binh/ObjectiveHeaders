/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "NSURLAuthenticationChallengeSender.h"
#import "Foundation-Structs.h"

@class NSURLConnectionInternal;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
@private
	NSURLConnectionInternal* _internal;
}
+(void)_resourceLoadLoop:(id)loop;
+(void)_setLoaderThreadPriority:(int)priority;
+(void)_setMIMETypesWithNoSizeLimit:(id)noSizeLimit;
+(void)_setSweeperInterval:(unsigned)interval;
+(unsigned)_sweeperInterval;
+(BOOL)canHandleRequest:(id)request;
+(id)connectionWithRequest:(id)request delegate:(id)delegate;
+(CFRunLoopRef)resourceLoaderRunLoop;
+(void)sendAsynchronousRequest:(id)request queue:(id)queue completionHandler:(id)handler;
+(id)sendSynchronousRequest:(id)request returningResponse:(id*)response error:(id*)error;
-(id)initWithRequest:(id)request delegate:(id)delegate;
-(id)initWithRequest:(id)request delegate:(id)delegate startImmediately:(BOOL)immediately;
-(id)_cfInternal;
-(id)_dlInternal;
-(id)_initWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;
-(void)_resumeLoading;
-(void)_suspendLoading;
-(void)cancel;
-(void)cancelAuthenticationChallenge:(id)challenge;
-(id)connectionProperties;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;
-(id)currentRequest;
-(void)dealloc;
-(BOOL)defersCallbacks;
-(void)download;
-(id)originalRequest;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(void)setDefersCallbacks:(BOOL)callbacks;
-(void)setDelegateQueue:(id)queue;
-(void)start;
-(void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;
-(void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;
@end
