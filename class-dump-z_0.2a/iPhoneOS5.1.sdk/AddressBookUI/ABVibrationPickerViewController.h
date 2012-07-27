/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPickerViewController.h"

@class UIBarButtonItem;

@interface ABVibrationPickerViewController : ABPickerViewController {
	id _vibrationPickerViewController;
	BOOL _canEnterEditingMode;
	UIBarButtonItem* _saveButton;
}
@property(retain, nonatomic, setter=_setSaveButton:) UIBarButtonItem* _saveButton;	// @synthesize
@property(readonly, retain, nonatomic) id vibrationPickerViewController;
-(id)initWithVibrationType:(unsigned)vibrationType;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
// declared property getter: -(id)_saveButton;
// declared property setter: -(void)_setSaveButton:(id)button;
-(void)_vibrationSaveButtonClicked:(id)clicked;
-(float)ab_heightToFitForViewInPopoverView;
-(void)dealloc;
-(void)loadView;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
// declared property getter: -(id)vibrationPickerViewController;
@end
