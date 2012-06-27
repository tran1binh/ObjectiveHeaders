/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MKAnnotation.h"

@class CLLocation, MKUserLocationInternal, CLHeading, NSString;

@interface MKUserLocation : XXUnknownSuperclass <MKAnnotation> {
@private
	MKUserLocationInternal* _internal;
}
@property(readonly, assign, nonatomic) double accuracy;
@property(assign, nonatomic) CADoublePoint coordinate;
@property(retain, nonatomic) CLLocation* fixedLocation;
@property(retain, nonatomic) CLHeading* heading;
@property(readonly, assign, nonatomic) double headingDegrees;
@property(retain, nonatomic) CLLocation* location;
@property(retain, nonatomic) CLLocation* predictedLocation;
@property(readonly, assign, nonatomic) NSString* shortDescription;
@property(assign, nonatomic) int source;
@property(copy, nonatomic) NSString* subtitle;
@property(assign, nonatomic) double timestamp;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic, getter=isUpdating) BOOL updating;
+(void)_setAnnotationClass:(Class)aClass;
+(id)keyPathsForValuesAffectingSubtitle;
-(id)init;
-(void)_updateCoordinate;
// declared property getter: -(double)accuracy;
-(id)annotation;
// declared property getter: -(CADoublePoint)coordinate;
-(double)course;
-(void)dealloc;
// declared property getter: -(id)fixedLocation;
// declared property getter: -(id)heading;
// declared property getter: -(double)headingDegrees;
-(BOOL)isEqualToLocation:(id)location;
// declared property getter: -(BOOL)isUpdating;
// declared property getter: -(id)location;
// declared property getter: -(id)predictedLocation;
-(void)reset;
// declared property setter: -(void)setCoordinate:(CADoublePoint)coordinate;
-(void)setCourse:(double)course;
// declared property setter: -(void)setFixedLocation:(id)location;
// declared property setter: -(void)setHeading:(id)heading;
// declared property setter: -(void)setLocation:(id)location;
// declared property setter: -(void)setPredictedLocation:(id)location;
// declared property setter: -(void)setSource:(int)source;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property setter: -(void)setTitle:(id)title;
// declared property setter: -(void)setUpdating:(BOOL)updating;
// declared property getter: -(id)shortDescription;
// declared property getter: -(int)source;
// declared property getter: -(id)subtitle;
// declared property getter: -(double)timestamp;
// declared property getter: -(id)title;
@end
