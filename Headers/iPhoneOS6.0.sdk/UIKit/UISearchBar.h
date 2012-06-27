/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIStatusBarTinting.h"

@class UIImageView, UIButton, UITextField, UILabel, UIColor, NSArray, UIImage, NSString;
@protocol UISearchBarDelegate;

@interface UISearchBar : UIView <UIStatusBarTinting> {
@private
	UITextField* _searchField;
	UILabel* _promptLabel;
	UIButton* _cancelButton;
	id<UISearchBarDelegate> _delegate;
	id _controller;
	UIColor* _tintColor;
	UIImageView* _separator;
	NSString* _cancelButtonText;
	NSArray* _scopes;
	int _selectedScope;
	UIView* _background;
	UIView* _scopeBar;
	UIEdgeInsets _contentInset;
	UIImageView* _shadowView;
	id _appearanceStorage;
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned isTranslucent : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
	} _searchBarFlags;
	UIColor* _statusBarTintColor;
	UIView* _inputAccessoryView;
}
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor* _statusBarTintColor;	// @synthesize
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(retain, nonatomic) UIImage* backgroundImage;
@property(assign, nonatomic) int barStyle;
@property(assign, nonatomic) id<UISearchBarDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) UIView* inputAccessoryView;	// @synthesize=_inputAccessoryView
@property(assign, nonatomic) int keyboardType;
@property(copy, nonatomic) NSString* placeholder;
@property(copy, nonatomic) NSString* prompt;
@property(retain, nonatomic) UIImage* scopeBarBackgroundImage;
@property(copy, nonatomic) NSArray* scopeButtonTitles;
@property(assign, nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;
@property(assign, nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property(assign, nonatomic) UIOffset searchTextPositionAdjustment;
@property(assign, nonatomic) int selectedScopeButtonIndex;
@property(assign, nonatomic) BOOL showsBookmarkButton;
@property(assign, nonatomic) BOOL showsCancelButton;
@property(assign, nonatomic) BOOL showsScopeBar;
@property(assign, nonatomic) BOOL showsSearchResultsButton;
@property(assign, nonatomic) int spellCheckingType;
@property(copy, nonatomic) NSString* text;
@property(retain, nonatomic) UIColor* tintColor;	// @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;
-(float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;
-(float)_availableBoundsWidth;
-(void)_bookmarkButtonPressed;
-(void)_cancelButtonPressed;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)_currentSeparatorImage;
-(float)_defaultHeight;
-(void)_destroyCancelButton;
-(void)_didMoveFromWindow:(id)window toWindow:(id)window2;
-(BOOL)_hasCustomAutolayoutNeighborSpacing;
-(void)_hideShowAnimationDidFinish;
-(id)_imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;
-(BOOL)_isEnabled;
-(BOOL)_isInBar;
-(float)_landscapeScopeBarWidth;
-(float)_landscapeSearchFieldWidth;
-(id)_makeShadowView;
-(id)_navigationBarForShadow;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_resultsListButtonPressed;
-(id)_scopeBar;
-(void)_scopeChanged:(id)changed;
-(void)_searchFieldBeginEditing;
-(void)_searchFieldEditingChanged;
-(void)_searchFieldEndEditing;
-(float)_searchFieldHeight;
-(void)_searchFieldReturnPressed;
-(id)_separatorImage;
-(void)_setAutoDisableCancelButton:(BOOL)button;
-(void)_setCancelButtonText:(id)text;
-(void)_setEnabled:(BOOL)enabled;
-(void)_setEnabled:(BOOL)enabled animated:(BOOL)animated;
-(void)_setScopeBarHidden:(BOOL)hidden;
-(void)_setScopeBarSegmentsEnabled:(BOOL)enabled;
-(void)_setSeparatorImage:(id)image;
-(void)_setShadowVisibleIfNecessary:(BOOL)necessary;
-(void)_setShowsCancelButton:(BOOL)button;
-(void)_setShowsSeparator:(BOOL)separator;
// declared property setter: -(void)_setStatusBarTintColor:(id)color;
-(void)_setTintColor:(id)color forceUpdate:(BOOL)update;
-(void)_setUpScopeBar;
-(void)_setupCancelButton;
-(void)_setupCancelButtonWithAppearance:(id)appearance;
-(void)_setupPromptLabel;
-(void)_setupSearchField;
-(BOOL)_shouldCombineLandscapeBars;
-(BOOL)_shouldDisplayShadow;
// declared property getter: -(id)_statusBarTintColor;
-(void)_updateMagnifyingGlassView;
-(void)_updateOpacity;
-(void)_updateRightView;
-(void)_updateSearchFieldArt;
// declared property getter: -(int)autocapitalizationType;
// declared property getter: -(int)autocorrectionType;
// declared property getter: -(id)backgroundImage;
// declared property getter: -(int)barStyle;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)cancelButton;
-(BOOL)combinesLandscapeBars;
-(UIEdgeInsets)contentInset;
-(id)controller;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)didMoveToWindow:(id)window;
-(BOOL)drawsBackground;
-(void)encodeWithCoder:(id)coder;
-(id)imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;
// declared property getter: -(id)inputAccessoryView;
-(CGSize)intrinsicContentSize;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isFirstResponder;
// declared property getter: -(BOOL)isSearchResultsButtonSelected;
// declared property getter: -(BOOL)isTranslucent;
// declared property getter: -(int)keyboardType;
-(void)layoutSubviews;
-(void)movedToSuperview:(id)superview;
// declared property getter: -(id)placeholder;
-(UIOffset)positionAdjustmentForSearchBarIcon:(int)searchBarIcon;
-(BOOL)pretendsIsInBar;
// declared property getter: -(id)prompt;
-(void)reloadInputViews;
-(BOOL)resignFirstResponder;
// declared property getter: -(id)scopeBarBackgroundImage;
-(id)scopeBarButtonBackgroundImageForState:(unsigned)state;
-(id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;
-(id)scopeBarButtonTitleTextAttributesForState:(unsigned)state;
// declared property getter: -(id)scopeButtonTitles;
-(id)searchField;
-(id)searchFieldBackgroundImageForState:(unsigned)state;
// declared property getter: -(UIOffset)searchFieldBackgroundPositionAdjustment;
// declared property getter: -(UIOffset)searchTextPositionAdjustment;
// declared property getter: -(int)selectedScopeButtonIndex;
// declared property setter: -(void)setAutocapitalizationType:(int)type;
// declared property setter: -(void)setAutocorrectionType:(int)type;
// declared property setter: -(void)setBackgroundImage:(id)image;
// declared property setter: -(void)setBarStyle:(int)style;
-(void)setCancelButton:(id)button;
-(void)setCombinesLandscapeBars:(BOOL)bars;
-(void)setContentInset:(UIEdgeInsets)inset;
-(void)setController:(id)controller;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setDrawsBackground:(BOOL)background;
-(void)setImage:(id)image forSearchBarIcon:(int)searchBarIcon state:(unsigned)state;
// declared property setter: -(void)setInputAccessoryView:(id)view;
// declared property setter: -(void)setKeyboardType:(int)type;
// declared property setter: -(void)setPlaceholder:(id)placeholder;
-(void)setPositionAdjustment:(UIOffset)adjustment forSearchBarIcon:(int)searchBarIcon;
-(void)setPretendsIsInBar:(BOOL)bar;
// declared property setter: -(void)setPrompt:(id)prompt;
// declared property setter: -(void)setScopeBarBackgroundImage:(id)image;
-(void)setScopeBarButtonBackgroundImage:(id)image forState:(unsigned)state;
-(void)setScopeBarButtonDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;
-(void)setScopeBarButtonTitleTextAttributes:(id)attributes forState:(unsigned)state;
// declared property setter: -(void)setScopeButtonTitles:(id)titles;
-(void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;
// declared property setter: -(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)adjustment;
// declared property setter: -(void)setSearchResultsButtonSelected:(BOOL)selected;
// declared property setter: -(void)setSearchTextPositionAdjustment:(UIOffset)adjustment;
// declared property setter: -(void)setSelectedScopeButtonIndex:(int)index;
-(void)setShortcutConversionType:(int)type;
// declared property setter: -(void)setShowsBookmarkButton:(BOOL)button;
// declared property setter: -(void)setShowsCancelButton:(BOOL)button;
-(void)setShowsCancelButton:(BOOL)button animated:(BOOL)animated;
// declared property setter: -(void)setShowsScopeBar:(BOOL)bar;
// declared property setter: -(void)setShowsSearchResultsButton:(BOOL)button;
// declared property setter: -(void)setSpellCheckingType:(int)type;
// declared property setter: -(void)setText:(id)text;
// declared property setter: -(void)setTintColor:(id)color;
// declared property setter: -(void)setTranslucent:(BOOL)translucent;
-(void)setUsesEmbeddedAppearance:(BOOL)appearance;
-(int)shortcutConversionType;
// declared property getter: -(BOOL)showsBookmarkButton;
// declared property getter: -(BOOL)showsCancelButton;
// declared property getter: -(BOOL)showsScopeBar;
// declared property getter: -(BOOL)showsSearchResultsButton;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(int)spellCheckingType;
// declared property getter: -(id)text;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
// declared property getter: -(id)tintColor;
-(BOOL)usesEmbeddedAppearance;
-(void)willMoveToSuperview:(id)superview;
-(void)willMoveToWindow:(id)window;
@end
