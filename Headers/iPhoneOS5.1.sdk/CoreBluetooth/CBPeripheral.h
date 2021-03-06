/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreBluetooth-Structs.h"

@class NSArray, NSString, NSNumber;
@protocol CBPeripheralDelegate;

@interface CBPeripheral : XXUnknownSuperclass {
@private
	id<CBPeripheralDelegate> _delegate;
	CFUUIDRef _UUID;
	NSString* _name;
	NSNumber* _RSSI;
	BOOL _isConnected;
	NSArray* _services;
}
@property(retain) NSNumber* RSSI;	// @synthesize=_RSSI
@property(readonly, assign, nonatomic) CFUUIDRef UUID;	// @synthesize=_UUID
@property(assign, nonatomic) id<CBPeripheralDelegate> delegate;	// @synthesize=_delegate
@property(assign) BOOL isConnected;	// @synthesize=_isConnected
@property(retain) NSString* name;	// @synthesize=_name
@property(retain) NSArray* services;	// @synthesize=_services
// declared property getter: -(id)RSSI;
// declared property getter: -(CFUUIDRef)UUID;
// declared property getter: -(id)delegate;
-(void)discoverCharacteristics:(id)characteristics forService:(id)service;
-(void)discoverDescriptorsForCharacteristic:(id)characteristic;
-(void)discoverIncludedServices:(id)services forService:(id)service;
-(void)discoverServices:(id)services;
// declared property getter: -(BOOL)isConnected;
// declared property getter: -(id)name;
-(void)readRSSI;
-(void)readValueForCharacteristic:(id)characteristic;
-(void)readValueForDescriptor:(id)descriptor;
-(void)reliablyWriteValues:(id)values forCharacteristics:(id)characteristics;
// declared property getter: -(id)services;
-(void)setBroadcastValue:(BOOL)value forCharacteristic:(id)characteristic;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setIndicateValue:(BOOL)value forCharacteristic:(id)characteristic;
// declared property setter: -(void)setIsConnected:(BOOL)connected;
// declared property setter: -(void)setName:(id)name;
-(void)setNotifyValue:(BOOL)value forCharacteristic:(id)characteristic;
// declared property setter: -(void)setRSSI:(id)rssi;
// declared property setter: -(void)setServices:(id)services;
-(void)writeValue:(id)value forCharacteristic:(id)characteristic type:(int)type;
-(void)writeValue:(id)value forDescriptor:(id)descriptor;
@end

