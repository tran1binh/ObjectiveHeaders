/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : XXUnknownSuperclass {
@private
	xpc_connection_s* _client;
	id _reactorID;
	id _messageSender;
	NSFileAccessNode* _itemLocation;
}
-(id)initWithClient:(xpc_connection_s*)client reactorID:(id)anId messageSender:(id)sender;
-(xpc_connection_s*)client;
-(void)dealloc;
-(id)description;
-(id)descriptionWithIndenting:(id)indenting;
-(void)finalize;
-(void)forwardUsingMessageSender:(id)sender;
-(id)itemLocation;
-(id)messageSender;
-(id)reactorID;
-(void)setItemLocation:(id)location;
@end
