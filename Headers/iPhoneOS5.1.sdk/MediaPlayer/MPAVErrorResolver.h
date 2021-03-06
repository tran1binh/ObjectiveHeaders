/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol MPAVErrorResolverDelegate;

@interface MPAVErrorResolver : XXUnknownSuperclass {
	id<MPAVErrorResolverDelegate> _delegate;
}
@property(assign, nonatomic) id<MPAVErrorResolverDelegate> delegate;	// @synthesize=_delegate
// declared property getter: -(id)delegate;
-(void)resolveError:(id)error;
-(void)sendDidResolveError:(id)send withResolution:(int)resolution;
// declared property setter: -(void)setDelegate:(id)delegate;
@end

