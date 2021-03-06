/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPopoverControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class DOMNode, UIPopoverController;

__attribute__((visibility("hidden")))
@interface UIWebRotatingPopover : XXUnknownSuperclass <UIPopoverControllerDelegate> {
@private
	BOOL _isRotating;
	DOMNode* _node;
	UIPopoverController* _popoverController;
}
@property(retain, nonatomic) DOMNode* _node;	// @synthesize
@property(retain, nonatomic) UIPopoverController* _popoverController;	// @synthesize
-(id)initWithDOMNode:(id)domnode;
// declared property getter: -(id)_node;
// declared property getter: -(id)_popoverController;
-(void)accessoryDone;
-(void)dealloc;
-(void)didRotate:(id)rotate;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)presentPopover;
// declared property setter: -(void)set_node:(id)node;
// declared property setter: -(void)set_popoverController:(id)controller;
-(void)willRotate:(id)rotate;
@end

