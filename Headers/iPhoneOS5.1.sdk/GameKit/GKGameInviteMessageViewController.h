/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKAbstractComposeController.h"

@class NSString, NSArray;
@protocol GKGameInviteMessageViewControllerDelegate;

@interface GKGameInviteMessageViewController : GKAbstractComposeController {
	id<GKGameInviteMessageViewControllerDelegate> _delegate;
	NSArray* _players;
	NSString* _defaultMessage;
}
@property(retain, nonatomic) NSString* defaultMessage;	// @synthesize=_defaultMessage
@property(assign, nonatomic) id<GKGameInviteMessageViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) NSArray* players;	// @synthesize=_players
-(void)dealloc;
// declared property getter: -(id)defaultMessage;
// declared property getter: -(id)delegate;
-(void)done;
-(void)loadView;
// declared property getter: -(id)players;
// declared property setter: -(void)setDefaultMessage:(id)message;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setPlayers:(id)players;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

