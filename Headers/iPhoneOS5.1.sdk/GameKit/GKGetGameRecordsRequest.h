/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class GKPlayer, NSArray;

@interface GKGetGameRecordsRequest : GKDataRequest {
@private
	NSArray* _games;
	GKPlayer* _player;
}
@property(retain, nonatomic) NSArray* games;	// @synthesize=_games
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
-(void)dealloc;
// declared property getter: -(id)games;
-(id)key;
// declared property getter: -(id)player;
-(id)request;
// declared property setter: -(void)setGames:(id)games;
// declared property setter: -(void)setPlayer:(id)player;
@end

