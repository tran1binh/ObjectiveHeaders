/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLLimitIntermediate : NSSQLIntermediate {
@private
	unsigned _limit;
}
-(id)initWithLimit:(unsigned)limit inScope:(id)scope;
-(id)generateSQLStringInContext:(id)context;
@end
