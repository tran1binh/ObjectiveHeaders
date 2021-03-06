/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerFailureMap : XXUnknownSuperclass {
@private
	NSMutableArray* _gestureRecognizers;
	char* _failureMap;
	int _unmetFailureRequirementCount;
	int _unmetFailureDependentCount;
}
@property(readonly, assign) BOOL hasUnmetFailureRequirementsOrDependents;
+(void)buildFailureMapForGestureRecognizer:(id)gestureRecognizer;
+(void)buildFailureMapForGestureRecognizers:(id)gestureRecognizers;
-(id)initWithRelatedGestures:(id)relatedGestures;
-(void)_gestureRecognizerFinished:(id)finished withEvent:(id)event;
-(void)_queueRecognizersForResetIfFinished;
-(void)dealloc;
-(id)description;
-(void)gestureRecognizerBecameDirty:(id)dirty;
-(void)gestureRecognizerDeallocated:(id)deallocated;
-(void)gestureRecognizerFinished:(id)finished withEvent:(id)event;
// declared property getter: -(BOOL)hasUnmetFailureRequirementsOrDependents;
-(BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)fail;
-(void)rebuildFailureMap;
-(void)reloadFailureMap;
@end

