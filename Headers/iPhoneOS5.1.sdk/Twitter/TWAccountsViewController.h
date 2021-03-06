/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Twitter.framework/Twitter
 */

#import "Twitter-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexPath, TWTweetComposeViewController;

@interface TWAccountsViewController : XXUnknownSuperclass {
	TWTweetComposeViewController* _tweetSheetViewController;
	NSIndexPath* _lastSelection;
}
@property(assign, nonatomic) TWTweetComposeViewController* tweetSheetViewController;	// @synthesize=_tweetSheetViewController
-(id)initWithStyle:(int)style;
-(CGSize)contentSizeForViewInPopover;
-(void)dealloc;
-(void)deselectLastSelection;
-(void)didReceiveMemoryWarning;
-(void)select:(id)select;
// declared property setter: -(void)setTweetSheetViewController:(id)controller;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
// declared property getter: -(id)tweetSheetViewController;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

