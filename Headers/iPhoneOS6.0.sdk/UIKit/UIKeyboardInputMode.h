/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputMode.h"

@class NSArray, NSString;

@interface UIKeyboardInputMode : UITextInputMode {
@private
	NSString* primaryLanguage;
	NSString* identifier;
	NSString* softwareLayout;
	NSString* hardwareLayout;
}
@property(retain, nonatomic) NSString* hardwareLayout;	// @synthesize
@property(retain, nonatomic) NSString* identifier;	// @synthesize
@property(readonly, assign, nonatomic) NSArray* normalizedIdentifierLevels;
@property(retain, nonatomic) NSString* primaryLanguage;	// @synthesize
@property(retain, nonatomic) NSString* softwareLayout;	// @synthesize
+(id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;
+(id)hardwareLayoutFromIdentifier:(id)identifier;
+(id)keyboardInputModeWithIdentifier:(id)identifier;
+(id)softwareLayoutFromIdentifier:(id)identifier;
-(id)initWithIdentifier:(id)identifier;
-(void)dealloc;
// declared property getter: -(id)hardwareLayout;
// declared property getter: -(id)identifier;
// declared property getter: -(id)normalizedIdentifierLevels;
// declared property getter: -(id)primaryLanguage;
// declared property setter: -(void)setHardwareLayout:(id)layout;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setPrimaryLanguage:(id)language;
// declared property setter: -(void)setSoftwareLayout:(id)layout;
// declared property getter: -(id)softwareLayout;
@end

