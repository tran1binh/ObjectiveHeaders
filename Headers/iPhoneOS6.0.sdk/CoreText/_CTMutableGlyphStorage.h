/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "_CTGlyphStorageAdvanceLookup.h"
#import "CoreText-Structs.h"
#import "_CTGlyphStorage.h"

@class CTGlyphStorageInterface;

__attribute__((visibility("hidden")))
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {
@private
	CTGlyphStorageInterface* _interface;
}
-(void)initGlyphStackWithCapacity:(long)capacity;
-(id)initWithInterface:(id)interface;
-(long)attachmentCountAtIndex:(long)index;
-(id)copyWithRange:(XXStruct_K5nmsA)range;
-(CGSize)customAdvanceForIndex:(long)index;
-(void)disposeGlyphStack;
-(void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;
-(void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;
-(void)popGlyphAtIndex:(long)index;
-(void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;
-(void)pushGlyphAtIndex:(long)index;
-(void*)refCon;
-(void)setAdvance:(CGSize)advance atIndex:(long)index;
-(void)setAttachmentCount:(long)count atIndex:(long)index;
-(void)setGlyph:(unsigned short)glyph atIndex:(long)index;
-(void)setProps:(unsigned)props atIndex:(long)index;
-(void)setStringIndex:(long)index atIndex:(long)index2;
-(void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;
-(void)sync;
@end
