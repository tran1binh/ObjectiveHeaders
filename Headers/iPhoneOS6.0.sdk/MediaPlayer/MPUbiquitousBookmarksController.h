/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MZUniversalPlaybackPositionDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, MZUniversalPlaybackPositionStore;
@protocol OS_dispatch_queue;

@interface MPUbiquitousBookmarksController : XXUnknownSuperclass <MZUniversalPlaybackPositionDataSource> {
@private
	NSObject<OS_dispatch_queue>* _databaseAccessQueue;
	MZUniversalPlaybackPositionStore* _uppStore;
	BOOL _automaticallySynchronizeWhenApplicationActiveStateChanges;
	BOOL _automaticallySycnhronizeAtRegularIntervals;
	BOOL _databaseHasBookmarkableContents;
	BOOL _externallyActive;
}
@property(assign, nonatomic) BOOL automaticallySycnhronizeAtRegularIntervals;	// @synthesize=_automaticallySycnhronizeAtRegularIntervals
@property(assign, nonatomic) BOOL automaticallySynchronizeWhenApplicationActiveStateChanges;	// @synthesize=_automaticallySynchronizeWhenApplicationActiveStateChanges
@property(assign, nonatomic) BOOL databaseHasBookmarkableContents;	// @synthesize=_databaseHasBookmarkableContents
@property(assign, nonatomic) BOOL externallyActive;	// @synthesize=_externallyActive
@property(readonly, assign, nonatomic) MZUniversalPlaybackPositionStore* uppStore;	// @synthesize=_uppStore
+(id)sharedUbiquitousBookmarksController;
-(id)init;
-(void)_applicationDidEnterBackgroundNotification:(id)_application;
-(void)_applicationWillEnterForegroundNotification:(id)_application;
-(void)_defaultMediaLibraryDidChangeNotification:(id)_defaultMediaLibrary;
-(BOOL)_isEnabled;
-(void)_mediaLibraryDidChangeNotification:(id)_mediaLibrary;
-(unsigned)_mzAutomaticSynchronizeOptions;
-(void)_playbackStateDidChangeNotification:(id)_playbackState;
-(BOOL)_shouldBeActive;
-(void)_synchronizeImmediatelyIfHasChangesAndInactive;
-(void)_updateBoomkarkabilityStateWithInitialSyncDelay:(double)initialSyncDelay;
-(void)_updateUPPStoreActiveForExternallyActiveChange;
// declared property getter: -(BOOL)automaticallySycnhronizeAtRegularIntervals;
// declared property getter: -(BOOL)automaticallySynchronizeWhenApplicationActiveStateChanges;
-(id)beginTransactionWithItemsToSyncEnumerationBlock:(id)syncEnumerationBlock;
-(void)cancelUniversalPlaybackPositionTransaction:(id)transaction;
-(void)commitUniversalPlaybackPositionTransaction:(id)transaction domainVersion:(id)version metadataEnumerationBlock:(id)block;
// declared property getter: -(BOOL)databaseHasBookmarkableContents;
-(void)dealloc;
// declared property getter: -(BOOL)externallyActive;
// declared property setter: -(void)setAutomaticallySycnhronizeAtRegularIntervals:(BOOL)regularIntervals;
// declared property setter: -(void)setAutomaticallySynchronizeWhenApplicationActiveStateChanges:(BOOL)changes;
// declared property setter: -(void)setDatabaseHasBookmarkableContents:(BOOL)contents;
// declared property setter: -(void)setExternallyActive:(BOOL)active;
-(void)setNeedsSynchronizeForBookmarkPropertyChangesToMediaItem:(id)mediaItem;
-(void)synchronizeImmediatelyWithCompletionBlock:(id)completionBlock;
// declared property getter: -(id)uppStore;
@end

