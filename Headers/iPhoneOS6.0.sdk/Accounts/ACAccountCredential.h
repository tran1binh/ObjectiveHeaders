/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString, NSMutableDictionary;

@interface ACAccountCredential : XXUnknownSuperclass {
@private
	NSMutableDictionary* _credentialItems;
	NSString* _credentialType;
}
@property(copy, nonatomic) NSString* appleidFacetimeToken;
@property(copy, nonatomic) NSString* appleidGameCenterToken;
@property(copy, nonatomic) NSString* appleidMadridToken;
@property(copy, nonatomic) NSString* appleidiCloudToken;
@property(copy, nonatomic) NSString* credentialType;
@property(retain, nonatomic) NSDate* expiryDate;
@property(copy, nonatomic) NSString* oauthRefreshToken;
@property(copy, nonatomic) NSString* oauthToken;
@property(copy, nonatomic) NSString* oauthTokenSecret;
@property(copy, nonatomic) NSString* password;
+(id)credentialWithOAuthToken:(id)oauthToken tokenSecret:(id)secret;
+(id)credentialWithPassword:(id)password;
+(id)keysForType:(id)type;
+(id)nonPersistentCredentialItemsForType:(id)type;
-(id)init;
-(id)initWithAppleIDiCloudToken:(id)appleIDiCloudToken facetimeToken:(id)token madridToken:(id)token3 gamecenterToken:(id)token4;
-(id)initWithCoder:(id)coder;
-(id)initWithOAuth2Token:(id)oauth2Token refreshToken:(id)token expiryDate:(id)date;
-(id)initWithOAuthToken:(id)oauthToken tokenSecret:(id)secret;
-(id)initWithPassword:(id)password;
-(void).cxx_destruct;
// declared property getter: -(id)appleidFacetimeToken;
// declared property getter: -(id)appleidGameCenterToken;
// declared property getter: -(id)appleidMadridToken;
// declared property getter: -(id)appleidiCloudToken;
-(id)credentialItemForKey:(id)key;
-(id)credentialItems;
// declared property getter: -(id)credentialType;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)expiryDate;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)keysForCredentialItems;
// declared property getter: -(id)oauthRefreshToken;
// declared property getter: -(id)oauthToken;
// declared property getter: -(id)oauthTokenSecret;
// declared property getter: -(id)password;
// declared property setter: -(void)setAppleidFacetimeToken:(id)token;
// declared property setter: -(void)setAppleidGameCenterToken:(id)token;
// declared property setter: -(void)setAppleidMadridToken:(id)token;
// declared property setter: -(void)setAppleidiCloudToken:(id)token;
-(void)setCredentialItem:(id)item forKey:(id)key;
// declared property setter: -(void)setCredentialType:(id)type;
// declared property setter: -(void)setExpiryDate:(id)date;
// declared property setter: -(void)setOauthRefreshToken:(id)token;
// declared property setter: -(void)setOauthToken:(id)token;
// declared property setter: -(void)setOauthTokenSecret:(id)secret;
// declared property setter: -(void)setPassword:(id)password;
@end

