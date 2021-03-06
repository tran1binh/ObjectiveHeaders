/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVPlayer, AVPlayerItem, AVSubtitleLayer, CALayer, NSString;

@interface AVPlayerLayerInternal : XXUnknownSuperclass {
	AVPlayer* _player;
	CALayer* contentLayer;
	NSString* videoGravity;
	NSString* subtitleGravity;
	AVSubtitleLayer* subtitleLayer;
	BOOL shouldObservePlayer;
	BOOL isObservingPlayer;
	BOOL hasPlayerToObserve;
	BOOL isOverscanSubtitleSupportEnabled;
	dispatch_queue_s* serialQueue;
	BOOL isPresentationLayer;
	BOOL isReadyForDisplay;
	OpaqueFigSimpleMutex* isReadyForDisplayMutex;
	AVPlayerItem* itemMarkedReadyForDisplay;
	CGSize presentationSize;
}
@end

