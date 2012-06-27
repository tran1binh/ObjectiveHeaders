/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAppearance.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class UIImage, NSString;

@interface UIBarItem : XXUnknownSuperclass <UIAppearance> {
@private
	BOOL _hasCustomizableInstanceAppearanceModifications;
	BOOL _shouldArchiveUIAppearanceTags;
}
@property(assign, nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) BOOL _hasCustomizableInstanceAppearanceModifications;	// @synthesize
@property(assign, nonatomic, setter=_setShouldArchiveUIAppearanceTags:) BOOL _shouldArchiveUIAppearanceTags;	// @synthesize
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// @dynamic
@property(retain, nonatomic) UIImage* image;	// @dynamic
@property(assign, nonatomic) UIEdgeInsets imageInsets;	// @dynamic
@property(retain, nonatomic) UIImage* landscapeImagePhone;	// @dynamic
@property(assign, nonatomic) UIEdgeInsets landscapeImagePhoneInsets;	// @dynamic
@property(assign, nonatomic) int tag;	// @dynamic
@property(copy, nonatomic) NSString* title;	// @dynamic
+(id)_appearanceProxyViewClasses;
+(id)_appearanceRecorder;
+(id)_appearanceRecorderWhenContainedIn:(Class)anIn;
+(id)_appearanceWhenContainedIn:(id)anIn;
+(id)appearance;
+(id)appearanceWhenContainedIn:(Class)anIn;
-(id)initWithCoder:(id)coder;
// declared property getter: -(BOOL)_hasCustomizableInstanceAppearanceModifications;
// declared property setter: -(void)_setHasCustomizableInstanceAppearanceModifications:(BOOL)modifications;
// declared property setter: -(void)_setShouldArchiveUIAppearanceTags:(BOOL)_set;
// declared property getter: -(BOOL)_shouldArchiveUIAppearanceTags;
-(void)encodeWithCoder:(id)coder;
-(void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(id)titleTextAttributesForState:(unsigned)state;
@end
