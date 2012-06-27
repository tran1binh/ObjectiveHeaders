/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "NSObject.h"


@protocol WLCardGroupViewDelegate <NSObject>
@optional
-(void)groupView:(id)view deleteButtonPressedForCard:(id)card;
-(void)groupView:(id)view flipButtonPressedForCard:(id)card;
-(void)groupViewFrontCardDidFlip:(id)groupViewFrontCard;
-(BOOL)groupViewPassesGrowWhenFlipped:(id)flipped;
-(BOOL)groupViewPassesSuppressedContent:(id)content;
-(id)groupViewReusableCardViewQueue:(id)queue;
-(BOOL)groupViewShouldAllowCardFlip:(id)groupView;
-(BOOL)groupViewShouldShowFullFrontCardInStack:(id)groupView;
-(void)groupViewTapped:(id)tapped;
@end
