/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate, NSNumber, NSMutableDictionary, PFUbiquityKnowledgeVector, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshot : XXUnknownSuperclass {
@private
	NSDictionary* _logSnapshot;
	NSMutableDictionary* _diffFromPrevious;
	PFUbiquityKnowledgeVector* _kv;
	NSNumber* _transactionNumber;
	NSDate* _transactionDate;
	NSString* _exportingPeerID;
}
@property(readonly, assign, nonatomic) NSDictionary* diffFromPrevious;	// @synthesize=_diffFromPrevious
@property(readonly, assign, nonatomic) NSString* exportingPeerID;	// @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector* knowledgeVector;	// @synthesize=_kv
@property(readonly, assign, nonatomic) NSDictionary* logSnapshot;	// @synthesize=_logSnapshot
@property(readonly, assign, nonatomic) NSDate* transactionDate;	// @synthesize=_transactionDate
@property(readonly, assign, nonatomic) NSNumber* transactionNumber;	// @synthesize=_transactionNumber
-(id)initWithExportingPeerID:(id)exportingPeerID logSnapshot:(id)snapshot transactionNumber:(id)number transactionDate:(id)date andKnowledgeVector:(id)vector;
-(id)initWithTranasctionEntry:(id)tranasctionEntry andLogSnapshot:(id)snapshot;
-(int)compare:(id)compare;
-(void)computeDiffToPreviousSnapshot:(id)previousSnapshot;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)diffFromPrevious;
// declared property getter: -(id)exportingPeerID;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)knowledgeVector;
// declared property getter: -(id)logSnapshot;
-(void)removeValuesChangedByPeerSnapshot:(id)snapshot;
// declared property getter: -(id)transactionDate;
// declared property getter: -(id)transactionNumber;
@end

