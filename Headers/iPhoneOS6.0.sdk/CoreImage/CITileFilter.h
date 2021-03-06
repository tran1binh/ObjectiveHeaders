/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CITileFilter : CIFilter {
@private
	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
}
@property(retain) NSNumber* inputAngle;	// @synthesize
@property(retain) CIVector* inputCenter;	// @synthesize
@property(retain) CIImage* inputImage;	// @synthesize
@property(retain) NSNumber* inputWidth;	// @synthesize
+(id)_filter_display_name;
+(id)customAttributes;
// declared property getter: -(id)inputAngle;
// declared property getter: -(id)inputCenter;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputWidth;
-(void)setDefaults;
// declared property setter: -(void)setInputAngle:(id)angle;
// declared property setter: -(void)setInputCenter:(id)center;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputWidth:(id)width;
@end

