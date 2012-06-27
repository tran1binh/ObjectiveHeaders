/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UISearchDisplayDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "AddressBookUI-Structs.h"
#import "UITableViewDelegate.h"
#import "ABPickerViewController.h"

@class UISearchDisplayController, UILocalizedIndexedCollation, NSIndexPath, NSString, UITableView, NSArray, NSDictionary, UISearchBar;

@interface ABCountryPickerViewController : ABPickerViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate> {
@private
	UITableView* _tableView;
	UILocalizedIndexedCollation* _collation;
	NSArray* _sections;
	NSArray* _sectionIndexTitles;
	NSDictionary* _indexToSections;
	UISearchBar* _searchBar;
	UISearchDisplayController* _searchController;
	NSArray* _filteredCountries;
	NSString* _selectedCountryCode;
	NSIndexPath* _selectedIndexPath;
	NSArray* _allCountries;
}
@property(retain, nonatomic) NSString* selectedCountryCode;
-(id)init;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(void)_setSelectedCountryCode:(id)code atPath:(id)path;
-(float)ab_heightToFitForViewInPopoverView;
-(void)configureSections;
-(void)dealloc;
-(void)loadView;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)reloadCountryCodes;
-(void)scrollToSearchFieldAnimated:(BOOL)searchFieldAnimated;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(id)sectionIndexTitlesForTableView:(id)tableView;
// declared property getter: -(id)selectedCountryCode;
// declared property setter: -(void)setSelectedCountryCode:(id)code;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)viewWillAppear:(BOOL)view;
@end
