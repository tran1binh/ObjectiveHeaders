/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import "CoreMIDI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MIDINetworkSession : XXUnknownSuperclass {
@private
	MIDINetworkSessionImpl* _impl;
}
@property(assign, nonatomic) unsigned connectionPolicy;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, assign, nonatomic) NSString* localName;
@property(readonly, assign, nonatomic) NSString* networkName;
@property(readonly, assign, nonatomic) unsigned networkPort;
+(id)defaultSession;
-(id)init;
-(BOOL)addConnection:(id)connection;
-(BOOL)addContact:(id)contact;
-(BOOL)addOrRemoveConnection:(id)connection add:(BOOL)add;
// declared property getter: -(unsigned)connectionPolicy;
-(id)connections;
-(id)contacts;
-(void)contactsChanged;
-(void)dealloc;
-(OpaqueMIDIEndpoint*)destinationEndpoint;
// declared property getter: -(BOOL)isEnabled;
// declared property getter: -(id)localName;
// declared property getter: -(id)networkName;
// declared property getter: -(unsigned)networkPort;
-(void)refreshBonjourName;
-(BOOL)removeConnection:(id)connection;
-(BOOL)removeContact:(id)contact;
-(void)sessionChanged;
// declared property setter: -(void)setConnectionPolicy:(unsigned)policy;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
-(void)setStateToEntity;
-(OpaqueMIDIEndpoint*)sourceEndpoint;
-(void)updateFromEntity;
@end

