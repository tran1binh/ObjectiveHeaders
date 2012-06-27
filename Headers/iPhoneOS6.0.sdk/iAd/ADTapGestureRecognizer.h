/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface ADTapGestureRecognizer : XXUnknownSuperclass {
@private
	int _finalTrackingID;
	id _touchDownHandler;
	id _touchMovedHandler;
	id _touchUpHandler;
}
@property(assign, nonatomic) int finalTrackingID;	// @synthesize=_finalTrackingID
@property(copy, nonatomic) id touchDownHandler;	// @synthesize=_touchDownHandler
@property(copy, nonatomic) id touchMovedHandler;	// @synthesize=_touchMovedHandler
@property(copy, nonatomic) id touchUpHandler;	// @synthesize=_touchUpHandler
-(void)dealloc;
// declared property getter: -(int)finalTrackingID;
-(void)reset;
// declared property setter: -(void)setFinalTrackingID:(int)anId;
// declared property setter: -(void)setTouchDownHandler:(id)handler;
// declared property setter: -(void)setTouchMovedHandler:(id)handler;
// declared property setter: -(void)setTouchUpHandler:(id)handler;
// declared property getter: -(id)touchDownHandler;
// declared property getter: -(id)touchMovedHandler;
// declared property getter: -(id)touchUpHandler;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end
