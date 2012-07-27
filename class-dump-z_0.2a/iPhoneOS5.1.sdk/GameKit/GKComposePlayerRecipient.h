/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKComposeRecipient.h"

@class GKPlayer;

@interface GKComposePlayerRecipient : GKComposeRecipient {
	GKPlayer* _player;
}
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
+(int)_recipientABProperty;
+(id)recipientWithPlayer:(id)player;
-(id)initWithPlayer:(id)player;
-(id)_unformattedAddress;
-(id)address;
-(void)dealloc;
-(id)description;
-(id)displayString;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)player;
// declared property setter: -(void)setPlayer:(id)player;
-(id)uncommentedAddress;
@end
