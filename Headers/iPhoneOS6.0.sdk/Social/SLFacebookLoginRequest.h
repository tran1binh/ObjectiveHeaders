/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "SLFacebookRequest.h"

@class ACAccount;

@interface SLFacebookLoginRequest : SLFacebookRequest {
	ACAccount* _account;
}
-(id)initWithAccount:(id)account;
-(void).cxx_destruct;
-(id)_tokenSecret;
-(void)preflightRequest;
@end
