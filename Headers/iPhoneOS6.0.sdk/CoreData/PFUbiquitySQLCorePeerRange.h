/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquitySQLCorePeerRange : XXUnknownSuperclass {
@private
	NSString* _owningPeerID;
	NSString* _entityName;
	NSNumber* _rangeStart;
	NSNumber* _rangeEnd;
	NSNumber* _peerStart;
	NSNumber* _peerEnd;
}
@property(readonly, assign, nonatomic) NSString* entityName;	// @synthesize=_entityName
@property(readonly, assign, nonatomic) NSString* owningPeerID;	// @synthesize=_owningPeerID
@property(readonly, assign, nonatomic) NSNumber* peerEnd;	// @synthesize=_peerEnd
@property(readonly, assign, nonatomic) NSNumber* peerStart;	// @synthesize=_peerStart
@property(readonly, assign, nonatomic) NSNumber* rangeEnd;	// @synthesize=_rangeEnd
@property(readonly, assign, nonatomic) NSNumber* rangeStart;	// @synthesize=_rangeStart
-(id)initWithOwningPeerID:(id)owningPeerID entityName:(id)name rangeStart:(id)start rangeEnd:(id)end peerStart:(id)start5 peerEnd:(id)end6;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)entityName;
// declared property getter: -(id)owningPeerID;
// declared property getter: -(id)peerEnd;
// declared property getter: -(id)peerStart;
// declared property getter: -(id)rangeEnd;
// declared property getter: -(id)rangeStart;
@end
