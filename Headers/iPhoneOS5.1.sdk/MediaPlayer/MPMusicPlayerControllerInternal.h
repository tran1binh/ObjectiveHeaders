/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMusicPlayerController.h"
#import "MPServerObjectProxy.h"

@class MPMediaItemCollection, MPMusicPlayerController, MPMediaQuery;

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {
@private
	MPMusicPlayerController* _musicPlayerController;
	unsigned _clientPort;
	CFRunLoopSourceRef _runLoopSource;
	int _playbackState;
	int _playbackNotificationObservers;
	MPMediaQuery* _query;
	MPMediaItemCollection* _itemCollection;
	int _inBlockHandlingPlaybackStateChangedMessageFromServer;
	unsigned _didCheckIn : 1;
	unsigned _useApplicationSpecificQueue : 1;
	unsigned _useCachedPlaybackState : 1;
	unsigned _cachedPlaybackStateIsValid : 1;
	unsigned _allowsRemoteUIAccess : 1;
}
@property(assign) BOOL inBlockHandlingPlaybackStateChangedMessageFromServer;
-(id)initWithMusicPlayerController:(id)musicPlayerController;
-(void)didPrepareForRemoteSelectorInvocation;
// declared property getter: -(BOOL)inBlockHandlingPlaybackStateChangedMessageFromServer;
-(BOOL)prepareForRemoteSelectorInvocation;
-(void)serverConnectionDied;
// declared property setter: -(void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(BOOL)server;
@end

