/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface GKNearbyDevice : XXUnknownSuperclass {
@private
	NSString* _deviceID;
	NSString* _playerID;
	int _state;
}
@property(retain, nonatomic) NSString* deviceID;	// @synthesize=_deviceID
@property(retain, nonatomic) NSString* playerID;	// @synthesize=_playerID
@property(assign, nonatomic) int state;	// @synthesize=_state
-(void)dealloc;
// declared property getter: -(id)deviceID;
// declared property getter: -(id)playerID;
// declared property setter: -(void)setDeviceID:(id)anId;
// declared property setter: -(void)setPlayerID:(id)anId;
// declared property setter: -(void)setState:(int)state;
// declared property getter: -(int)state;
@end
