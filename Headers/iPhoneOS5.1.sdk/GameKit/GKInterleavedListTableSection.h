/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableSection.h"


@interface GKInterleavedListTableSection : GKTableSection {
}
-(int)numberOfContentColumnsInTableView:(id)tableView;
-(int)sectionContentRowCountInTableView:(id)tableView;
-(int)sectionContentRowCountInTableView:(id)tableView column:(int)column;
-(int)sectionFooterRowCountInTableView:(id)tableView;
-(int)sectionFooterRowCountInTableView:(id)tableView column:(int)column;
-(int)sectionHeaderRowCountInTableView:(id)tableView;
-(int)sectionHeaderRowCountInTableView:(id)tableView column:(int)column;
-(int)sectionItemCountInTableView:(id)tableView;
-(int)sectionItemCountInTableView:(id)tableView column:(int)column;
-(id)tableView:(id)view itemAtIndex:(int)index column:(int)column;
-(id)tableView:(id)view objectForIndexPath:(id)indexPath;
-(int)tallestColumnInTableView:(id)tableView;
@end

