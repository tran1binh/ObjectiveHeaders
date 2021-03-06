/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, _UIPageCurlState, NSNumber, UIView;

@interface _UIPageCurl : XXUnknownSuperclass {
	int _spineLocation;
	CGRect _contentRect;
	UIView* _contentView;
	_UIPageCurlState* _manualPageCurlState;
	NSMutableArray* _pendingStateQueue;
	NSMutableArray* _activeStateQueue;
	NSMutableArray* _orderedCompletedStates;
	double _delayBetweenSuccessiveAnimations;
	float _pageDiagonalAngle;
	float _pageDiagonalLength;
	float _manualPageCurlMaxDAngle;
}
@property(readonly, assign, nonatomic, getter=_isManualPageCurlInProgress) BOOL _manualPageCurlInProgress;
@property(assign, nonatomic, setter=_setManualPageCurlMaxDAngle:) float _manualPageCurlMaxDAngle;	// @synthesize
@property(readonly, assign, nonatomic) int _spineLocation;	// @synthesize
@property(readonly, assign, nonatomic) NSNumber* _wrappedManualPageCurlDirection;
-(id)initWithSpineLocation:(int)spineLocation andContentRect:(CGRect)rect inContentView:(id)contentView;
-(id)_animationKeyPaths;
-(float)_baseAngleOffsetForState:(id)state;
-(void)_beginCurlWithState:(id)state;
-(void)_cancelManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity;
-(void)_cleanupState:(id)state;
-(void)_completeManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity;
-(float)_distanceToTravelWithCurrentSpineLocation;
-(float)_durationForManualCurlEndAnimationWithSuggestedVelocity:(float)suggestedVelocity shouldComplete:(BOOL)complete;
-(void)_endManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity shouldComplete:(BOOL)complete;
-(void)_enqueueCurlOfType:(int)type fromLocation:(CGPoint)location inDirection:(int)direction withView:(id)view revealingView:(id)view5 completion:(id)completion;
-(void)_ensureCurlFilterOnLayer:(id)layer;
-(void)_forceCleanupState:(id)state finished:(BOOL)finished completed:(BOOL)completed;
-(void)_fromValue:(float*)value toValue:(float*)value2 fromState:(id)state forAnimationWithKeyPath:(id)keyPath;
-(float)_inputTimeForProgress:(float)progress distanceToTravel:(float)travel radius:(float*)radius minRadius:(float)radius4 angle:(float)angle dAngle:(float)angle6 touchLocation:(CGPoint)location state:(id)state;
// declared property getter: -(BOOL)_isManualPageCurlInProgress;
-(BOOL)_isPreviousCurlCompatibleWithCurlOfType:(int)type inDirection:(int)direction;
// declared property getter: -(float)_manualPageCurlMaxDAngle;
-(id)_newAnimationForState:(id)state withKeyPath:(id)keyPath duration:(float)duration fromValue:(id)value;
-(id)_newCurlFilter;
-(void)_pageCurlAnimationDidStop:(id)_pageCurlAnimation withState:(id)state;
-(CGRect)_pageViewFrame:(BOOL)frame;
-(BOOL)_populateFromValue:(float*)value toValue:(float*)value2 fromState:(id)state forAnimationWithKeyPath:(id)keyPath;
-(CGPoint)_referenceLocationForInitialLocation:(CGPoint)initialLocation direction:(int)direction;
// declared property setter: -(void)_setManualPageCurlMaxDAngle:(float)angle;
// declared property getter: -(int)_spineLocation;
-(void)_updateCurlFromState:(id)state withTime:(float)time radius:(float)radius angle:(float)angle addingAnimations:(id)animations;
-(void)_updateManualCurlToLocation:(CGPoint)location;
-(void)_updatedInputsFromState:(id)state forLocation:(CGPoint)location time:(float*)time radius:(float*)radius angle:(float*)angle;
-(int)_validatedPageCurlTypeForPageCurlType:(int)pageCurlType inDirection:(int)direction;
// declared property getter: -(id)_wrappedManualPageCurlDirection;
-(void)dealloc;
@end

