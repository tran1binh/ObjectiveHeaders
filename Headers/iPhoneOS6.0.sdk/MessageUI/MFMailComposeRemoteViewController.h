/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFMailComposeRemoteHost.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol MFMailComposeRemoteViewControllerDelegate;

@interface MFMailComposeRemoteViewController : XXUnknownSuperclass <MFMailComposeRemoteHost> {
@private
	id<MFMailComposeRemoteViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<MFMailComposeRemoteViewControllerDelegate> delegate;	// @synthesize=_delegate
+(id)requestViewControllerWithConnectionHandler:(id)connectionHandler;
-(void)bodyFinishedDrawing;
-(void)compositionFinishedWithResult:(id)result error:(id)error;
// declared property getter: -(id)delegate;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)viewServiceDidTerminateWithError:(id)viewService;
@end
