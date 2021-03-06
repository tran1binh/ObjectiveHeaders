/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStoryboardSegue.h"

@class NSArray, UIView, UIPopoverController, UIBarButtonItem;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {
@private
	UIPopoverController* _popoverController;
	NSArray* _passthroughViews;
	unsigned _permittedArrowDirections;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;
	CGRect _anchorRect;
}
@property(retain, nonatomic, setter=_setAnchorBarButtonItem:) UIBarButtonItem* _anchorBarButtonItem;	// @synthesize
@property(assign, nonatomic, setter=_setAnchorRect:) CGRect _anchorRect;	// @synthesize
@property(retain, nonatomic, setter=_setAnchorView:) UIView* _anchorView;	// @synthesize
@property(copy, nonatomic, setter=_setPassthroughViews:) NSArray* _passthroughViews;	// @synthesize
@property(assign, nonatomic, setter=_setPermittedArrowDirections:) unsigned _permittedArrowDirections;	// @synthesize
@property(readonly, assign, nonatomic) UIPopoverController* popoverController;	// @synthesize=_popoverController
// declared property getter: -(id)_anchorBarButtonItem;
// declared property getter: -(CGRect)_anchorRect;
// declared property getter: -(id)_anchorView;
// declared property getter: -(id)_passthroughViews;
// declared property getter: -(unsigned)_permittedArrowDirections;
// declared property setter: -(void)_setAnchorBarButtonItem:(id)item;
// declared property setter: -(void)_setAnchorRect:(CGRect)rect;
// declared property setter: -(void)_setAnchorView:(id)view;
// declared property setter: -(void)_setPassthroughViews:(id)views;
// declared property setter: -(void)_setPermittedArrowDirections:(unsigned)directions;
-(void)dealloc;
-(void)perform;
// declared property getter: -(id)popoverController;
@end

