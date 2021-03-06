/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKTableSection.h"


@interface GKShareChallengeSection : GKTableSection {
}
-(int)footerRowCountInTableView:(id)tableView;
-(int)headerRowCountInTableView:(id)tableView;
-(int)sectionItemCountInTableView:(id)tableView;
-(id)sectionReuseIdentifierInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForContentRow:(int)contentRow;
-(float)tableView:(id)view heightForFooterRow:(int)footerRow;
-(float)tableView:(id)view heightForHeaderRow:(int)headerRow;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view sectionHeaderCellForIndexPath:(id)indexPath;
@end

