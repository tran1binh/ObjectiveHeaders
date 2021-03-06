/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CIImage : XXUnknownSuperclass <NSCoding, NSCopying> {
	void* _priv;
}
+(id)emptyImage;
+(id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;
+(id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;
+(id)imageWithCGImage:(CGImageRef)cgimage;
+(id)imageWithCGImage:(CGImageRef)cgimage options:(id)options;
+(id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;
+(id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;
+(id)imageWithColor:(id)color;
+(id)imageWithContentsOfFile:(id)file;
+(id)imageWithContentsOfFile:(id)file options:(id)options;
+(id)imageWithContentsOfURL:(id)url;
+(id)imageWithContentsOfURL:(id)url options:(id)options;
+(id)imageWithData:(id)data;
+(id)imageWithData:(id)data options:(id)options;
+(id)imageWithIOSurface:(IOSurfaceRef)iosurface;
+(id)imageWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;
+(id)imageWithInternalRepresentation:(void*)internalRepresentation;
+(id)imageWithTexture:(unsigned)texture size:(CGSize)size flipped:(BOOL)flipped colorSpace:(CGColorSpaceRef)space;
+(id)imageWithTexture:(unsigned)texture size:(CGSize)size options:(id)options;
+(id)noiseImage;
-(id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;
-(id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;
-(id)initWithCGImage:(CGImageRef)cgimage;
-(id)initWithCGImage:(CGImageRef)cgimage options:(id)options;
-(id)initWithCGImageSource:(CGImageSourceRef)cgimageSource index:(unsigned long)index options:(id)options;
-(id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;
-(id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;
-(id)initWithCoder:(id)coder;
-(id)initWithColor:(id)color;
-(id)initWithColorR:(float)colorR G:(float)g B:(float)b A:(float)a;
-(id)initWithContentsOfFile:(id)file;
-(id)initWithContentsOfFile:(id)file options:(id)options;
-(id)initWithContentsOfURL:(id)url;
-(id)initWithContentsOfURL:(id)url options:(id)options;
-(id)initWithData:(id)data;
-(id)initWithData:(id)data options:(id)options;
-(id)initWithIOSurface:(IOSurfaceRef)iosurface;
-(id)initWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;
-(id)initWithTexture:(unsigned)texture size:(CGSize)size flipped:(BOOL)flipped colorSpace:(CGColorSpaceRef)space;
-(id)initWithTexture:(unsigned)texture size:(CGSize)size options:(id)options;
-(id)_autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties context:(id)context options:(id)options;
-(id)_dictForFeature:(id)feature scale:(float)scale imageHeight:(float)height;
-(id)_initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;
-(id)_initWithCGImage:(CGImageRef)cgimage options:(id)options;
-(id)_initWithInternalRepresentation:(void*)internalRepresentation;
-(void*)_internalRepresentation;
-(id)_scaleImageToMaxDimension:(unsigned)maxDimension;
-(id)autoAdjustmentFilters;
-(id)autoAdjustmentFiltersWithImageProperties:(id)imageProperties options:(id)options;
-(id)autoAdjustmentFiltersWithOptions:(id)options;
-(id)autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties options:(id)options;
-(id)autoRedEyeFilterWithFeatures:(id)features options:(id)options;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(CGRect)extent;
-(id)filteredImage:(id)image keysAndValues:(id)values;
-(id)imageByApplyingBlur:(double)blur;
-(id)imageByApplyingGamma:(double)gamma;
-(id)imageByApplyingLanczosScale:(double)scale aspectRatio:(double)ratio;
-(id)imageByApplyingOrientation:(int)orientation;
-(id)imageByApplyingTransform:(CGAffineTransform)transform;
-(id)imageByCroppingToRect:(CGRect)rect;
-(id)imageByPremultiplying;
-(id)imageByUnpremultiplying;
-(CGAffineTransform)imageTransformForOrientation:(int)orientation;
-(id)properties;
-(CGRect)regionOfInterestForImage:(id)image inRect:(CGRect)rect;
@end

