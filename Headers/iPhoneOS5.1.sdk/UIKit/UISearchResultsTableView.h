/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableView.h"

@class UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {
	UISearchDisplayController* _controller;
}
@property(assign, nonatomic) UISearchDisplayController* controller;	// @synthesize=_controller
-(void)_numberOfRowsDidChange;
-(float)_offsetForNoResultsMessage;
// declared property getter: -(id)controller;
-(void)setContentOffset:(CGPoint)offset;
// declared property setter: -(void)setController:(id)controller;
@end
