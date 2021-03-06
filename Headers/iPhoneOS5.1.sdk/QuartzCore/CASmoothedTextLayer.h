/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CATextLayer.h"


@interface CASmoothedTextLayer : CATextLayer {
}
@property(assign) unsigned fontSmoothingStyle;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(id)defaultValueForKey:(id)key;
+(BOOL)needsDisplayForKey:(id)key;
-(Layer*)_copyRenderLayer:(Transaction*)layer layerFlags:(unsigned)flags commitFlags:(unsigned*)flags3;
-(void)_drawLine:(CTLineRef)line inContext:(CGContextRef)context atPoint:(CGPoint)point;
-(bool)_renderLayerDefinesProperty:(unsigned)property;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;
-(void)didChangeValueForKey:(id)key;
// declared property getter: -(unsigned)fontSmoothingStyle;
// declared property setter: -(void)setFontSmoothingStyle:(unsigned)style;
@end

