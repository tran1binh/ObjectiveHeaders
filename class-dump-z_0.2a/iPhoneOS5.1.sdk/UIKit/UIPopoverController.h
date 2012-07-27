/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIDimmingViewDelegate.h"
#import "UIKit-Structs.h"
#import "UIAppearanceContainer.h"

@class UIBarButtonItem, _UIPopoverView, UIDimmingView, NSArray, UIViewController, _UIPopoverLayoutInfo;
@protocol UIPopoverControllerDelegate;

@interface UIPopoverController : XXUnknownSuperclass <UIDimmingViewDelegate, UIAppearanceContainer> {
@private
	id _delegate;
	UIViewController* _contentViewController;
	UIViewController* _splitParentController;
	_UIPopoverView* _popoverView;
	UIDimmingView* _dimmingView;
	UIBarButtonItem* _targetBarButtonItem;
	unsigned _requestedArrowDirections;
	unsigned _currentArrowDirection;
	int _popoverBackgroundStyle;
	_UIPopoverLayoutInfo* _preferredLayoutInfo;
	Class _popoverBackgroundViewClass;
	CGSize _popoverContentSize;
	CGRect _targetRectInDimmingView;
	int _popoverControllerStyle;
	unsigned draggingChildScrollViewCount;
	unsigned deceleratingChildScrollViewCount;
	id _target;
	SEL _didEndSelector;
	UIViewController* _modalPresentationFromViewController;
	UIViewController* _modalPresentationToViewController;
	unsigned _toViewAutoResizingMask;
	UIViewController* _slidingViewController;
	int _presentationState;
	unsigned _slideTransitionCount;
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _popoverControllerFlags;
	BOOL _allowResizePastTargetRect;
	BOOL _dismissesOnRotation;
	UIEdgeInsets _popoverLayoutMargins;
	BOOL _showsTargetRect;
	BOOL _showsOrientationMarker;
	BOOL _showsPresentationArea;
	BOOL _retainsSelfWhilePresented;
	BOOL _embedsInView;
	BOOL _preventFastMode;
}
@property(assign, nonatomic, setter=_setPreventFastMode:) BOOL _preventFastMode;	// @synthesize
@property(assign, nonatomic) BOOL allowResizePastTargetRect;	// @synthesize=_allowResizePastTargetRect
@property(retain, nonatomic) UIViewController* contentViewController;
@property(assign, nonatomic) id<UIPopoverControllerDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) UIDimmingView* dimmingView;	// @synthesize=_dimmingView
@property(assign, nonatomic) BOOL dismissesOnRotation;	// @synthesize=_dismissesOnRotation
@property(assign, nonatomic, getter=_embedsInView, setter=_setEmbedsInView:) BOOL embedsInView;	// @synthesize=_embedsInView
@property(copy, nonatomic) NSArray* passthroughViews;
@property(assign, nonatomic) unsigned popoverArrowDirection;	// @synthesize=_currentArrowDirection
@property(retain, nonatomic) Class popoverBackgroundViewClass;	// @synthesize=_popoverBackgroundViewClass
@property(assign, nonatomic) CGSize popoverContentSize;
@property(assign, nonatomic) UIEdgeInsets popoverLayoutMargins;	// @synthesize=_popoverLayoutMargins
@property(readonly, assign, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;
@property(retain, nonatomic) _UIPopoverLayoutInfo* preferredLayoutInfo;	// @synthesize=_preferredLayoutInfo
@property(assign, nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented;	// @synthesize=_retainsSelfWhilePresented
@property(assign, nonatomic) BOOL showsOrientationMarker;	// @synthesize=_showsOrientationMarker
@property(assign, nonatomic) BOOL showsPresentationArea;	// @synthesize=_showsPresentationArea
@property(assign, nonatomic) BOOL showsTargetRect;	// @synthesize=_showsTargetRect
+(UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)popoverControllerStyle andContentViewController:(id)controller;
+(BOOL)_forceAttemptsToAvoidKeyboard;
+(BOOL)_popoversDisabled;
+(BOOL)_showTargetRectPref;
-(id)init;
-(id)initWithContentViewController:(id)contentViewController;
-(void)_adjustPopoverForNewContentSizeFromViewController:(id)viewController allowShrink:(BOOL)shrink;
-(BOOL)_attemptsToAvoidKeyboard;
-(BOOL)_canRepresentAutomatically;
-(void)_childScrollViewDidEndAnimating;
-(id)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)dismissalWhenNotifyingDelegate;
-(void)_containedViewControllerModalStateChanged;
-(CGSize)_currentPopoverContentSize;
-(Class)_defaultChromeViewClass;
-(id)_dimmingView;
-(void)_dismissPopoverAnimated:(BOOL)animated stateOnly:(BOOL)only notifyDelegate:(BOOL)delegate;
-(float)_dismissalAnimationDuration;
// declared property getter: -(BOOL)_embedsInView;
-(void)_hostingWindowDidRotate:(id)_hostingWindow;
-(void)_hostingWindowWillRotate:(id)_hostingWindow;
-(void)_incrementSlideTransitionCount:(BOOL)count;
-(id)_initWithContentViewController:(id)contentViewController popoverControllerStyle:(int)style;
-(void)_invalidateLayoutInfo;
-(BOOL)_isDismissing;
-(BOOL)_isPresenting;
-(void)_keyboardStateChanged:(id)changed;
-(void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)hostingWindow;
-(id)_layoutInfoForCurrentKeyboardState;
-(id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)currentKeyboardStateAndHostingWindow;
-(id)_layoutInfoFromLayoutInfo:(id)layoutInfo forCurrentKeyboardStateAndHostingWindow:(id)currentKeyboardStateAndHostingWindow;
-(id)_managingSplitViewController;
-(BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
-(void)_modalAnimation:(id)animation finished:(id)finished context:(void*)context;
-(void)_modalTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3 target:(id)target didEndSelector:(SEL)selector;
-(void)_moveAwayFromTheKeyboard:(id)theKeyboard;
-(void)_newViewControllerWasPushed:(id)pushed;
-(void)_newViewControllerWillBePushed:(id)_newViewController;
-(void)_performHierarchyCheckOnViewController:(id)controller;
-(int)_popoverBackgroundStyle;
-(int)_popoverControllerStyle;
-(Class)_popoverLayoutInfoClass;
-(void)_postludeForDismissal;
-(void)_presentPopoverBySlidingIn:(BOOL)anIn fromEdge:(int)edge ofView:(id)view animated:(BOOL)animated stateOnly:(BOOL)only notifyDelegate:(BOOL)delegate;
-(void)_presentPopoverFromEdge:(int)edge ofView:(id)view animated:(BOOL)animated;
-(float)_presentationAnimationDuration;
-(int)_presentationState;
// declared property getter: -(BOOL)_preventFastMode;
-(void)_resetSlideTransitionCount;
// declared property getter: -(BOOL)_retainsSelfWhilePresented;
-(void)_scrollViewDidEndDecelerating:(id)_scrollView;
-(void)_scrollViewDidEndDragging:(id)_scrollView;
-(void)_scrollViewWillBeginDragging:(id)_scrollView;
-(void)_setContentViewController:(id)controller backgroundStyle:(int)style animated:(BOOL)animated;
// declared property setter: -(void)_setEmbedsInView:(BOOL)view;
-(void)_setManagingSplitViewController:(id)controller;
-(void)_setPopoverBackgroundStyle:(int)style;
-(void)_setPopoverView:(id)view;
-(void)_setPresentationState:(int)state;
// declared property setter: -(void)_setPreventFastMode:(BOOL)mode;
// declared property setter: -(void)_setRetainsSelfWhilePresented:(BOOL)presented;
-(void)_setSplitParentController:(id)controller;
-(unsigned)_slideTransitionCount;
-(id)_splitParentController;
-(void)_startWatchingForKeyboardNotificationsIfNecessary;
-(void)_startWatchingForNavigationControllerNotifications:(id)navigationControllerNotifications;
-(void)_startWatchingForScrollViewNotifications;
-(void)_startWatchingForWindowRotations;
-(void)_stopWatchingForKeyboardNotifications;
-(void)_stopWatchingForNavigationControllerNotifications:(id)navigationControllerNotifications;
-(void)_stopWatchingForNotifications;
-(void)_stopWatchingForScrollViewNotifications;
-(void)_stopWatchingForWindowRotations;
-(void)_transitionFromViewController:(id)viewController toViewController:(id)viewController2 animated:(BOOL)animated;
// declared property getter: -(BOOL)allowResizePastTargetRect;
// declared property getter: -(id)contentViewController;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(id)dimmingView;
-(void)dimmingViewWasTapped:(id)tapped;
-(void)dismissPopoverAnimated:(BOOL)animated;
// declared property getter: -(BOOL)dismissesOnRotation;
// declared property getter: -(BOOL)isPopoverVisible;
-(BOOL)isPresentingOrDismissing;
// declared property getter: -(id)passthroughViews;
// declared property getter: -(unsigned)popoverArrowDirection;
// declared property getter: -(Class)popoverBackgroundViewClass;
// declared property getter: -(CGSize)popoverContentSize;
// declared property getter: -(UIEdgeInsets)popoverLayoutMargins;
-(id)popoverView;
// declared property getter: -(id)preferredLayoutInfo;
-(void)presentPopoverFromBarButtonItem:(id)barButtonItem permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;
-(void)presentPopoverFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;
// declared property setter: -(void)setAllowResizePastTargetRect:(BOOL)rect;
// declared property setter: -(void)setContentViewController:(id)controller;
-(void)setContentViewController:(id)controller animated:(BOOL)animated;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDimmingView:(id)view;
// declared property setter: -(void)setDismissesOnRotation:(BOOL)rotation;
// declared property setter: -(void)setPassthroughViews:(id)views;
// declared property setter: -(void)setPopoverArrowDirection:(unsigned)direction;
// declared property setter: -(void)setPopoverBackgroundViewClass:(Class)aClass;
// declared property setter: -(void)setPopoverContentSize:(CGSize)size;
-(void)setPopoverContentSize:(CGSize)size animated:(BOOL)animated;
-(void)setPopoverFrame:(CGRect)frame animated:(BOOL)animated;
// declared property setter: -(void)setPopoverLayoutMargins:(UIEdgeInsets)margins;
// declared property setter: -(void)setPreferredLayoutInfo:(id)info;
// declared property setter: -(void)setShowsOrientationMarker:(BOOL)marker;
// declared property setter: -(void)setShowsPresentationArea:(BOOL)area;
// declared property setter: -(void)setShowsTargetRect:(BOOL)rect;
// declared property getter: -(BOOL)showsOrientationMarker;
// declared property getter: -(BOOL)showsPresentationArea;
// declared property getter: -(BOOL)showsTargetRect;
@end
