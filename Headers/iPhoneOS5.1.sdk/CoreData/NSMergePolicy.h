/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSMergePolicy : XXUnknownSuperclass {
@private
	unsigned _type;
	void* _reserved2;
	void* _reserved3;
}
@property(readonly, assign) unsigned mergeType;	// @synthesize=_type
+(BOOL)accessInstanceVariablesDirectly;
+(void)load;
-(id)initWithCoder:(id)coder;
-(id)initWithMergeType:(unsigned)mergeType;
-(id)initWithType:(unsigned)type;
-(void)_mergeChangesObjectUpdatesTrumpForObject:(id)object withRecord:(id)record;
-(void)_mergeChangesStoreUpdatesTrumpForObject:(id)object withRecord:(id)record;
-(void)_mergeDeletionWithStoreChangesForObject:(id)object withRecord:(id)record;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(void)mergeToManyRelationshipForSourceObject:(id)sourceObject withOldSnapshot:(id)oldSnapshot newSnapshot:(id)snapshot andAncestor:(id)ancestor andLegacyPath:(BOOL)path;
// declared property getter: -(unsigned)mergeType;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(BOOL)resolveConflict:(id)conflict;
-(BOOL)resolveConflicts:(id)conflicts error:(id*)error;
-(unsigned)type;
@end

