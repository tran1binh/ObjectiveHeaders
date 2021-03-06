/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class AVVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVVideoComposition : XXUnknownSuperclass <NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInternal* _videoComposition;
}
@property(readonly, assign, nonatomic) AVVideoCompositionCoreAnimationTool* animationTool;
@property(readonly, assign, nonatomic) XXStruct_pwHToB frameDuration;
@property(readonly, assign, nonatomic) NSArray* instructions;
@property(readonly, assign, nonatomic) float renderScale;
@property(readonly, assign, nonatomic) CGSize renderSize;
+(void)initialize;
+(id)videoCompositionWithPropertiesOfAsset:(id)asset;
+(id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;
-(id)init;
-(int)_auxiliaryTrackID;
-(id)_auxiliaryTrackLayer;
-(BOOL)_hasLayerAsAuxiliaryTrack;
-(BOOL)_hasPostProcessingLayers;
-(BOOL)_isValidReturningExceptionReason:(id*)reason;
-(id)_postProcessingRootLayer;
-(id)_postProcessingVideoLayer;
-(id)_serializableInstructions;
// declared property getter: -(id)animationTool;
-(id)compositor;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)finalize;
// declared property getter: -(XXStruct_pwHToB)frameDuration;
// declared property getter: -(id)instructions;
-(BOOL)isValidForAsset:(id)asset timeRange:(XXStruct_yD8eWC)range validationDelegate:(id)delegate;
-(id)mutableCopyWithZone:(NSZone*)zone;
// declared property getter: -(float)renderScale;
// declared property getter: -(CGSize)renderSize;
-(void)setAnimationTool:(id)tool;
-(void)setCompositor:(id)compositor;
-(void)setFrameDuration:(XXStruct_pwHToB)duration;
-(void)setInstructions:(id)instructions;
-(void)setRenderScale:(float)scale;
-(void)setRenderSize:(CGSize)size;
@end

