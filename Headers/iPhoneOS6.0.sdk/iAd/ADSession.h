/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import "iAd-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSTimer, NSString, NSMutableDictionary;

@interface ADSession : XXUnknownSuperclass {
@private
	NSMutableDictionary* _recipientsByAdType;
	NSMutableDictionary* _bannerControllersByAdType;
	NSMutableDictionary* _bannerControllers;
	NSMutableSet* _pendingOpenControllers;
	double _lastControllerCreationTime;
	NSMutableSet* _reassignmentScheduledAdTypes;
	id _remoteSession;
	NSString* _serverURL;
	BOOL _isInBackground;
	NSTimer* _visibilityTimer;
	double _visibilitySlowCheckTime;
	BOOL _creatingControllers;
	unsigned _recentlyCreatedControllers;
}
@property(assign, nonatomic) BOOL creatingControllers;	// @synthesize=_creatingControllers
@property(assign, nonatomic) BOOL isInBackground;	// @synthesize=_isInBackground
@property(assign, nonatomic) unsigned recentlyCreatedControllers;	// @synthesize=_recentlyCreatedControllers
@property(retain, nonatomic) id remoteSession;	// @synthesize=_remoteSession
@property(retain, nonatomic) NSString* serverURL;	// @synthesize=_serverURL
@property(assign, nonatomic) double visibilitySlowCheckTime;	// @synthesize=_visibilitySlowCheckTime
@property(retain, nonatomic) NSTimer* visibilityTimer;	// @synthesize=_visibilityTimer
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedInstance;
-(id)init;
-(void)_adSheetConnectionBootstrapped;
-(void)_adSheetConnectionLost;
-(void)_appDidBecomeActive;
-(void)_appWillResignActive;
-(BOOL)_createBannerControllerForRecipient:(id)recipient;
-(void)_handleAdSheetMessage:(id)message userInfo:(id)info;
-(void)_orientationChanged;
-(void)_reassignAllBannerControllers;
-(void)_reassignBannerControllersForAdType:(id)adType pool:(id)pool;
-(id)_unassignedBannerControllerForAdType:(id)adType;
-(void)adRecipientPriorityChanged:(id)changed;
-(id)autorelease;
-(void)bannerControllerDidClose:(id)bannerController;
-(void)bannerControllerDidOpen:(id)bannerController;
-(void)checkVisibility:(id)visibility;
-(id)copyWithZone:(NSZone*)zone;
// declared property getter: -(BOOL)creatingControllers;
-(void)forwardShakeEventToAdSheet;
// declared property getter: -(BOOL)isInBackground;
// declared property getter: -(unsigned)recentlyCreatedControllers;
-(void)registerAdRecipient:(id)recipient;
-(oneway void)release;
// declared property getter: -(id)remoteSession;
-(void)resumeVisibilityCheck;
-(id)retain;
-(unsigned)retainCount;
// declared property getter: -(id)serverURL;
// declared property setter: -(void)setCreatingControllers:(BOOL)controllers;
// declared property setter: -(void)setIsInBackground:(BOOL)background;
// declared property setter: -(void)setRecentlyCreatedControllers:(unsigned)controllers;
// declared property setter: -(void)setRemoteSession:(id)session;
// declared property setter: -(void)setServerURL:(id)url;
// declared property setter: -(void)setVisibilitySlowCheckTime:(double)time;
// declared property setter: -(void)setVisibilityTimer:(id)timer;
-(void)suspendVisibilityCheck;
-(void)unregisterAdRecipient:(id)recipient;
// declared property getter: -(double)visibilitySlowCheckTime;
// declared property getter: -(id)visibilityTimer;
@end

