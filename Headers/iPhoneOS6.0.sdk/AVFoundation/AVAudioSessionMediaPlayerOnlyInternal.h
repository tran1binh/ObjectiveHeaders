/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVWeakReference, NSString;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnlyInternal : XXUnknownSuperclass {
	AVWeakReference* weakReference;
	OpaqueFigPlayer* figPlayer;
	BOOL isAppAudioSession;
	BOOL isActive;
	NSString* category;
	NSString* mode;
	id<AVAudioSessionDelegateMediaPlayerOnly> delegate;
}
@end

