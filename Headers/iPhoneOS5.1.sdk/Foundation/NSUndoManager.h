/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSUndoManager.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface NSUndoManager : XXUnknownSuperclass {
@private
	id _undoStack;
	id _redoStack;
	NSArray* _runLoopModes;
	unsigned long long _NSUndoManagerPrivate1;
	id _target;
	id _proxy;
	void* _NSUndoManagerPrivate2;
	void* _NSUndoManagerPrivate3;
}
-(id)init;
-(void)_cancelAutomaticTopLevelGroupEnding;
-(void)_delayAutomaticTermination:(double)termination;
-(BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)empty;
-(void)_forwardTargetInvocation:(id)invocation;
-(id)_methodSignatureForTargetSelector:(SEL)targetSelector;
-(void)_postCheckpointNotification;
-(void)_prepareEventGrouping;
-(void)_registerUndoObject:(id)object;
-(void)_scheduleAutomaticTopLevelGroupEnding;
-(void)_setGroupIdentifier:(id)identifier;
-(void)beginUndoGrouping;
-(BOOL)canRedo;
-(BOOL)canUndo;
-(void)dealloc;
-(void)disableUndoRegistration;
-(void)enableUndoRegistration;
-(void)endUndoGrouping;
-(void)finalize;
-(int)groupingLevel;
-(BOOL)groupsByEvent;
-(BOOL)isRedoing;
-(BOOL)isUndoRegistrationEnabled;
-(BOOL)isUndoing;
-(unsigned)levelsOfUndo;
-(id)prepareWithInvocationTarget:(id)invocationTarget;
-(void)redo;
-(BOOL)redoActionIsDiscardable;
-(id)redoActionName;
-(id)redoMenuItemTitle;
-(id)redoMenuTitleForUndoActionName:(id)undoActionName;
-(void)registerUndoWithTarget:(id)target selector:(SEL)selector object:(id)object;
-(void)removeAllActions;
-(void)removeAllActionsWithTarget:(id)target;
-(id)runLoopModes;
-(void)setActionIsDiscardable:(BOOL)discardable;
-(void)setActionName:(id)name;
-(void)setGroupsByEvent:(BOOL)event;
-(void)setLevelsOfUndo:(unsigned)undo;
-(void)setRunLoopModes:(id)modes;
-(void)undo;
-(BOOL)undoActionIsDiscardable;
-(id)undoActionName;
-(id)undoMenuItemTitle;
-(id)undoMenuTitleForUndoActionName:(id)undoActionName;
-(void)undoNestedGroup;
@end

@interface NSUndoManager (NSPrivate)
+(void)_endTopLevelGroupings;
+(void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)iterations;
-(void)_commitUndoGrouping;
-(void)_processEndOfEventNotification:(id)eventNotification;
-(void)_rollbackUndoGrouping;
-(BOOL)_shouldCoalesceTypingForText:(id)text :(id)arg2;
-(id)_undoStack;
@end
