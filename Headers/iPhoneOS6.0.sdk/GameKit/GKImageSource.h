/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCacheDelegate.h"

@class UIImage, NSCache, NSString, GKImageBrush;

@interface GKImageSource : XXUnknownSuperclass <NSCacheDelegate> {
@private
	NSCache* _cache;
	NSString* _name;
	GKImageBrush* _imageBrush;
	UIImage* _defaultImage;
	UIImage* _renderedDefaultImage;
	BOOL _shouldRenderDefaultImageWithBrush;
}
@property(assign, nonatomic) NSCache* cache;	// @synthesize=_cache
@property(retain, nonatomic) UIImage* defaultImage;	// @synthesize=_defaultImage
@property(readonly, assign, nonatomic) GKImageBrush* imageBrush;	// @synthesize=_imageBrush
@property(readonly, assign, nonatomic) NSString* name;	// @synthesize=_name
@property(retain, nonatomic) UIImage* renderedDefaultImage;	// @synthesize=_renderedDefaultImage
@property(assign, nonatomic) BOOL shouldRenderDefaultImageWithBrush;	// @synthesize=_shouldRenderDefaultImageWithBrush
+(id)cacheDirectoryForImageID:(id)imageID;
+(void)clearCache;
+(id)sharedCache;
+(id)syncQueue;
-(id)initWithName:(id)name imageBrush:(id)brush;
// declared property getter: -(id)cache;
-(unsigned)cacheCostForImage:(id)image;
-(id)cachedImageForIdentifier:(id)identifier;
-(id)cachedImageForKey:(id)key;
-(void)clearCachedImageForIdentifier:(id)identifier;
-(void)dealloc;
// declared property getter: -(id)defaultImage;
-(void)didReceiveCacheInvalidation:(id)invalidation;
-(id)fastCachedImageForIdentifier:(id)identifier;
-(id)fastCachedImageForKey:(id)key;
-(id)fastCachedOrDefaultImageForForKey:(id)key;
-(id)fastCachedOrDefaultImageForIdentifier:(id)identifier;
// declared property getter: -(id)imageBrush;
-(id)keyForImageIdentifier:(id)imageIdentifier;
// declared property getter: -(id)name;
-(id)processAndCacheImage:(id)image forIdentifier:(id)identifier;
-(id)processAndCacheImage:(id)image forKey:(id)key;
// declared property getter: -(id)renderedDefaultImage;
-(id)renderedImageWithImage:(id)image;
-(id)renderedImageWithImage:(id)image defaultSize:(CGSize)size returnContext:(id*)context;
-(id)renderedImageWithImage:(id)image returnContext:(id*)context;
-(id)renderedTestImage;
// declared property setter: -(void)setCache:(id)cache;
// declared property setter: -(void)setDefaultImage:(id)image;
// declared property setter: -(void)setRenderedDefaultImage:(id)image;
// declared property setter: -(void)setShouldRenderDefaultImageWithBrush:(BOOL)renderDefaultImageWithBrush;
// declared property getter: -(BOOL)shouldRenderDefaultImageWithBrush;
-(BOOL)shouldUseTestImage;
-(id)subsourceWithBrush:(id)brush;
-(void)validateFileSystemCache;
@end

