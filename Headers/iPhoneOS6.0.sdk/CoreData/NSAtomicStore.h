/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore {
@private
	NSMutableDictionary* _nodeCache;
	NSMutableDictionary* _entityCache;
	NSMutableDictionary* _storeMetadata;
	int _nextReference;
	void* _reserved4;
	void* _reserved5;
}
+(void)initialize;
+(id)metadataForPersistentStoreWithURL:(id)url error:(id*)error;
-(id)init;
-(id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;
-(void)_addObject:(id)object;
-(void)_deleteNodeFromEntityCache:(id)entityCache;
-(void)_deleteNodeFromMainCache:(id)mainCache;
-(void)_didLoadMetadata;
-(id)_getNewIDForObject:(id)object;
-(void)_insertNodeIntoEntityCache:(id)cache;
-(void)_insertNodeIntoMainCache:(id)cache;
-(void)_preflightCrossCheck;
-(id)_rawMetadata__;
-(void)_registerCacheNode:(id)node;
-(void)_removeObject:(id)object;
-(id)_retainedObjectIDForEntity:(id)entity referenceObject:(id)object;
-(id)_retrieveNodeForObject:(id)object;
-(id)_retrieveNodeForObjectID:(id)objectID;
-(id)_retrieveNodesSatisfyingRequest:(id)request;
-(void)_storeNextReferenceInMetadata;
-(void)_updateObject:(id)object;
-(void)addCacheNodes:(id)nodes;
-(id)cacheNodeForObjectID:(id)objectID;
-(id)cacheNodes;
-(void)dealloc;
-(id)executeCountRequest:(id)request withContext:(id)context;
-(id)executeFetchRequest:(id)request withContext:(id)context;
-(id)executeRefreshRequest:(id)request withContext:(id)context;
-(id)executeRequest:(id)request withContext:(id)context error:(id*)error;
-(id)executeSaveChangesRequest:(id)request withContext:(id)context;
-(BOOL)load:(id*)load;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;
-(id)metadata;
-(id)newCacheNodeForManagedObject:(id)managedObject;
-(id)newReferenceObjectForManagedObject:(id)managedObject;
-(id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id*)error;
-(id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id*)error;
-(id)objectIDForEntity:(id)entity referenceObject:(id)object;
-(id)obtainPermanentIDsForObjects:(id)objects error:(id*)error;
-(id)referenceObjectForObjectID:(id)objectID;
-(BOOL)save:(id*)save;
-(void)setMetadata:(id)metadata;
-(void)updateCacheNode:(id)node fromManagedObject:(id)managedObject;
-(void)willRemoveCacheNodes:(id)nodes;
@end
