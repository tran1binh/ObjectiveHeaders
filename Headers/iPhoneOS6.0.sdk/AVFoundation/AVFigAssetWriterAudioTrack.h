/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVFigAssetWriterTrack.h"

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {
@private
	NSMutableArray* _pendingAudioSampleBuffers;
}
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriter*)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id*)error;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)figAssetWriterUsingFormatSpecification sourcePixelBufferAttributes:(id)attributes error:(id*)error;
-(BOOL)_flushPendingSampleBuffersReturningError:(id*)error;
-(BOOL)addSampleBuffer:(opaqueCMSampleBuffer*)buffer error:(id*)error;
-(void)dealloc;
-(BOOL)markEndOfDataReturningError:(id*)dataReturningError;
-(void)prepareToEndSession;
@end
