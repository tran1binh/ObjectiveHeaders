/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLocale, NSDictionary, NSString;

@interface AVMetadataItemInternal : XXUnknownSuperclass {
	OpaqueFigMetadataReader* reader;
	long itemIndex;
	NSString* keySpace;
	id key;
	NSString* commonKey;
	NSLocale* locale;
	id value;
	XXStruct_pwHToB time;
	XXStruct_pwHToB duration;
	NSDictionary* extras;
}
@end

