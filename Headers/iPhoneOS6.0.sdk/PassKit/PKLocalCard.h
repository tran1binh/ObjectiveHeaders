/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "PassKit-Structs.h"
#import "PKPass.h"
#import "NSCopying.h"
#import "WLLocalCardFileAccessor.h"

@class NSString, NSURL;

@interface PKLocalCard : PKPass <WLLocalCardFileAccessor, NSCopying> {
@private
	NSURL* _fileURL;
	id<WLLocalCardFileAccessor> _fileAccessor;
	NSString* _localizedDescription;
	BOOL _removeOnDiskRepresentationOnDealloc;
}
@property(assign, nonatomic) id<WLLocalCardFileAccessor> fileAccessor;	// @synthesize=_fileAccessor
@property(retain, nonatomic) NSURL* fileURL;	// @synthesize=_fileURL
@property(assign, nonatomic) BOOL removeOnDiskRepresentationOnDealloc;	// @synthesize=_removeOnDiskRepresentationOnDealloc
+(BOOL)supportsSecureCoding;
-(id)initWithBundleArchiveData:(id)bundleArchiveData;
-(id)initWithBundleArchiveURL:(id)bundleArchiveURL;
-(id)initWithCoder:(id)coder;
-(id)initWithData:(id)data error:(id*)error;
-(id)initWithFileURL:(id)fileURL;
-(id)initWithFileURL:(id)fileURL fileAccessor:(id)accessor;
-(id)initWithFileURL:(id)fileURL fileAccessor:(id)accessor error:(id*)error;
-(id)_locationsFromCardDictionary:(id)cardDictionary;
-(void)_updateLocationsInCardDictionary:(id)cardDictionary;
-(BOOL)copyCardAtURL:(id)url toURL:(id)url2 error:(id*)error;
-(id)copyWithFileAccessor:(id)fileAccessor;
-(id)copyWithFileURL:(id)fileURL fileAccessor:(id)accessor;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)diff:(id)diff;
-(id)displayProfileWithCardDictionary:(id)cardDictionary cardURL:(id)url;
-(void)encodeWithCoder:(id)coder;
-(void)fetchContentWithCompletion:(id)completion;
-(void)fetchImageSet:(int)set withCompletion:(id)completion;
// declared property getter: -(id)fileAccessor;
// declared property getter: -(id)fileURL;
-(BOOL)getCardAtURL:(id)url resourceValue:(id*)value forKey:(id)key error:(id*)error;
-(id)loadContentFromCardURL:(id)cardURL;
-(id)loadDictionaryFromCardURL:(id)cardURL;
-(id)loadImageSet:(int)set fromCardURL:(id)cardURL displayProfile:(id)profile;
-(id)localizedDescription;
-(id)localizedDescriptionForDiff:(id)diff;
-(id)localizedString:(id)string forCardAtURL:(id)url;
-(id)manifestHashAtURL:(id)url;
-(id)modificationDate;
-(BOOL)moveCardAtURL:(id)url toURL:(id)url2 error:(id*)error;
-(BOOL)moveToFileURL:(id)fileURL;
-(BOOL)moveToTemporaryURL;
-(BOOL)removeCardAtURL:(id)url error:(id*)error;
// declared property getter: -(BOOL)removeOnDiskRepresentationOnDealloc;
-(id)serializedFileWrapper;
-(id)serializedFileWrapperAtURL:(id)url;
// declared property setter: -(void)setFileAccessor:(id)accessor;
// declared property setter: -(void)setFileURL:(id)url;
-(void)setLocalizedDescription:(id)description;
// declared property setter: -(void)setRemoveOnDiskRepresentationOnDealloc:(BOOL)dealloc;
-(id)validateCardURL:(id)url;
@end

