/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import </libobjc.A.h>

@class NSOperationQueue;

@interface CMDeviceOrientationManagerInternal : NSObject {
	int fSampleLock;
	Dispatcher* fDeviceOrientationDispatcher;
	id fDeviceOrientationHandler;
	NSOperationQueue* fDeviceOrientationQueue;
	dispatch_semaphore_s* fDeviceOrientationSemaphore;
	BOOL fDidSignalSemaphore;
	Sample fLatestDeviceOrientationSample;
}
-(id)init;
-(id).cxx_construct;
-(void)dealloc;
@end

