/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFileHandle.h"


__attribute__((visibility("hidden")))
@interface NSConcreteFileHandle : NSFileHandle {
@private
	int _fd;
	void* _nativeHandle;
	dispatch_data_s* _anchor;
	unsigned short _flags;
	dispatch_source_s* _dsrc;
	BOOL _padding[2];
	CFRunLoopSourceRef _source;
	CFRunLoopRef _rl;
	unsigned short _activity;
	BOOL _padding2[2];
	int _error;
	void* _resultBytes;
	unsigned long _resultLength;
	int _resultSocket;
	dispatch_queue_s* _fhLock;
	long long _weakRefCount;
	id _readabilityHandler;
	id _writeabilityHandler;
	dispatch_source_s* _readMonitoringSource;
	dispatch_source_s* _writeMonitoringSource;
	dispatch_queue_s* _readMonitoringQueue;
	dispatch_queue_s* _writeMonitoringQueue;
}
-(id)init;
-(id)initWithFileDescriptor:(int)fileDescriptor;
-(id)initWithFileDescriptor:(int)fileDescriptor closeOnDealloc:(BOOL)dealloc;
-(id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;
-(id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id*)error;
-(void)_cancelDispatchSources;
-(dispatch_source_s*)_monitor:(const dispatch_source_type_s*)monitor source:(dispatch_source_s*)source onQueue:(dispatch_queue_s*)queue;
-(void)acceptConnectionInBackgroundAndNotify;
-(void)acceptConnectionInBackgroundAndNotifyForModes:(id)modes;
-(id)availableData;
-(void)clearReadabilityHandler;
-(void)clearWriteabilityHandler;
-(void)closeFile;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(int)fileDescriptor;
-(void)finalize;
-(void)lockedRelease;
-(id)lockedRetain;
-(unsigned long long)offsetInFile;
-(void)performActivity:(int)activity modes:(id)modes;
-(id)port;
-(id)readDataOfLength:(unsigned)length;
-(unsigned)readDataOfLength:(unsigned)length buffer:(char*)buffer;
-(id)readDataToEndOfFile;
-(void)readInBackgroundAndNotify;
-(void)readInBackgroundAndNotifyForModes:(id)modes;
-(void)readToEndOfFileInBackgroundAndNotify;
-(void)readToEndOfFileInBackgroundAndNotifyForModes:(id)modes;
-(id)readabilityHandler;
-(oneway void)release;
-(id)retain;
-(unsigned long long)seekToEndOfFile;
-(void)seekToFileOffset:(unsigned long long)fileOffset;
-(void)setPort:(id)port;
-(void)setReadabilityHandler:(id)handler;
-(void)setWriteabilityHandler:(id)handler;
-(void)synchronizeFile;
-(void)truncateFileAtOffset:(unsigned long long)offset;
-(void)waitForDataInBackgroundAndNotify;
-(void)waitForDataInBackgroundAndNotifyForModes:(id)modes;
-(void)writeData:(id)data;
-(id)writeabilityHandler;
@end
