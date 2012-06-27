/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSArray.h"


@interface NSMutableArray : NSArray {
}
+(id)arrayWithCapacity:(unsigned)capacity;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithObjects:(const id*)objects count:(unsigned)count;
-(void)_mutate;
-(void)addObject:(id)object;
-(void)addObjects:(const id*)objects count:(unsigned)count;
-(void)addObjectsFromArray:(id)array;
-(void)addObjectsFromArray:(id)array range:(NSRange)range;
-(void)addObjectsFromOrderedSet:(id)orderedSet;
-(void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;
-(void)addObjectsFromSet:(id)set;
-(void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(void)insertObjects:(id)objects atIndexes:(id)indexes;
-(void)insertObjects:(const id*)objects count:(unsigned)count atIndex:(unsigned)index;
-(void)insertObjectsFromArray:(id)array atIndex:(unsigned)index;
-(void)insertObjectsFromArray:(id)array range:(NSRange)range atIndex:(unsigned)index;
-(void)insertObjectsFromOrderedSet:(id)orderedSet atIndex:(unsigned)index;
-(void)insertObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range atIndex:(unsigned)index;
-(void)insertObjectsFromSet:(id)set atIndex:(unsigned)index;
-(void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;
-(void)removeAllObjects;
-(void)removeFirstObject;
-(void)removeLastObject;
-(void)removeObject:(id)object;
-(void)removeObject:(id)object inRange:(NSRange)range;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)removeObjectIdenticalTo:(id)to;
-(void)removeObjectIdenticalTo:(id)to inRange:(NSRange)range;
-(void)removeObjectsAtIndexes:(id)indexes;
-(void)removeObjectsInArray:(id)array;
-(void)removeObjectsInArray:(id)array range:(NSRange)range;
-(void)removeObjectsInOrderedSet:(id)orderedSet;
-(void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;
-(void)removeObjectsInRange:(NSRange)range;
-(void)removeObjectsInRange:(NSRange)range inArray:(id)array;
-(void)removeObjectsInRange:(NSRange)range inArray:(id)array range:(NSRange)range3;
-(void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet;
-(void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet range:(NSRange)range3;
-(void)removeObjectsInRange:(NSRange)range inSet:(id)set;
-(void)removeObjectsInSet:(id)set;
-(void)replaceObject:(id)object;
-(void)replaceObject:(id)object inRange:(NSRange)range;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
-(void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;
-(void)replaceObjectsInRange:(NSRange)range withObjects:(const id*)objects count:(unsigned)count;
-(void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;
-(void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;
-(void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet;
-(void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range3;
-(void)replaceObjectsInRange:(NSRange)range withObjectsFromSet:(id)set;
-(void)rollObjectsInRange:(NSRange)range by:(int)by;
-(void)setArray:(id)array;
-(void)setObject:(id)object atIndex:(unsigned)index;
-(void)setObject:(id)object atIndexedSubscript:(unsigned)indexedSubscript;
-(void)setOrderedSet:(id)set;
-(void)setSet:(id)set;
-(void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;
-(void)sortUsingComparator:(id)comparator;
-(void)sortUsingFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(void)sortUsingFunction:(/*function-pointer*/ void*)function context:(void*)context range:(NSRange)range;
-(void)sortUsingSelector:(SEL)selector;
-(void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;
@end
