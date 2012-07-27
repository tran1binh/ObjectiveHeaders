/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableSet, UIView, UIEvent;
@protocol UIGestureRecognizerDelegate;

@interface UIGestureRecognizer : XXUnknownSuperclass {
@private
	NSMutableArray* _targets;
	NSMutableArray* _delayedTouches;
	UIView* _view;
	UIEvent* _updateEvent;
	id<UIGestureRecognizerDelegate> _delegate;
	NSMutableSet* _failureRequirements;
	NSMutableSet* _failureDependents;
	NSMutableSet* _dynamicFailureRequirements;
	NSMutableSet* _dynamicFailureDependents;
	id _failureMap;
	NSMutableSet* _friends;
	int _state;
	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned notExclusive : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned delivered : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
	} _gestureFlags;
}
@property(assign, nonatomic) BOOL cancelsTouchesInView;
@property(assign, nonatomic) BOOL delaysTouchesBegan;
@property(assign, nonatomic) BOOL delaysTouchesEnded;
@property(assign, nonatomic) id<UIGestureRecognizerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, assign, nonatomic) int state;
@property(readonly, assign, nonatomic) UIView* view;
+(BOOL)_touchesBeganWasDelayedForTouch:(id)touch;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithTarget:(id)target action:(SEL)action;
-(id)_activeTouchesForEvent:(id)event;
-(void)_addDynamicFailureDependent:(id)dependent;
-(void)_addDynamicFailureRequirement:(id)requirement;
-(void)_addFailureDependent:(id)dependent;
-(void)_addFriendGesture:(id)gesture;
-(BOOL)_affectedByGesture:(id)gesture;
-(void)_appendDescription:(id)description forDependencies:(id)dependencies toString:(id)string atLevel:(int)level;
-(void)_appendDescriptionToString:(id)string atLevel:(int)level includingDependencies:(BOOL)dependencies;
-(void)_appendSubclassDescription:(id)description;
-(id)_briefDescription;
-(void)_cancelRecognition;
-(CGPoint)_centroidOfTouches:(id)touches excludingEnded:(BOOL)ended;
-(void)_clearDelayedTouches;
-(void)_clearUpdateTimer;
-(void)_delayTouch:(id)touch forEvent:(id)event;
-(void)_delayTouchesForEvent:(id)event;
-(void)_delayedUpdateGesture;
-(BOOL)_delegateCanPreventGestureRecognizer:(id)recognizer;
-(BOOL)_delegateShouldReceiveTouch:(id)_delegate;
-(int)_depthFirstViewCompare:(id)compare;
-(float)_distanceBetweenTouches:(id)touches;
-(void)_enqueueDelayedTouchToSend:(id)send;
-(void)_enqueueDelayedTouchesToSend;
-(void)_exclude;
-(id)_failureMap;
-(void)_failureRequirementCompleted:(id)completed withEvent:(id)event;
-(void)_invalidate;
-(BOOL)_isDirty;
-(BOOL)_isExcludedByGesture:(id)gesture;
-(BOOL)_isFriendWithGesture:(id)gesture;
-(BOOL)_isRecognized;
-(void)_queryFailureRequirements;
-(void)_queueForResetIfFinished;
-(void)_relatedGestureReleased:(id)released;
-(void)_removeFailureDependent:(id)dependent;
-(BOOL)_requiresGestureRecognizerToFail:(id)fail;
-(void)_resetGestureRecognizer;
-(void)_resetIfFinished;
-(void)_setDirty;
-(void)_setFailureMap:(id)map;
-(BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;
-(void)_touchWasCancelled:(id)cancelled;
-(void)_updateGestureStateWithEvent:(id)event afterDelay:(BOOL)delay;
-(void)_updateGestureWithEvent:(id)event;
-(void)addTarget:(id)target action:(SEL)action;
-(BOOL)canBePreventedByGestureRecognizer:(id)recognizer;
-(BOOL)canPreventGestureRecognizer:(id)recognizer;
// declared property getter: -(BOOL)cancelsTouchesInView;
-(void)dealloc;
// declared property getter: -(BOOL)delaysTouchesBegan;
// declared property getter: -(BOOL)delaysTouchesEnded;
// declared property getter: -(id)delegate;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void)ignoreTouch:(id)touch forEvent:(id)event;
// declared property getter: -(BOOL)isEnabled;
-(BOOL)isExclusive;
-(CGPoint)locationInView:(id)view;
-(CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;
-(unsigned)numberOfTouches;
-(void)removeFailureRequirement:(id)requirement;
-(void)removeTarget:(id)target action:(SEL)action;
-(void)requireGestureRecognizerToFail:(id)fail;
-(void)requireOtherGestureToFail:(id)fail;
-(void)reset;
// declared property setter: -(void)setCancelsTouchesInView:(BOOL)view;
// declared property setter: -(void)setDelaysTouchesBegan:(BOOL)began;
// declared property setter: -(void)setDelaysTouchesEnded:(BOOL)ended;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
-(void)setExclusive:(BOOL)exclusive;
-(void)setState:(int)state;
-(void)setView:(id)view;
// declared property getter: -(int)state;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
// declared property getter: -(id)view;
@end

@interface UIGestureRecognizer (UINibLoadingActionEstablishing)
-(void)_connectInterfaceBuilderEventConnection:(id)connection;
@end

@interface UIGestureRecognizer (UIWebSelectionAssistantAdditions)
-(void)_detach;
@end
