/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterInputHelper.h"
#import "AVFoundation-Structs.h"


@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper {
}
-(id)initWithConfigurationState:(id)configurationState;
-(id)initWithMediaType:(id)mediaType outputSettings:(id)settings sourceFormatHint:(opaqueCMFormatDescription*)hint;
-(BOOL)_canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type exceptionReason:(id*)reason;
-(BOOL)_compareLanguageCode:(id)code withExtendedLanguageTag:(id)extendedLanguageTag;
-(BOOL)_validateLanguageCode:(id)code;
-(void)addTrackAssociationWithTrackOfInput:(id)input type:(id)type;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type;
-(void)setAlternateGroupID:(short)anId;
-(void)setExpectsMediaDataInRealTime:(BOOL)realTime;
-(void)setExtendedLanguageTag:(id)tag;
-(void)setLanguageCode:(id)code;
-(void)setMarksOutputTrackAsEnabled:(BOOL)enabled;
-(void)setMediaTimeScale:(int)scale;
-(void)setMetadata:(id)metadata;
-(void)setNaturalSize:(CGSize)size;
-(void)setSourcePixelBufferAttributes:(id)attributes;
-(void)setTransform:(CGAffineTransform)transform;
-(int)status;
@end

