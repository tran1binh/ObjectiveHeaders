/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVWeakReference, NSMutableDictionary, NSString, NSError, AVAsset, AVPropertyStorage, AVAudioMix, NSObject, NSDate, NSDictionary, NSMutableArray, NSURL, NSArray, AVPlayerItem, AVVideoComposition, AVPlayerConnection;
@protocol OS_dispatch_queue;

@interface AVPlayerItemInternal : XXUnknownSuperclass {
	AVWeakReference* weakReference;
	AVPlayerItem* previousItem;
	AVPlayerItem* nextItem;
	OpaqueFigPlaybackItem* figPlaybackItem;
	OpaqueFigCPEProtector* figCPEProtector;
	OpaqueCMTimebase* figTimebase;
	AVWeakReference* playerReference;
	AVPlayerConnection* playerConnection;
	BOOL isCurrentPlayerItem;
	NSObject<OS_dispatch_queue>* stateDispatchQueue;
	AVPropertyStorage* propertyStorage;
	int status;
	NSError* error;
	NSURL* URL;
	AVAsset* asset;
	AVAsset* assetWithFigPlaybackItem;
	NSArray* trackIDsForAssetWithFigPlaybackItem;
	NSMutableArray* syncLayers;
	NSArray* timedMetadata;
	XXStruct_pwHToB initialDuration;
	XXStruct_pwHToB initialTime;
	XXStruct_pwHToB initialToleranceBefore;
	XXStruct_pwHToB initialToleranceAfter;
	XXStruct_pwHToB initialForwardPlaybackEndTime;
	XXStruct_pwHToB initialReversePlaybackEndTime;
	NSDate* initialDate;
	NSDate* initialEstimatedDate;
	BOOL initialLimitReadAhead;
	int initialPlaybackLikelyToKeepUpTrigger;
	BOOL initialAlwaysMonitorsPlayability;
	BOOL initialWillNeverSeekBackwardsHint;
	BOOL initialContinuesPlayingDuringPrerollForSeek;
	BOOL initialContinuesPlayingDuringPrerollForRateChange;
	double initialBufferingTargetMinimum;
	double initialBufferingTargetMaximum;
	CFStringRef initialFigTimePitchAlgorithm;
	AVAudioMix* audioMix;
	AVVideoComposition* videoComposition;
	BOOL seekingWaitsForVideoCompositionRendering;
	NSArray* textStyleRules;
	NSDictionary* gaplessInfo;
	NSDictionary* audibleDRMInfo;
	NSDictionary* rampInOutInfo;
	float soundCheckVolumeNormalization;
	float volumeAdjustment;
	NSMutableArray* handlersToCallWhenReadyForEnqueueing;
	NSMutableDictionary* mediaOptionsSelectedByClient;
	NSMutableDictionary* tracksSelectedByClientViaAlternateTrackGroupSPI;
	BOOL haveInitialSamples;
	BOOL haveCPEProtector;
	BOOL didSetAssetToAssetWithFigPlaybackItem;
	BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
	BOOL didBecomeReadyForInspectionOfTracks;
	BOOL didBecomeReadyForInspectionOfPresentationSize;
	BOOL didInformObserversAboutAvailabilityOfTracks;
	BOOL didFireKVOForAssetForNonStreamingItem;
	BOOL didApplyInitialAudioMix;
	BOOL wasInitializedWithURL;
	BOOL needTimedMetadataNotification;
	BOOL nonForcedSubtitleDisplayEnabled;
	BOOL externalSubtitlesEnabled;
	BOOL externalProtectionRequested;
	int eqPreset;
	OpaqueFigSimpleMutex* seekIDMutex;
	int nextSeekIDToGenerate;
	int pendingSeekID;
	id seekCompletionHandler;
	NSString* dataYouTubeID;
	NSMutableArray* itemOutputs;
	NSMutableArray* itemVideoOutputs;
}
@end

