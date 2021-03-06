/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol _UIRemoteWebViewControllerProtocol <NSObject>
-(void)_decidePolicyForEncodedRequest:(id)encodedRequest inMainFrame:(BOOL)mainFrame navigationType:(id)type replyHandler:(id)handler;
-(void)_dispatchDidDismissViewController;
-(void)_dispatchWillPresentViewControllerWithCompletionHandler:(id)_dispatch;
-(void)_setCanGoBack:(BOOL)back canGoForward:(BOOL)forward;
-(void)_setEstimatedProgress:(float)progress;
-(void)_setLoading:(BOOL)loading error:(id)error;
-(void)_setTitle:(id)title;
-(void)_setURLString:(id)string;
@end

