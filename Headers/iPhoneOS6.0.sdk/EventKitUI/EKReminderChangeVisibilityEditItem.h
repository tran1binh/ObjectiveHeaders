/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKReminderEditItem.h"


@interface EKReminderChangeVisibilityEditItem : EKReminderEditItem {
	int _visibilityToCommit;
}
@property(readonly, assign, nonatomic) int visibilityToCommit;
-(void)addStylingToCell:(id)cell forSubitemAtIndex:(int)index inSubsection:(int)subsection;
-(id)cellForSubitemAtIndex:(int)index inSubsection:(int)subsection;
-(void)editor:(id)editor didSelectSubitem:(int)subitem inSubsection:(int)subsection;
-(BOOL)editor:(id)editor shouldClearSelectionFromSubitem:(int)subitem inSubsection:(int)subsection;
-(BOOL)shouldAppearWithVisibility:(int)visibility;
-(BOOL)usesDetailViewControllerForSubitem:(int)subitem inSubsection:(int)subsection;
// declared property getter: -(int)visibilityToCommit;
@end
