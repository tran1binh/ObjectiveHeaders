/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CALayerArray : XXUnknownSuperclass {
@private
	CALayerArrayIvars _ivars;
}
-(id)initWithLayers:(id*)layers count:(unsigned long)count retain:(BOOL)retain;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(void)getObjects:(id*)objects;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)objectAtIndex:(unsigned)index;
@end
