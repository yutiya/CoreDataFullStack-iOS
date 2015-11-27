//
//  CDMTableViewFetchedResultsController.h
//  Hot
//
//  Created by Gabriel Massana on 22/11/15.
//  Copyright © 2015 Gabriel Massana. All rights reserved.
//

#import <CoreData/CoreData.h>

#import <UIKit/UIKit.h>

@protocol CDMTableViewFetchedResultsControllerDelegate <NSObject>

/**
 Informational call for when the FRC updates
 */
- (void)didUpdateContent;

- (void)willUpdateCellAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface CDMTableViewFetchedResultsController : NSFetchedResultsController

/**
 Delegate for the fetch result controller updates.
 */
@property (atomic, weak) id<CDMTableViewFetchedResultsControllerDelegate> frcDelegate;

/**
 Table view for the fetch result controller to update.
 */
@property (atomic, weak) UITableView *tableView;

/**
 Specifies if the fetch result controller should update it's sections.
 */
@property (nonatomic , assign) BOOL shouldUpdateSections;

/**
 Animation effect on a insert row action.
 */
@property (nonatomic, assign) UITableViewRowAnimation insertRowAnimation;

/**
 Animation effect on a delete row action.
 */
@property (nonatomic, assign) UITableViewRowAnimation deleteRowAnimation;

/**
 Animation effect on a update row action.
 */
@property (nonatomic, assign) UITableViewRowAnimation updateRowAnimation;

/**
 Animation effect on a insert section action.
 */
@property (nonatomic, assign) UITableViewRowAnimation insertSectionAnimation;

/**
 Animation effect on a delete section action.
 */
@property (nonatomic, assign) UITableViewRowAnimation deleteSectionAnimation;

@end
