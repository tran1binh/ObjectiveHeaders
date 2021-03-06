/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKReminderEditItem.h"
#import "EKExpandingTextViewDelegate.h"

@class EKReminderInlineEditItemCell;

@interface EKReminderInlineEditItem : EKReminderEditItem <EKExpandingTextViewDelegate> {
	EKReminderInlineEditItemCell* _cell;
	BOOL _isListeningToHeightChanges;
}
-(id)init;
-(void)_applyStylesFromStyleProviderToTextView:(id)textView;
-(void)_keyboardDidShow:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)addStylingToCell:(id)cell forSubitemAtIndex:(int)index inSubsection:(int)subsection;
-(id)cellForSubitemAtIndex:(int)index inSubsection:(int)subsection;
-(int)cellStyle;
-(void)dealloc;
-(float)defaultCellHeightForSubitemAtIndex:(int)index inSubsection:(int)subsection forWidth:(float)width;
-(BOOL)isInline;
-(id)newCell;
-(BOOL)shouldPinKeyboard;
-(id)textFromReminder;
-(void)textViewDidBeginEditing:(id)textView;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidChangeContentHeight:(id)textView;
-(void)textViewDidEndEditing:(id)textView;
@end

