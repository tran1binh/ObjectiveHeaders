/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, NSString;

@interface AVCaptureVideoPreviewLayer : XXUnknownSuperclass {
	AVCaptureVideoPreviewLayerInternal* _internal;
}
@property(assign, nonatomic) BOOL automaticallyAdjustsMirroring;
@property(assign, nonatomic, getter=isMirrored) BOOL mirrored;
@property(readonly, assign, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;
@property(assign, nonatomic) int orientation;
@property(readonly, assign, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;
@property(retain, nonatomic) AVCaptureSession* session;
@property(copy) NSString* videoGravity;
+(void)initialize;
+(id)layerWithSession:(id)session;
-(id)init;
-(id)initWithLayer:(id)layer;
-(id)initWithSession:(id)session;
-(id)_applyOverridesToCaptureOptions:(id)captureOptions;
-(id)activeConnections;
-(id)addConnection:(id)connection error:(id*)error;
// declared property getter: -(BOOL)automaticallyAdjustsMirroring;
-(BOOL)canAddConnectionForMediaType:(id)mediaType;
-(void)centerSublayer;
-(id)connectionMediaTypes;
-(id)connections;
-(void)dealloc;
-(void)didStartForSession:(id)session;
-(void)didStopForSession:(id)session error:(id)error;
-(BOOL)isChromaNoiseReductionEnabled;
-(BOOL)isChromaNoiseReductionSupported;
// declared property getter: -(BOOL)isMirrored;
// declared property getter: -(BOOL)isMirroringSupported;
// declared property getter: -(BOOL)isOrientationSupported;
-(BOOL)isPaused;
-(void)layerDidBecomeVisible:(BOOL)layer;
-(void)layoutSublayers;
-(id)notReadyError;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
// declared property getter: -(int)orientation;
-(float)previewRotationDegrees;
-(void)removeConnection:(id)connection;
// declared property getter: -(id)session;
// declared property setter: -(void)setAutomaticallyAdjustsMirroring:(BOOL)mirroring;
-(void)setBounds:(CGRect)bounds;
-(void)setChromaNoiseReductionEnabled:(BOOL)enabled;
-(void)setHidden:(BOOL)hidden;
// declared property setter: -(void)setMirrored:(BOOL)mirrored;
// declared property setter: -(void)setOrientation:(int)orientation;
-(void)setPaused:(BOOL)paused;
// declared property setter: -(void)setSession:(id)session;
// declared property setter: -(void)setVideoGravity:(id)gravity;
-(id)subLayer;
// declared property getter: -(id)videoGravity;
@end
