/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableOrderedSet.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	NSKeyValueGetter* _valueGetter;
	NSKeyValueSetter* _valueSetter;
	BOOL _treatNilValuesLikeEmptyOrderedSets;
	BOOL _padding[3];
}
+(XXStruct_1UKQIB*)_proxyNonGCPoolPointer;
-(id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)selector;
-(id)_nonNilOrderedSetValueWithSelector:(SEL)selector;
-(id)_proxyInitWithContainer:(id)container getter:(id)getter;
-(void)_proxyNonGCFinalize;
-(void)_raiseNilValueExceptionWithSelector:(SEL)selector;
-(unsigned)count;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(unsigned)indexOfObject:(id)object;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(void)insertObjects:(id)objects atIndexes:(id)indexes;
-(id)objectAtIndex:(unsigned)index;
-(id)objectsAtIndexes:(id)indexes;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)removeObjectsAtIndexes:(id)indexes;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
-(void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;
@end

