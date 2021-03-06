/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKMultilineCellContentView.h"

@class GKGame, GKGameRecord;

@interface GKGameCellContents : GKMultilineCellContentView {
@private
	GKGameRecord* _details;
	GKGameRecord* _localDetails;
	GKGame* _game;
}
@property(retain, nonatomic) GKGameRecord* details;	// @synthesize=_details
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(retain, nonatomic) GKGameRecord* localDetails;	// @synthesize=_localDetails
+(float)defaultRowHeight;
+(id)gameCellContentsWithTheme:(id)theme;
+(int)lineCount;
-(id)initWithTheme:(id)theme;
-(id)achievementsStringWithGameRecord:(id)gameRecord;
-(void)configureLines;
-(void)dealloc;
// declared property getter: -(id)details;
// declared property getter: -(id)game;
-(void)layoutSubviews;
-(id)leaderboardStringWithGameRecord:(id)gameRecord localGameRecord:(id)record;
// declared property getter: -(id)localDetails;
-(void)prepareForReuse;
-(void)refreshExpensiveContent;
// declared property setter: -(void)setDetails:(id)details;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setLocalDetails:(id)details;
-(id)textForLine:(int)line;
-(void)updateIconFromCache;
-(void)updateLines;
@end

