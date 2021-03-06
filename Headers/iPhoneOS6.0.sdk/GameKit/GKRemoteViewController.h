/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKServiceViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIPopoverControllerDelegate.h"

@class NSMutableDictionary, GKGame, GKHostedViewController;

@interface GKRemoteViewController : XXUnknownSuperclass <UIPopoverControllerDelegate, GKServiceViewControllerDelegate> {
@private
	GKHostedViewController* _managingViewControllerWeak;
	BOOL _isInFormSheet;
	GKGame* _game;
	BOOL _didSetRemoteGame;
	NSMutableDictionary* _dirtyProperties;
	id _blockToPerformAfterViewDidAppear;
	BOOL _viewDidAppear;
}
@property(copy, nonatomic) id blockToPerformAfterViewDidAppear;	// @synthesize=_blockToPerformAfterViewDidAppear
@property(assign, nonatomic) BOOL didSetRemoteGame;	// @synthesize=_didSetRemoteGame
@property(retain, nonatomic) NSMutableDictionary* dirtyProperties;	// @synthesize=_dirtyProperties
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(assign, nonatomic) BOOL isInFormSheet;	// @synthesize=_isInFormSheet
@property(assign, nonatomic) GKHostedViewController* managingViewController;	// @synthesize=_managingViewControllerWeak
@property(assign, nonatomic) BOOL viewDidAppear;	// @synthesize=_viewDidAppear
-(BOOL)_dismissSelfAfterGettingShouldCancel;
-(BOOL)_dismissSelfAfterGettingShouldFinish;
// declared property getter: -(id)blockToPerformAfterViewDidAppear;
-(void)dealloc;
// declared property getter: -(BOOL)didSetRemoteGame;
// declared property getter: -(id)dirtyProperties;
// declared property getter: -(id)game;
// declared property getter: -(BOOL)isInFormSheet;
// declared property getter: -(id)managingViewController;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)observedKeyPaths;
-(void)presentActivityViewControllerForActivityItems:(id)activityItems fromRect:(id)rect withReply:(id)reply;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)readyToPresentInController:(id)controller;
-(id)remoteProtocol;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;
-(BOOL)serviceNeedsGameAndLocalPlayer;
// declared property setter: -(void)setBlockToPerformAfterViewDidAppear:(id)appear;
// declared property setter: -(void)setDidSetRemoteGame:(BOOL)setRemoteGame;
// declared property setter: -(void)setDirtyProperties:(id)properties;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setIsInFormSheet:(BOOL)formSheet;
// declared property setter: -(void)setManagingViewController:(id)controller;
-(void)setValue:(id)value forKeyPath:(id)keyPath;
// declared property setter: -(void)setViewDidAppear:(BOOL)appear;
-(void)setupRemoteView;
// declared property getter: -(BOOL)viewDidAppear;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewServiceDidTerminateWithError:(id)viewService;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(id)whitelistedClassNames;
@end

