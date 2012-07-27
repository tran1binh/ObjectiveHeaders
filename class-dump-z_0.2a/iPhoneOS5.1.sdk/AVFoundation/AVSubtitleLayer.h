/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVPlayer, CADisplay, AVSubtitleLayerInternal;

@interface AVSubtitleLayer : XXUnknownSuperclass {
	AVSubtitleLayerInternal* _subtitleLayer;
}
@property(assign, nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
@property(retain, nonatomic) AVPlayer* player;	// @dynamic
@property(readonly, assign, nonatomic) CADisplay* subtitleLayerDisplay;
+(id)subtitleLayerWithPlayer:(id)player;
-(id)init;
-(id)initWithLayer:(id)layer;
-(void)_invalidateBoundaryTimeObserver;
-(void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;
-(void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)enabled;
-(void)dealloc;
-(void)finalize;
// declared property getter: -(BOOL)isOverscanSubtitleSupportEnabled;
-(void)layerDidBecomeVisible:(BOOL)layer;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
// declared property getter: -(id)player;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;
// declared property setter: -(void)setPlayer:(id)player;
// declared property getter: -(id)subtitleLayerDisplay;
-(void)subtitlesDidChange:(id)subtitles;
@end
