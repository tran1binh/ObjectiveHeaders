/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIFont;

@interface UITextRenderingAttributes : XXUnknownSuperclass <NSCopying> {
	UIFont* _font;
	float _minimumFontSize;
	float _actualFontSize;
	float _lineSpacing;
	int _lineBreakMode;
	int _baselineAdjustment;
	float _trackingAdjustment;
	float _minimumTrackingAdjustment;
	float _actualTrackingAdjustment;
	int _alignment;
	BOOL _includeEmoji;
	CGRect _truncationRect;
	BOOL _drawUnderline;
@private
	id* renderString;
}
@property(readonly, assign, nonatomic) float actualFontSize;	// @synthesize=_actualFontSize
@property(readonly, assign, nonatomic) float actualTrackingAdjustment;	// @synthesize=_actualTrackingAdjustment
@property(assign, nonatomic) int alignment;	// @synthesize=_alignment
@property(assign, nonatomic) int baselineAdjustment;	// @synthesize=_baselineAdjustment
@property(assign, nonatomic) BOOL drawUnderline;	// @synthesize=_drawUnderline
@property(retain, nonatomic) UIFont* font;	// @synthesize=_font
@property(assign, nonatomic) BOOL includeEmoji;	// @synthesize=_includeEmoji
@property(assign, nonatomic) int lineBreakMode;	// @synthesize=_lineBreakMode
@property(assign, nonatomic) float lineSpacing;	// @synthesize=_lineSpacing
@property(assign, nonatomic) float minimumFontSize;	// @synthesize=_minimumFontSize
@property(assign, nonatomic) float minimumTrackingAdjustment;	// @synthesize=_minimumTrackingAdjustment
@property(assign, nonatomic) id* renderString;	// @synthesize
@property(assign, nonatomic) float trackingAdjustment;	// @synthesize=_trackingAdjustment
@property(assign, nonatomic) CGRect truncationRect;	// @synthesize=_truncationRect
+(id)attributesWithSystemFontOfSize:(float)size;
-(id)init;
// declared property getter: -(float)actualFontSize;
// declared property getter: -(float)actualTrackingAdjustment;
// declared property getter: -(int)alignment;
// declared property getter: -(int)baselineAdjustment;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(BOOL)drawUnderline;
-(int)ellipsisStyle;
// declared property getter: -(id)font;
// declared property getter: -(BOOL)includeEmoji;
-(float)letterSpacing;
// declared property getter: -(int)lineBreakMode;
// declared property getter: -(float)lineSpacing;
// declared property getter: -(float)minimumFontSize;
// declared property getter: -(float)minimumTrackingAdjustment;
// declared property getter: -(id*)renderString;
-(void)setActualFontSize:(float)size;
-(void)setActualTrackingAdjustment:(float)adjustment;
// declared property setter: -(void)setAlignment:(int)alignment;
// declared property setter: -(void)setBaselineAdjustment:(int)adjustment;
// declared property setter: -(void)setDrawUnderline:(BOOL)underline;
// declared property setter: -(void)setFont:(id)font;
// declared property setter: -(void)setIncludeEmoji:(BOOL)emoji;
// declared property setter: -(void)setLineBreakMode:(int)mode;
// declared property setter: -(void)setLineSpacing:(float)spacing;
// declared property setter: -(void)setMinimumFontSize:(float)size;
// declared property setter: -(void)setMinimumTrackingAdjustment:(float)adjustment;
// declared property setter: -(void)setRenderString:(id*)string;
// declared property setter: -(void)setTrackingAdjustment:(float)adjustment;
// declared property setter: -(void)setTruncationRect:(CGRect)rect;
// declared property getter: -(float)trackingAdjustment;
// declared property getter: -(CGRect)truncationRect;
@end

