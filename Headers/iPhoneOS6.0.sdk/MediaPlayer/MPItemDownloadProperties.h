/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import "SSDownloadManagerObserver.h"

@class NSString, NSURL, NSMutableSet, NSArray;

@interface MPItemDownloadProperties : XXUnknownSuperclass <SSDownloadManagerObserver, NSCopying> {
@private
	long long _assetFileSize;
	NSURL* _destinationURL;
	BOOL _downloadExists;
	NSString* _downloadIdentifier;
	long long _downloadSizeLimit;
	unsigned long long _downloadToken;
	NSMutableSet* _downloadTokenCompletionHandlers;
	NSArray* _sinfs;
	NSURL* _sourceURL;
}
@property(readonly, assign, nonatomic) long long assetFileSize;	// @synthesize=_assetFileSize
@property(readonly, assign, nonatomic) NSURL* destinationURL;	// @synthesize=_destinationURL
@property(readonly, assign, nonatomic) BOOL downloadExists;	// @synthesize=_downloadExists
@property(readonly, assign, nonatomic) NSString* downloadIdentifier;	// @synthesize=_downloadIdentifier
@property(readonly, assign, nonatomic) long long downloadSizeLimit;	// @synthesize=_downloadSizeLimit
@property(assign, nonatomic) unsigned long long downloadToken;	// @synthesize=_downloadToken
@property(readonly, assign, nonatomic) NSURL* sourceURL;	// @synthesize=_sourceURL
-(id)initWithDownload:(id)download;
-(id)initWithDownloadIdentifier:(id)downloadIdentifier;
-(id)initWithMediaItem:(id)mediaItem;
-(void)_reloadNetworkConstraints;
-(void)acquireDownloadTokenWithCompletionHandler:(id)completionHandler;
// declared property getter: -(long long)assetFileSize;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)destinationURL;
// declared property getter: -(BOOL)downloadExists;
// declared property getter: -(id)downloadIdentifier;
-(void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;
// declared property getter: -(long long)downloadSizeLimit;
// declared property getter: -(unsigned long long)downloadToken;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)newAVAssetOptionsWithDownloadStyle:(int)downloadStyle;
// declared property setter: -(void)setDownloadToken:(unsigned long long)token;
// declared property getter: -(id)sourceURL;
@end

