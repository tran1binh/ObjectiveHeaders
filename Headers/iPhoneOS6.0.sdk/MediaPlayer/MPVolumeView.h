/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MPAudioDeviceControllerDelegate.h"

@class MPAudioDeviceController, MPAudioVideoRoutingActionSheet, MPAudioVideoRoutingPopoverController, UILabel, MPVolumeSlider, UIButton;

@interface MPVolumeView : XXUnknownSuperclass <MPAudioDeviceControllerDelegate, NSCoding> {
@private
	MPAudioVideoRoutingActionSheet* _actionSheet;
	MPAudioDeviceController* _audioDeviceController;
	BOOL _hasNonDefaultRouteButtonImages;
	BOOL _hasNonDefaultMaxVolumeSliderImage;
	BOOL _hasNonDefaultMinVolumeSliderImage;
	BOOL _hidesRouteLabelWhenNoRouteChoice;
	UIButton* _routeButton;
	BOOL _routeDiscoveryEnabled;
	UILabel* _routeLabel;
	MPAudioVideoRoutingPopoverController* _routePopoverController;
	BOOL _showingButton;
	BOOL _showingLabel;
	BOOL _showingSlider;
	BOOL _showsRouteButton;
	BOOL _showsVolumeSlider;
	int _style;
	MPVolumeSlider* _volumeSlider;
	BOOL _volumeSliderShrinksFromBothEnds;
}
@property(assign, nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice;
@property(readonly, assign, nonatomic) BOOL isShowingRouteButton;
@property(readonly, assign, nonatomic) BOOL isVisible;
@property(assign, nonatomic) BOOL showsRouteButton;
@property(assign, nonatomic) BOOL showsVolumeSlider;
@property(readonly, assign, nonatomic) int style;
@property(readonly, assign, nonatomic) MPVolumeSlider* volumeSlider;
@property(assign, nonatomic) BOOL volumeSliderShrinksFromBothEnds;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(void)_createSubviews;
-(id)_defaultRouteButtonImageAsSelected:(BOOL)selected;
-(void)_displayAudioRoutePicker;
-(void)_getDefaultVolumeSliderFrame:(CGRect*)frame routeButtonFrame:(CGRect*)frame2 forBounds:(CGRect)bounds;
-(void)_initWithStyle:(int)style;
-(id)_routeButton;
-(void)_setShowsRouteButton:(BOOL)button animated:(BOOL)animated;
-(void)_setShowsVolumeSlider:(BOOL)slider;
-(void)_setVolumeAudioCategory:(id)category;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)dismissActiveOverlaysAnimated:(BOOL)animated;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(BOOL)hidesRouteLabelWhenNoRouteChoice;
-(BOOL)isShowingActiveOverlays;
// declared property getter: -(BOOL)isShowingRouteButton;
// declared property getter: -(BOOL)isVisible;
-(void)layoutSubviews;
-(id)maximumVolumeSliderImageForState:(unsigned)state;
-(id)minimumVolumeSliderImageForState:(unsigned)state;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(id)routeButtonImageForState:(unsigned)state;
-(CGRect)routeButtonRectForBounds:(CGRect)bounds;
-(void)setAlpha:(float)alpha;
-(void)setFrame:(CGRect)frame;
-(void)setHidden:(BOOL)hidden;
// declared property setter: -(void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)choice;
-(void)setMaximumVolumeSliderImage:(id)image forState:(unsigned)state;
-(void)setMinimumVolumeSliderImage:(id)image forState:(unsigned)state;
-(void)setRouteButtonImage:(id)image forState:(unsigned)state;
// declared property setter: -(void)setShowsRouteButton:(BOOL)button;
// declared property setter: -(void)setShowsVolumeSlider:(BOOL)slider;
// declared property setter: -(void)setVolumeSliderShrinksFromBothEnds:(BOOL)bothEnds;
-(void)setVolumeThumbImage:(id)image forState:(unsigned)state;
// declared property getter: -(BOOL)showsRouteButton;
// declared property getter: -(BOOL)showsVolumeSlider;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(int)style;
// declared property getter: -(id)volumeSlider;
-(CGRect)volumeSliderRectForBounds:(CGRect)bounds;
// declared property getter: -(BOOL)volumeSliderShrinksFromBothEnds;
-(id)volumeThumbImageForState:(unsigned)state;
-(CGRect)volumeThumbRectForBounds:(CGRect)bounds volumeSliderRect:(CGRect)rect value:(float)value;
-(void)willMoveToWindow:(id)window;
@end

