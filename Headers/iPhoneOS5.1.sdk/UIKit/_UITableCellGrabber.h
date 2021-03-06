/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableCell;

__attribute__((visibility("hidden")))
@interface _UITableCellGrabber : UIControl {
@private
	UITableCell* _cell;
	CGPoint _downPoint;
}
-(id)initWithCell:(id)cell;
-(void)_controlMouseDown:(GSEventRef)down;
-(void)_controlMouseDragged:(GSEventRef)dragged;
-(void)_controlMouseUp:(GSEventRef)up;
-(BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(void)cancelTrackingWithEvent:(id)event;
-(BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)drawRect:(CGRect)rect;
-(void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)shouldTrack;
@end

