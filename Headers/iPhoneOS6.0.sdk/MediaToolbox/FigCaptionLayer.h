/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : XXUnknownSuperclass {
@private
	FigCaptionLayerPrivate* _priv;
}
-(id)init;
-(void)_renderer:(OpaqueFigCFCaptionRenderer*)renderer didChangeRows:(XXStruct_K5nmsA)rows;
-(void)dealloc;
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;
-(void)finalize;
-(void)layoutSublayers;
-(void)processCaptionCommand:(unsigned)command data:(id)data;
-(void)resetCaptions;
-(void)setFontName:(const char*)name;
@end

