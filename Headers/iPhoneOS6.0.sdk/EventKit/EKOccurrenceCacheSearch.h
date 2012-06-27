/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKEventStore, NSSet, NSNumber, NSString;

@interface EKOccurrenceCacheSearch : XXUnknownSuperclass {
	NSSet* _calendars;
	NSString* _searchTerm;
	EKEventStore* _store;
	id _callback;
	NSNumber* _replyID;
	BOOL _canceled;
}
+(id)searchWithCalendars:(id)calendars searchTerm:(id)term store:(id)store callback:(id)callback;
-(id)initWithCalendars:(id)calendars searchTerm:(id)term store:(id)store callback:(id)callback;
-(void)cancel;
-(void)dealloc;
-(void)run;
-(id)searchTerm;
@end
