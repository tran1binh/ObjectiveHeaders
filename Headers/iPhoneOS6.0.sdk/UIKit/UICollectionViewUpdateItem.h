/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexPath;

@interface UICollectionViewUpdateItem : XXUnknownSuperclass {
@private
	NSIndexPath* _initialIndexPath;
	NSIndexPath* _finalIndexPath;
	int _updateAction;
	id _gap;
}
@property(readonly, assign, nonatomic) NSIndexPath* indexPathAfterUpdate;	// @synthesize=_finalIndexPath
@property(readonly, assign, nonatomic) NSIndexPath* indexPathBeforeUpdate;	// @synthesize=_initialIndexPath
@property(readonly, assign, nonatomic) int updateAction;	// @synthesize=_updateAction
-(id)initWithAction:(int)action forIndexPath:(id)indexPath;
-(id)initWithInitialIndexPath:(id)initialIndexPath finalIndexPath:(id)path updateAction:(int)action;
-(id)initWithOldIndexPath:(id)oldIndexPath newIndexPath:(id)path;
-(int)_action;
-(id)_gap;
-(id)_indexPath;
-(BOOL)_isSectionOperation;
-(id)_newIndexPath;
-(void)_setGap:(id)gap;
-(void)_setNewIndexPath:(id)path;
-(int)compareIndexPaths:(id)paths;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)indexPathAfterUpdate;
// declared property getter: -(id)indexPathBeforeUpdate;
-(int)inverseCompareIndexPaths:(id)paths;
// declared property getter: -(int)updateAction;
@end
