/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"

@class NSMutableArray, NSDictionary, NSString;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface NSLayoutConstraintParser : NSObject {
@private
	NSString* _line;
	const char* _lineChars;
	unsigned _lineLength;
	unsigned _opts;
	BOOL _useHorizontalArrangement;
	NSDictionary* _metrics;
	NSDictionary* _views;
	id<NSLayoutItem> _containerView;
	NSMutableArray* _constraints;
	NSMutableArray* _unflushedWidthConstraints;
	NSMutableArray* _alignmentConstraints;
	unsigned _currentCharacter;
	NSMutableArray* _incompleteConstraints;
	id<NSLayoutItem> _parsedLeftView;
	id<NSLayoutItem> _parsedRightView;
	id<NSLayoutItem> _parsedConstrainedWidthView;
}
+(id)constraintsWithVisualFormat:(id)visualFormat options:(unsigned)options metrics:(id)metrics views:(id)views;
-(id)initWithFormat:(id)format options:(unsigned)options metrics:(id)metrics views:(id)views;
-(id)constraints;
-(void)dealloc;
-(id)description;
-(id)descriptionLineWithCurrentCharacterPointer;
-(void)failWithDescription:(id)description;
-(void)findContainerView;
-(void)finishConstraint;
-(void)flushWidthConstraints;
-(id)layoutItemForKey:(id)key;
-(id)metricForKey:(id)key;
-(void)parse;
-(void)parseConnection;
-(float)parseConstant;
-(void)parseOp;
-(void)parsePredicate;
-(void)parsePredicateList;
-(void)parsePredicateWithParentheses;
-(id)parseView;
-(NSRange)rangeOfName;
@end

