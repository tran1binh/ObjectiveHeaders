/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "RTFCPZEntryInputStream.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol RTFCPZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface RTFCPZEntryUncompressedInputStream : XXUnknownSuperclass <RTFCPZEntryInputStream> {
@private
	long long mOffset;
	long long mEnd;
	id<RTFCPZArchiveInputStream> mInput;
}
-(id)initWithOffset:(long long)offset end:(long long)end input:(id)input;
-(void)dealloc;
-(unsigned long)readToBuffer:(char*)buffer size:(unsigned long)size;
-(void)readToOwnBuffer:(const char**)ownBuffer size:(unsigned*)size;
@end

