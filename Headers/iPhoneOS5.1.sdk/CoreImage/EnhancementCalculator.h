/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "EnhancementCalculation.h"


__attribute__((visibility("hidden")))
@interface EnhancementCalculator : EnhancementCalculation {
@private
	BOOL faceBalanceEnabled;
	BOOL vibranceEnabled;
	BOOL curvesEnabled;
	BOOL shadowsEnabled;
}
@property(assign) BOOL curvesEnabled;	// @synthesize
@property(assign) BOOL faceBalanceEnabled;	// @synthesize
@property(assign) BOOL shadowsEnabled;	// @synthesize
@property(assign) BOOL vibranceEnabled;	// @synthesize
-(id)init;
-(void)analyzeFeatures:(id)features usingContext:(id)context baseImage:(id)image;
// declared property getter: -(BOOL)curvesEnabled;
-(void)dealloc;
// declared property getter: -(BOOL)faceBalanceEnabled;
-(id)histogramFromRows:(id)rows componentOffset:(unsigned)offset;
// declared property setter: -(void)setCurvesEnabled:(BOOL)enabled;
// declared property setter: -(void)setFaceBalanceEnabled:(BOOL)enabled;
// declared property setter: -(void)setShadowsEnabled:(BOOL)enabled;
// declared property setter: -(void)setVibranceEnabled:(BOOL)enabled;
-(id)setupFaceColorFromImage:(id)image usingContext:(id)context detectorOpts:(id)opts;
-(void)setupFaceColorFromImage:(id)image usingContext:(id)context features:(id)features;
-(void)setupHistogramsUsing:(id)aUsing redIndex:(int)index greenIndex:(int)index3 blueIndex:(int)index4;
// declared property getter: -(BOOL)shadowsEnabled;
// declared property getter: -(BOOL)vibranceEnabled;
@end

