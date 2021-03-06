/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import "iAd-Structs.h"
#import "ADAdRecipient.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ADInterstitialAd, UIView, ADRemoteView, ADTapGestureRecognizer, ADAdRecipientRecord, UIViewController, NSString;
@protocol ADInterstitialViewDelegate;

@interface ADInterstitialView : XXUnknownSuperclass <ADAdRecipient> {
@private
	ADAdRecipientRecord* _recipientRecord;
	ADInterstitialAd<ADInterstitialViewDelegate>* _interstitialAd;
	UIViewController<ADInterstitialViewDelegate>* _modalViewController;
	BOOL _loaded;
	BOOL _actionInProgress;
	ADRemoteView* _remoteView;
	UIView* _dimmerView;
	ADTapGestureRecognizer* _gestureRecognizer;
	NSString* _advertisingSection;
	int _previousOrientation;
	BOOL _touchesBeganOnCloseBox;
	BOOL _actionWasCancelled;
	BOOL _interstitialWasDismissedByUser;
	BOOL _hasLoaded;
	BOOL _presentedInView;
	NSString* _authenticationUserName;
	NSString* _identifier;
	NSString* _section;
	BOOL _dimmed;
}
@property(readonly, assign, nonatomic, getter=isActionInProgress) BOOL actionInProgress;	// @synthesize=_actionInProgress
@property(assign) BOOL actionWasCancelled;	// @synthesize=_actionWasCancelled
@property(copy, nonatomic) NSString* advertisingSection;	// @synthesize=_advertisingSection
@property(copy, nonatomic) NSString* authenticationUserName;	// @synthesize=_authenticationUserName
@property(assign, nonatomic) BOOL dimmed;	// @synthesize=_dimmed
@property(retain, nonatomic) UIView* dimmerView;	// @synthesize=_dimmerView
@property(retain, nonatomic) ADTapGestureRecognizer* gestureRecognizer;	// @synthesize=_gestureRecognizer
@property(assign) BOOL hasLoaded;	// @synthesize=_hasLoaded
@property(copy, nonatomic) NSString* identifier;	// @synthesize=_identifier
@property(assign, nonatomic) ADInterstitialAd<ADInterstitialViewDelegate>* interstitialAd;	// @synthesize=_interstitialAd
@property(assign) BOOL interstitialWasDismissedByUser;	// @synthesize=_interstitialWasDismissedByUser
@property(assign, nonatomic, getter=isLoaded) BOOL loaded;	// @synthesize=_loaded
@property(assign, nonatomic) UIViewController<ADInterstitialViewDelegate>* modalViewController;	// @synthesize=_modalViewController
@property(assign, nonatomic) BOOL presentedInView;	// @synthesize=_presentedInView
@property(assign, nonatomic) int previousOrientation;	// @synthesize=_previousOrientation
@property(retain, nonatomic) ADRemoteView* remoteView;	// @synthesize=_remoteView
@property(copy, nonatomic) NSString* section;	// @synthesize=_section
@property(assign) BOOL touchesBeganOnCloseBox;	// @synthesize=_touchesBeganOnCloseBox
-(id)initWithFrame:(CGRect)frame;
-(void)_actionDidfinish;
-(BOOL)_actionShouldBegin;
-(void)_didFailToReceiveAdWithError:(id)error;
-(void)_didLoadAd;
-(void)_didUnloadAd;
-(void)_gestureHandler:(id)handler;
-(void)_orientationChanged;
-(void)_sanitizeAndForwardErrorToDelegate:(id)delegate;
-(void)_setLoaded:(BOOL)loaded;
-(void)_willLoadAd;
// declared property getter: -(BOOL)actionWasCancelled;
-(void)addSubview:(id)subview;
// declared property getter: -(id)advertisingSection;
// declared property getter: -(id)authenticationUserName;
-(void)bannerControllerGranted;
-(void)bannerControllerRevoked;
-(void)cancelAction;
-(void)dealloc;
-(void)didMoveToWindow;
// declared property getter: -(BOOL)dimmed;
// declared property getter: -(id)dimmerView;
-(void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;
// declared property getter: -(id)gestureRecognizer;
// declared property getter: -(BOOL)hasLoaded;
// declared property getter: -(id)identifier;
-(void)insertSubview:(id)subview above:(id)above;
-(void)insertSubview:(id)subview aboveSubview:(id)subview2;
-(void)insertSubview:(id)subview atIndex:(int)index;
-(void)insertSubview:(id)subview below:(id)below;
-(void)insertSubview:(id)subview belowSubview:(id)subview2;
-(int)internalAdType;
// declared property getter: -(id)interstitialAd;
// declared property getter: -(BOOL)interstitialWasDismissedByUser;
// declared property getter: -(BOOL)isActionInProgress;
// declared property getter: -(BOOL)isLoaded;
// declared property getter: -(id)modalViewController;
// declared property getter: -(BOOL)presentedInView;
// declared property getter: -(int)previousOrientation;
// declared property getter: -(id)remoteView;
-(void)removeFromSuperview;
// declared property getter: -(id)section;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)serverBannerView;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewWillLoad;
-(void)serverInterstitialViewExpiredAndWasUnloaded;
-(void)serverStoryboardDidTransitionOut;
-(void)setActionInProgress:(BOOL)progress;
// declared property setter: -(void)setActionWasCancelled:(BOOL)cancelled;
// declared property setter: -(void)setAdvertisingSection:(id)section;
-(void)setAlpha:(float)alpha;
// declared property setter: -(void)setAuthenticationUserName:(id)name;
-(void)setBounds:(CGRect)bounds;
-(void)setCenter:(CGPoint)center;
// declared property setter: -(void)setDimmed:(BOOL)dimmed;
// declared property setter: -(void)setDimmerView:(id)view;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setGestureRecognizer:(id)recognizer;
// declared property setter: -(void)setHasLoaded:(BOOL)loaded;
-(void)setHidden:(BOOL)hidden;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setInterstitialAd:(id)ad;
// declared property setter: -(void)setInterstitialWasDismissedByUser:(BOOL)user;
// declared property setter: -(void)setModalViewController:(id)controller;
// declared property setter: -(void)setPresentedInView:(BOOL)view;
// declared property setter: -(void)setPreviousOrientation:(int)orientation;
// declared property setter: -(void)setRemoteView:(id)view;
// declared property setter: -(void)setSection:(id)section;
// declared property setter: -(void)setTouchesBeganOnCloseBox:(BOOL)box;
-(void)setTransform:(CGAffineTransform)transform;
// declared property getter: -(BOOL)touchesBeganOnCloseBox;
@end

