/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventEditItem.h"
#import "UITextViewDelegate.h"
#import "EventKitUI-Structs.h"

@class CalendarNotesCell;

__attribute__((visibility("hidden")))
@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate> {
@private
	CalendarNotesCell* _cell;
}
-(id)cellForSubitemAtIndex:(int)index inSubsection:(int)subsection;
-(void)dealloc;
-(float)defaultCellHeightForSubitemAtIndex:(int)index inSubsection:(int)subsection forWidth:(float)width;
-(BOOL)isInline;
-(void)reset;
-(BOOL)saveAndDismissWithForce:(BOOL)force;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidBeginEditing:(id)textView;
-(void)textViewDidEndEditing:(id)textView;
-(BOOL)textViewShouldReturn:(id)textView;
@end
