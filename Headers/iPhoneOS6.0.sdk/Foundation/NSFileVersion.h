/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>

@class NSURL, NSDate, NSString;
@protocol NSCoding;

@interface NSFileVersion : NSObject {
@private
	NSURL* _fileURL;
	id _library;
	NSString* _clientID;
	NSString* _name;
	NSURL* _contentsURL;
	BOOL _isBackup;
	NSString* _localizedName;
	NSString* _localizedComputerName;
	NSDate* _modificationDate;
	BOOL _isResolved;
	BOOL _contentsURLIsAccessed;
	id _reserved1;
	id _reserved2;
	BOOL _discardable;
}
@property(readonly, assign) NSURL* URL;
@property(readonly, assign, getter=_isBackup) BOOL _isBackup;
@property(readonly, assign, getter=isConflict) BOOL conflict;
@property(assign, getter=isDiscardable) BOOL discardable;	// @synthesize=_discardable
@property(readonly, assign) NSString* localizedName;
@property(readonly, assign) NSString* localizedNameOfSavingComputer;
@property(readonly, assign) NSDate* modificationDate;
@property(readonly, assign) id<NSCoding> persistentIdentifier;
@property(assign, getter=isResolved) BOOL resolved;
+(void*)_addConflictObserverForItemAtURL:(id)url statusChangedHandler:(id)handler;
+(id)_addVersionOfItemAtURL:(id)url withContentsOfURL:(id)url2 options:(unsigned)options temporaryStorageIdentifier:(id*)identifier error:(id*)error;
+(id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)necessary;
+(BOOL)_conflictsExistForItemAtURL:(id)url;
+(id)_libraryForURL:(id)url clientID:(id)anId temporaryStorageIdentifier:(id*)identifier;
+(void)_markConflicts:(id)conflicts asHandledForItemAtURL:(id)url;
+(id)_otherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;
+(void)_removeConflictObserver:(void*)observer;
+(BOOL)_removeOtherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier error:(id*)error;
+(void)_removeTemporaryDirectoryAtURL:(id)url;
+(id)_supportedGenerationalStorageClientIDs;
+(id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;
+(id)_temporaryStorageLocationForIdentifier:(id)identifier;
+(id)_versionOfItemAtURL:(id)url forClientID:(id)clientID name:(id)name temporaryStorageIdentifier:(id)identifier evenIfDeleted:(BOOL)deleted;
+(id)_versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier temporaryStorageIdentifier:(id)identifier;
+(id)addVersionOfItemAtURL:(id)url withContentsOfURL:(id)url2 options:(unsigned)options error:(id*)error;
+(id)currentVersionOfItemAtURL:(id)url;
+(id)otherVersionsOfItemAtURL:(id)url;
+(BOOL)removeOtherVersionsOfItemAtURL:(id)url error:(id*)error;
+(id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)url;
+(id)unresolvedConflictVersionsOfItemAtURL:(id)url;
+(BOOL)unresolvedConflictsExistForItemAtURL:(id)url;
+(id)versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier;
+(id)versionsOfItemAtURL:(id)url;
-(id)init;
// declared property getter: -(id)URL;
-(id)_documentInfo;
-(id)_initWithFileURL:(id)fileURL library:(id)library clientID:(id)anId name:(id)name contentsURL:(id)url isBackup:(BOOL)backup revision:(id)revision;
// declared property getter: -(BOOL)_isBackup;
-(void)_overrideModificationDateWithDate:(id)date;
-(BOOL)_preserveConflictVersionLocally;
-(BOOL)_setDocumentInfo:(id)info;
-(void)dealloc;
-(unsigned)hash;
// declared property getter: -(BOOL)isConflict;
// declared property getter: -(BOOL)isDiscardable;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(BOOL)isResolved;
// declared property getter: -(id)localizedName;
// declared property getter: -(id)localizedNameOfSavingComputer;
// declared property getter: -(id)modificationDate;
// declared property getter: -(id)persistentIdentifier;
-(BOOL)removeAndReturnError:(id*)error;
-(id)replaceItemAtURL:(id)url options:(unsigned)options error:(id*)error;
-(id)restoreOverItemAtURL:(id)url error:(id*)error;
// declared property setter: -(void)setDiscardable:(BOOL)discardable;
// declared property setter: -(void)setResolved:(BOOL)resolved;
@end

