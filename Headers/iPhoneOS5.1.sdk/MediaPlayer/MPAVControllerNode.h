/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSObject.h"

@class MPAVController;

@protocol MPAVControllerNode <NSObject>
@property(retain, nonatomic) MPAVController* player;
-(void)lockPlayer;
// declared property getter: -(id)player;
// declared property setter: -(void)setPlayer:(id)player;
-(void)unlockPlayer;
@end

