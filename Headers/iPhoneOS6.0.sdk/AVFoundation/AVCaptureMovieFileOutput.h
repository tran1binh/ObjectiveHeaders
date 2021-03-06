/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureFileOutput.h"

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
@private
	AVCaptureMovieFileOutputInternal* _internal;
}
@property(copy, nonatomic) NSArray* metadata;
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;
+(BOOL)consolidateMovieFragmentsInFile:(id)file error:(id*)error;
+(void)initialize;
+(id)recorderCommonMetadataForAVMetadataItemArray:(id)avmetadataItemArray;
+(BOOL)updateMovieMetadataInFile:(id)file withMetadata:(id)metadata error:(id*)error;
-(id)init;
-(void)_applyOverridesToCaptureOptions:(id)captureOptions;
-(long)_avErrorForDidStopRecordingReason:(id)_avErrorFor;
-(void)_handleStartRecordingErrorWithDomain:(id)domain code:(long)code info:(id)info;
-(long)_startRecording:(id)recording;
-(long)_stopRecording;
-(id)connectionMediaTypes;
-(void)dealloc;
-(void)didStopForSession:(id)session error:(id)error;
-(BOOL)getRecorderBoolForKey:(id)key withDefault:(BOOL)aDefault;
-(void)handleEnabledChangedForConnection:(id)connection;
-(void)handleNotification:(id)notification payload:(id)payload;
-(BOOL)isRecording;
-(BOOL)isRecordingPaused;
// declared property getter: -(id)metadata;
// declared property getter: -(XXStruct_pwHToB)movieFragmentInterval;
-(id)outputFileURL;
-(void)pauseRecording;
-(void)resumeRecording;
-(BOOL)sendsLastVideoPreviewFrame;
// declared property setter: -(void)setMetadata:(id)metadata;
// declared property setter: -(void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;
-(void)setSendsLastVideoPreviewFrame:(BOOL)frame;
-(void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;
-(void)stopRecording;
@end

