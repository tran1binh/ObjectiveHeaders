/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPButton.h"

@class MPAVController;

@interface MPTransportButton : MPButton {
@private
	MPAVController* player;
}
@property(retain, nonatomic) MPAVController* player;	// @synthesize
-(id)_automationID;
-(void)dealloc;
// declared property getter: -(id)player;
// declared property setter: -(void)setPlayer:(id)player;
@end

