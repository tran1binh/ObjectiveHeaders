/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString, NSFileHandle;

__attribute__((visibility("hidden")))
@interface EKLogger : XXUnknownSuperclass {
@private
	NSString* _logPath;
	NSString* _logName;
	NSString* _logDefaultName;
	NSString* _outputDefaultName;
	int _logLevel;
	int _outputLevel;
	BOOL _haveCheckedLogLevel;
	BOOL _haveCheckedOutputLevel;
	int _maxLogFiles;
	dispatch_queue_s* _logQueue;
	dispatch_source_s* _fdWatcher;
	NSFileHandle* _logFH;
	NSDate* _lastStatDate;
}
@property(retain, nonatomic) NSFileHandle* fh;	// @synthesize=_logFH
@property(retain, nonatomic) NSDate* lastStatDate;	// @synthesize=_lastStatDate
@property(assign, nonatomic) int logLevel;
@property(assign, nonatomic) int maxLogFiles;
@property(assign, nonatomic) int outputLevel;
-(id)initWithPrefix:(id)prefix logPath:(id)path logName:(id)name;
-(void)_closeLogFile;
-(id)_logFilePathWithNumber:(int)number;
-(void)_openLogFile;
-(void)_rollLogs;
-(void)_statFileIfNecessaryForRollingCheck;
-(void)dealloc;
// declared property getter: -(id)fh;
// declared property getter: -(id)lastStatDate;
// declared property getter: -(int)logLevel;
-(void)logWithFileName:(const char*)fileName functionName:(const char*)name lineNumber:(int)number level:(int)level format:(id)format arguments:(void*)arguments;
// declared property getter: -(int)maxLogFiles;
// declared property getter: -(int)outputLevel;
// declared property setter: -(void)setFh:(id)fh;
// declared property setter: -(void)setLastStatDate:(id)date;
// declared property setter: -(void)setLogLevel:(int)level;
// declared property setter: -(void)setMaxLogFiles:(int)files;
// declared property setter: -(void)setOutputLevel:(int)level;
@end
