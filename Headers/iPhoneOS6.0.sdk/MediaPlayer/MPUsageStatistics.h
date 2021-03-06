/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MPUsageStatistics : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _queue;
	NSString* _domain;
	NSString* _lastAggregateStatisticsDisplayCountKey;
	double _lastAggregateStatisticsDisplayCountTime;
}
+(id)sharedStatistics;
-(id)init;
-(void)dealloc;
-(id)domain;
-(void)incrementViewDisplayCountForKey:(id)key;
-(void)incrementViewDisplayCountForViewController:(id)viewController;
-(void)setAggregateStatisticsDomain:(id)domain;
@end

