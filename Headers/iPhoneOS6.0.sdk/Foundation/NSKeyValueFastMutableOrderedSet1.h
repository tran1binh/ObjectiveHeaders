/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableOrderedSet.h"

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet {
@private
	NSKeyValueNonmutatingOrderedSetMethodSet* _nonmutatingMethods;
}
+(XXStruct_1UKQIB*)_proxyNonGCPoolPointer;
-(id)_proxyInitWithContainer:(id)container getter:(id)getter;
-(void)_proxyNonGCFinalize;
-(unsigned)count;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(unsigned)indexOfObject:(id)object;
-(id)objectAtIndex:(unsigned)index;
-(id)objectsAtIndexes:(id)indexes;
@end

