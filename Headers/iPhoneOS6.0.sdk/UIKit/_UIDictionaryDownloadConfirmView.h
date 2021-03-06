/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIButton, UILabel, NSString;

__attribute__((visibility("hidden")))
@interface _UIDictionaryDownloadConfirmView : UIView {
@private
	UILabel* _downloadRequestLabel;
	NSString* _downloadRequestText;
	UIButton* _downloadButton;
}
@property(readonly, assign, nonatomic) UIButton* downloadButton;	// @synthesize=_downloadButton
@property(copy, nonatomic) NSString* downloadRequestText;	// @synthesize=_downloadRequestText
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
// declared property getter: -(id)downloadButton;
// declared property getter: -(id)downloadRequestText;
-(void)layoutSubviews;
// declared property setter: -(void)setDownloadRequestText:(id)text;
@end

