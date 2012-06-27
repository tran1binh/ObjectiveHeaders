/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PFUbiquitySwitchboardCacheWrapper, PFUbiquityLocation, NSSQLCore, NSMutableSet, PFUbiquityStoreMetadata, _PFUbiquityStack, NSSet, PFUbiquityPeer;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreExportContext : XXUnknownSuperclass {
@private
	PFUbiquityLocation* _ubiquityRootLocation;
	_PFUbiquityStack* _stack;
	PFUbiquityStoreMetadata* _storeMetadata;
	PFUbiquityPeer* _localPeer;
	NSMutableSet* _transactionEntries;
	NSSQLCore* _store;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;
}
@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper* cacheWrapper;	// @synthesize=_cacheWrapper
@property(readonly, assign, nonatomic) PFUbiquityPeer* localPeer;	// @synthesize=_localPeer
@property(readonly, assign, nonatomic) _PFUbiquityStack* stack;	// @synthesize=_stack
@property(retain, nonatomic) NSSQLCore* store;	// @synthesize=_store
@property(readonly, assign, nonatomic) PFUbiquityStoreMetadata* storeMetadata;	// @synthesize=_storeMetadata
@property(readonly, assign, nonatomic) NSSet* transactionEntries;	// @synthesize=_transactionEntries
@property(readonly, assign, nonatomic) PFUbiquityLocation* ubiquityRootLocation;	// @synthesize=_ubiquityRootLocation
-(id)initWithStoreName:(id)storeName andUbiquityRootLocation:(id)location forLocalPeerID:(id)localPeerID withStack:(id)stack;
-(id)addTransactionEntryForGlobalIDString:(id)globalIDString andLocalManagedObjectID:(id)anId andTransactionType:(int)type;
// declared property getter: -(id)cacheWrapper;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)localPeer;
// declared property setter: -(void)setCacheWrapper:(id)wrapper;
// declared property setter: -(void)setStore:(id)store;
// declared property getter: -(id)stack;
// declared property getter: -(id)store;
// declared property getter: -(id)storeMetadata;
// declared property getter: -(id)transactionEntries;
// declared property getter: -(id)ubiquityRootLocation;
@end
