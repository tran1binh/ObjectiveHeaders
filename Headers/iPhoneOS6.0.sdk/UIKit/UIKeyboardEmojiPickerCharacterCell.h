/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class UIKeyboardEmojiInputController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPickerCharacterCell : UITableViewCell {
@private
	NSArray* _characters;
	NSString* _emojiString;
	UIKeyboardEmojiInputController* _inputController;
	UIView* _pressIndicator;
}
@property(retain) NSArray* characters;
@property(assign) UIKeyboardEmojiInputController* inputController;	// @synthesize=_inputController
@property(retain) UIView* pressIndicator;	// @synthesize=_pressIndicator
+(CFDictionaryRef)emojiFontAttributes;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
// declared property getter: -(id)characters;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(id)inputController;
// declared property getter: -(id)pressIndicator;
// declared property setter: -(void)setCharacters:(id)characters;
// declared property setter: -(void)setInputController:(id)controller;
// declared property setter: -(void)setPressIndicator:(id)indicator;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end

