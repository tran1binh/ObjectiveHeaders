/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import </libxml2.2.h>
#import "Foundation-Structs.h"


@interface NSPointerFunctions : NSObject <NSCopying> {
}
@property(assign) /*function-pointer*/ void* acquireFunction;
@property(assign) /*function-pointer*/ void* descriptionFunction;
@property(assign) /*function-pointer*/ void* hashFunction;
@property(assign) /*function-pointer*/ void* isEqualFunction;
@property(assign) /*function-pointer*/ void* relinquishFunction;
@property(assign) /*function-pointer*/ void* sizeFunction;
@property(assign) BOOL usesStrongWriteBarrier;
@property(assign) BOOL usesWeakReadAndWriteBarriers;
+(id)allocWithZone:(NSZone*)zone;
+(id)pointerFunctionsWithOptions:(unsigned)options;
-(id)initWithOptions:(unsigned)options;
// declared property getter: -(/*function-pointer*/ void*)acquireFunction;
-(id)copyWithZone:(NSZone*)zone;
// declared property getter: -(/*function-pointer*/ void*)descriptionFunction;
// declared property getter: -(/*function-pointer*/ void*)hashFunction;
// declared property getter: -(/*function-pointer*/ void*)isEqualFunction;
// declared property getter: -(/*function-pointer*/ void*)relinquishFunction;
// declared property setter: -(void)setAcquireFunction:(/*function-pointer*/ void*)function;
// declared property setter: -(void)setDescriptionFunction:(/*function-pointer*/ void*)function;
// declared property setter: -(void)setHashFunction:(/*function-pointer*/ void*)function;
// declared property setter: -(void)setIsEqualFunction:(/*function-pointer*/ void*)function;
// declared property setter: -(void)setRelinquishFunction:(/*function-pointer*/ void*)function;
// declared property setter: -(void)setSizeFunction:(/*function-pointer*/ void*)function;
// declared property setter: -(void)setUsesStrongWriteBarrier:(BOOL)barrier;
// declared property setter: -(void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;
// declared property getter: -(/*function-pointer*/ void*)sizeFunction;
// declared property getter: -(BOOL)usesStrongWriteBarrier;
// declared property getter: -(BOOL)usesWeakReadAndWriteBarriers;
@end
