/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVCaptureStillImageRequest : XXUnknownSuperclass <NSCopying> {
	id _sbufCompletionBlock;
	id _iosurfaceCompletionBlock;
	int _stillImageOrientation;
	BOOL _stillImageMirrored;
	CGSize _previewImageSize;
	unsigned long _imageDataFormatType;
	BOOL _isHDRImage;
	BOOL _isEV0Image;
	BOOL _chromaNoiseReductionEnabled;
	BOOL _suspendsVideoProcessing;
}
@property(assign) BOOL chromaNoiseReductionEnabled;	// @synthesize=_chromaNoiseReductionEnabled
@property(assign) unsigned long imageDataFormatType;	// @synthesize=_imageDataFormatType
@property(copy) id iosurfaceCompletionBlock;	// @synthesize=_iosurfaceCompletionBlock
@property(assign) BOOL isEV0Image;	// @synthesize=_isEV0Image
@property(assign) BOOL isHDRImage;	// @synthesize=_isHDRImage
@property(assign) CGSize previewImageSize;	// @synthesize=_previewImageSize
@property(copy) id sbufCompletionBlock;	// @synthesize=_sbufCompletionBlock
@property(assign, getter=isStillImageMirrored) BOOL stillImageMirrored;	// @synthesize=_stillImageMirrored
@property(assign) int stillImageOrientation;	// @synthesize=_stillImageOrientation
@property(assign) BOOL suspendsVideoProcessing;	// @synthesize=_suspendsVideoProcessing
+(id)request;
// declared property getter: -(BOOL)chromaNoiseReductionEnabled;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(unsigned long)imageDataFormatType;
// declared property getter: -(id)iosurfaceCompletionBlock;
// declared property getter: -(BOOL)isEV0Image;
// declared property getter: -(BOOL)isHDRImage;
// declared property getter: -(BOOL)isStillImageMirrored;
// declared property getter: -(CGSize)previewImageSize;
// declared property getter: -(id)sbufCompletionBlock;
// declared property setter: -(void)setChromaNoiseReductionEnabled:(BOOL)enabled;
// declared property setter: -(void)setImageDataFormatType:(unsigned long)type;
// declared property setter: -(void)setIosurfaceCompletionBlock:(id)block;
// declared property setter: -(void)setIsEV0Image:(BOOL)image;
// declared property setter: -(void)setIsHDRImage:(BOOL)image;
// declared property setter: -(void)setPreviewImageSize:(CGSize)size;
// declared property setter: -(void)setSbufCompletionBlock:(id)block;
// declared property setter: -(void)setStillImageMirrored:(BOOL)mirrored;
// declared property setter: -(void)setStillImageOrientation:(int)orientation;
// declared property setter: -(void)setSuspendsVideoProcessing:(BOOL)processing;
// declared property getter: -(int)stillImageOrientation;
// declared property getter: -(BOOL)suspendsVideoProcessing;
@end

