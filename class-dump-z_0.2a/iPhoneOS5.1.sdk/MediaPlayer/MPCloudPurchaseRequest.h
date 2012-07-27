/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SSPurchaseRequestDelegate.h"

@class NSMutableDictionary, NSArray, NSMutableArray;

@interface MPCloudPurchaseRequest : XXUnknownSuperclass <SSPurchaseRequestDelegate> {
	NSArray* _mediaItems;
	dispatch_queue_s* _requestsQueue;
	NSMutableDictionary* _requestsByMediaItemPID;
	NSMutableArray* _waitingRequests;
	NSMutableArray* _servicedRequests;
	int _purchaseReason;
	BOOL _purchaseReasonIdenticalForAll;
}
@property(readonly, assign, nonatomic) NSArray* mediaItems;	// @synthesize=_mediaItems
@property(readonly, assign, nonatomic) int purchaseReason;	// @synthesize=_purchaseReason
-(id)initWithMediaItem:(id)mediaItem purchaseReason:(int)reason;
-(id)initWithMediaItems:(id)mediaItems;
-(id)_initWithMediaItems:(id)mediaItems purchaseReason:(int)reason;
-(id)_purchaseForMediaItem:(id)mediaItem;
-(BOOL)_shouldCancelRemainingRequestForError:(id)error;
-(void)dealloc;
// declared property getter: -(id)mediaItems;
-(void)prioritizeMediaItem:(id)item forPlayback:(BOOL)playback purchaseCompletionHandler:(id)handler;
// declared property getter: -(int)purchaseReason;
-(int)purchaseReasonForMediaItemPersistentID:(id)mediaItemPersistentID;
-(void)runOnQueue:(dispatch_queue_s*)queue withCompletionHandler:(id)completionHandler;
-(void)setDownloadHandler:(id)handler forMediaItem:(id)mediaItem;
@end
