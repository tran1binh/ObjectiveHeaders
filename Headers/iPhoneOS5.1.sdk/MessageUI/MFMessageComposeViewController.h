/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;
@protocol MFMessageComposeViewControllerDelegate;

@interface MFMessageComposeViewController : XXUnknownSuperclass {
@private
	id<MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
	NSArray* _recipients;
	NSString* _body;
}
@property(copy, nonatomic) NSString* body;	// @synthesize=_body
@property(assign, nonatomic) id<MFMessageComposeViewControllerDelegate> messageComposeDelegate;	// @synthesize=_messageComposeDelegate
@property(copy, nonatomic) NSArray* recipients;	// @synthesize=_recipients
+(BOOL)_canSendText;
+(void)_serviceAvailabilityChanged:(id)changed;
+(void)_setupAccountMonitor;
+(void)_startListeningForAvailabilityNotifications;
+(void)_updateServiceAvailability;
+(BOOL)canSendText;
+(void)initialize;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
// declared property getter: -(id)body;
// declared property getter: -(id)messageComposeDelegate;
// declared property getter: -(id)recipients;
// declared property setter: -(void)setBody:(id)body;
// declared property setter: -(void)setMessageComposeDelegate:(id)delegate;
-(void)setModalPresentationStyle:(int)style;
// declared property setter: -(void)setRecipients:(id)recipients;
-(void)smsComposeControllerCancelled:(id)cancelled;
-(void)smsComposeControllerSendStarted:(id)started;
-(void)viewWillAppear:(BOOL)view;
@end

