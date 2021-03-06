/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLProperty.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLColumn : NSSQLProperty {
@private
	NSString* _columnName;
	int _sqlType;
	unsigned _precision;
	int _scale;
	unsigned _fetchIndex;
	unsigned _slot;
	unsigned _allowAliasing;
}
-(id)initForReadOnlyFetching;
-(id)initWithColumnName:(id)columnName sqlType:(unsigned)type;
-(id)initWithEntity:(id)entity propertyDescription:(id)description;
-(void)_setColumnName:(id)name;
-(void)_setFetchIndex:(unsigned)index;
-(void)_setSQLType:(unsigned)type;
-(void)_setSlotIfDefault:(unsigned)aDefault;
-(BOOL)allowAliasing;
-(id)cloneForReadOnlyFetching;
-(id)columnName;
-(void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;
-(void)dealloc;
-(id)description;
-(unsigned)fetchIndex;
-(unsigned)precision;
-(unsigned)roughSizeEstimate;
-(int)scale;
-(void)setAllowAliasing:(BOOL)aliasing;
-(void)setPrecision:(unsigned)precision;
-(void)setScale:(int)scale;
-(unsigned)slot;
-(unsigned)sqlType;
@end

