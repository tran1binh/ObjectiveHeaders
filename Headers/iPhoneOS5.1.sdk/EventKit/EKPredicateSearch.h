/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSPredicate, EKEventStore;

__attribute__((visibility("hidden")))
@interface EKPredicateSearch : XXUnknownSuperclass {
@private
	Class _entityClass;
	NSPredicate* _predicate;
	EKEventStore* _store;
	BOOL _finished;
	id _callback;
	unsigned _previous;
}
+(id)searchWithEntityClass:(Class)entityClass predicate:(id)predicate store:(id)store callback:(id)callback;
-(id)initWithEntityClass:(Class)entityClass predicate:(id)predicate store:(id)store callback:(id)callback;
-(BOOL)_receivedData:(XXStruct_xPy9GB [50])data count:(int)count;
-(void)dealloc;
-(void)run;
-(id)startWithCompletion:(id)completion;
-(void)terminate;
@end

