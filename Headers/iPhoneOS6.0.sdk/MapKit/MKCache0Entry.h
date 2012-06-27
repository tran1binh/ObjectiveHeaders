/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MKCacheableObject.h"


@interface MKCache0Entry : XXUnknownSuperclass <MKCacheableObject> {
@private
	id key;
	id object;
	unsigned accessTime;
}
@property(assign, nonatomic) unsigned _mapkit_cache_accessTime;	// @synthesize=accessTime
@property(readonly, assign, nonatomic) id _mapkit_cache_key;	// @synthesize=key
@property(readonly, assign, nonatomic) id key;
@property(retain, nonatomic) id object;	// @synthesize
-(id)initWithObject:(id)object key:(id)key;
// declared property getter: -(unsigned)_mapkit_cache_accessTime;
// declared property getter: -(id)_mapkit_cache_key;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)key;
// declared property getter: -(id)object;
// declared property setter: -(void)setObject:(id)object;
// declared property setter: -(void)set_mapkit_cache_accessTime:(unsigned)time;
@end
