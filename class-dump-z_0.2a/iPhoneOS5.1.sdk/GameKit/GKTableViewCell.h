/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"

@class UIView, GKUITheme, UIImageView;
@protocol GKTableViewCellContents;

@interface GKTableViewCell : XXUnknownSuperclass {
	UIView<GKTableViewCellContents>* _contents;
	UIImageView* _disclosureIndicator;
	GKUITheme* _theme;
	struct {
		unsigned drawSelected : 1;
		unsigned groupedTableViewStyle : 1;
	} _styleFlags;
@private
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _backgroundInsets;
	int _backgroundStyle;
	BOOL _groupHighlightEnabled;
}
@property(assign, nonatomic) UIEdgeInsets backgroundInsets;	// @synthesize=_backgroundInsets
@property(assign, nonatomic) int backgroundStyle;	// @synthesize=_backgroundStyle
@property(assign, nonatomic) UIEdgeInsets contentInsets;	// @synthesize=_contentInsets
@property(retain, nonatomic) UIView<GKTableViewCellContents>* contents;	// @synthesize=_contents
@property(assign, nonatomic) BOOL groupHighlightEnabled;	// @synthesize=_groupHighlightEnabled
@property(readonly, assign, nonatomic) BOOL isGroupedTableView;
@property(assign, nonatomic) BOOL leaveAccessorySpace;
@property(retain, nonatomic) GKUITheme* theme;	// @synthesize=_theme
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
-(id)initWithReuseIdentifier:(id)reuseIdentifier tableViewStyle:(int)style;
-(id)initWithReuseIdentifier:(id)reuseIdentifier tableViewStyle:(int)style backgroundStyle:(int)style3;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier tableViewStyle:(int)style3 backgroundStyle:(int)style4;
// declared property getter: -(UIEdgeInsets)backgroundInsets;
// declared property getter: -(int)backgroundStyle;
-(void)configureBackgroundView;
// declared property getter: -(UIEdgeInsets)contentInsets;
// declared property getter: -(id)contents;
-(void)dealloc;
-(id)description;
// declared property getter: -(BOOL)groupHighlightEnabled;
// declared property getter: -(BOOL)isGroupedTableView;
-(BOOL)isSelectable;
-(void)layoutSubviews;
// declared property getter: -(BOOL)leaveAccessorySpace;
-(void)prepareForReuse;
-(void)setAccessoryType:(int)type;
// declared property setter: -(void)setBackgroundInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setBackgroundStyle:(int)style;
-(void)setBackgroundView:(id)view;
// declared property setter: -(void)setContentInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setContents:(id)contents;
-(void)setContentsInset:(UIEdgeInsets)inset;
// declared property setter: -(void)setGroupHighlightEnabled:(BOOL)enabled;
-(void)setGroupSelectedOrHighlighted:(BOOL)highlighted isHighlight:(BOOL)highlight animated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
// declared property setter: -(void)setLeaveAccessorySpace:(BOOL)space;
-(void)setSectionLocation:(int)location animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)setSelectedBackgroundView:(id)view animated:(BOOL)animated;
-(void)setSelectionStyle:(int)style;
// declared property setter: -(void)setTheme:(id)theme;
// declared property getter: -(id)theme;
@end
