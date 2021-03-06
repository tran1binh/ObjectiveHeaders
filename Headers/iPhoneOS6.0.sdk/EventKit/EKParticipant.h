/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKObject.h"
#import "EventKit-Structs.h"

@class NSURL, NSString;

@interface EKParticipant : EKObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSURL* URL;
@property(readonly, assign, nonatomic) BOOL isCurrentUser;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) int participantRole;
@property(readonly, assign, nonatomic) int participantStatus;
@property(readonly, assign, nonatomic) int participantType;
-(void*)ABRecordWithAddressBook:(void*)addressBook;
// declared property getter: -(id)URL;
-(id)UUID;
-(id)_persistentItem;
-(id)address;
-(id)copyWithZone:(NSZone*)zone;
-(id)emailAddress;
// declared property getter: -(BOOL)isCurrentUser;
-(BOOL)isEqualToParticipant:(id)participant;
// declared property getter: -(id)name;
// declared property getter: -(int)participantRole;
// declared property getter: -(int)participantStatus;
// declared property getter: -(int)participantType;
-(void)setAddress:(id)address;
-(void)setEmailAddress:(id)address;
-(void)setName:(id)name;
@end

