/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITabBarItem.h"
#import "UIKit-Structs.h"
#import "UIBarItem.h"

@class NSString, NSSet, UIImage, UIView;

@interface UITabBarItem : UIBarItem {
@private
	NSString* _title;
	NSSet* _possibleTitles;
	SEL _action;
	id _target;
	UIImage* _image;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	UIEdgeInsets _imageInsets;
	NSString* _badgeValue;
	UIView* _view;
	int _tag;
	id _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	} _tabBarItemFlags;
}
@property(copy, nonatomic) NSString* badgeValue;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithTabBarSystemItem:(int)tabBarSystemItem tag:(int)tag;
-(id)initWithTitle:(id)title image:(id)image tag:(int)tag;
// declared property getter: -(id)badgeValue;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)finishedSelectedImage;
-(id)finishedUnselectedImage;
-(id)image;
-(UIEdgeInsets)imageInsets;
-(BOOL)isEnabled;
// declared property setter: -(void)setBadgeValue:(id)value;
-(void)setEnabled:(BOOL)enabled;
-(void)setFinishedSelectedImage:(id)image withFinishedUnselectedImage:(id)finishedUnselectedImage;
-(void)setImage:(id)image;
-(void)setImageInsets:(UIEdgeInsets)insets;
-(void)setTag:(int)tag;
-(void)setTitle:(id)title;
-(void)setTitlePositionAdjustment:(UIOffset)adjustment;
-(void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(int)tag;
-(id)title;
-(UIOffset)titlePositionAdjustment;
-(id)titleTextAttributesForState:(unsigned)state;
@end

@interface UITabBarItem (UITabBarItem_Private)
@property(assign, nonatomic) SEL action;
@property(assign, nonatomic) BOOL animatedBadge;
@property(retain, nonatomic) UIImage* selectedImage;
@property(assign, nonatomic) id target;
@property(retain, nonatomic) UIImage* unselectedImage;
@property(retain, nonatomic) UIView* view;
@property(assign, nonatomic) BOOL viewIsCustom;
-(id)_internalTemplateImage;
-(id)_internalTitle;
-(void)_setInternalTemplateImage:(id)image;
-(void)_setInternalTitle:(id)title;
// declared property getter: -(SEL)action;
// declared property getter: -(BOOL)animatedBadge;
-(BOOL)isSystemItem;
// declared property getter: -(id)selectedImage;
// declared property setter: -(void)setAction:(SEL)action;
// declared property setter: -(void)setAnimatedBadge:(BOOL)badge;
// declared property setter: -(void)setSelectedImage:(id)image;
// declared property setter: -(void)setTarget:(id)target;
// declared property setter: -(void)setUnselectedImage:(id)image;
// declared property setter: -(void)setView:(id)view;
// declared property setter: -(void)setViewIsCustom:(BOOL)custom;
-(int)systemItem;
// declared property getter: -(id)target;
// declared property getter: -(id)unselectedImage;
// declared property getter: -(id)view;
// declared property getter: -(BOOL)viewIsCustom;
@end

@interface UITabBarItem (Static)
+(id)_appearanceProxyViewClasses;
-(id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge;
-(id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge withTint:(BOOL)tint;
-(void)_setTitleTextAttributeValue:(id)value forAttributeKey:(id)attributeKey state:(unsigned)state;
-(id)_updateImageWithTintColor:(id)tintColor isSelected:(BOOL)selected getImageOffset:(UIOffset*)offset;
-(void)_updateView;
-(id)nextResponder;
@end

