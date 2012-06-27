/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKPersistentObject.h"
#import "EventKit-Structs.h"

@class NSDate, NSData, NSTimeZone, EKPersistentLocation, NSString;

@interface EKPersistentAlarm : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString* UUID;
@property(copy, nonatomic) NSDate* absoluteDate;
@property(copy, nonatomic) NSDate* acknowledgedDate;
@property(assign, nonatomic) int alarmType;
@property(assign, nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;
@property(copy, nonatomic) NSData* externalData;
@property(copy, nonatomic) NSString* externalID;
@property(readonly, assign, nonatomic) BOOL isAbsolute;
@property(copy, nonatomic) EKPersistentLocation* location;
@property(assign, nonatomic) int proximity;
@property(assign, nonatomic) double relativeOffset;
@property(copy, nonatomic) NSTimeZone* timeZone;
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)init;
// declared property getter: -(id)UUID;
// declared property getter: -(id)absoluteDate;
// declared property getter: -(id)acknowledgedDate;
// declared property getter: -(int)alarmType;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(int)entityType;
// declared property getter: -(id)externalData;
// declared property getter: -(id)externalID;
// declared property getter: -(BOOL)isAbsolute;
// declared property getter: -(BOOL)isDefaultAlarm;
// declared property getter: -(id)location;
-(id)owner;
// declared property getter: -(int)proximity;
// declared property getter: -(double)relativeOffset;
// declared property setter: -(void)setAbsoluteDate:(id)date;
// declared property setter: -(void)setAcknowledgedDate:(id)date;
// declared property setter: -(void)setAlarmType:(int)type;
// declared property setter: -(void)setDefaultAlarm:(BOOL)alarm;
// declared property setter: -(void)setExternalData:(id)data;
// declared property setter: -(void)setExternalID:(id)anId;
// declared property setter: -(void)setLocation:(id)location;
-(void)setOwner:(id)owner;
// declared property setter: -(void)setProximity:(int)proximity;
// declared property setter: -(void)setRelativeOffset:(double)offset;
// declared property setter: -(void)setTimeZone:(id)zone;
// declared property getter: -(id)timeZone;
-(BOOL)validate:(id*)validate;
@end
