/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"

@class NSSQLForeignKey;

__attribute__((visibility("hidden")))
@interface NSSQLForeignOrderKey : NSSQLColumn {
@private
	NSSQLForeignKey* _foreignKey;
}
-(id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;
-(id)initWithEntity:(id)entity foreignKey:(id)key;
-(id)initWithEntity:(id)entity propertyDescription:(id)description;
-(void)dealloc;
-(id)foreignKey;
-(void)setFKForReadOnlyFetch:(id)readOnlyFetch;
-(id)toOneRelationship;
@end
