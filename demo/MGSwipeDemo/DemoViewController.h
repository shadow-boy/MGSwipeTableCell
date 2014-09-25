//
//  DemoViewController.h
//  MGSwipeDemo
//
//  Created by Imanol Fernandez Gorostizag on 09/08/14.
//  Copyright (c) 2014 Imanol Fernandez Gorostizaga. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGSwipeTableCell.h"

@interface DemoViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, MGSwipeTableCellDelegate, UIActionSheetDelegate>

@property (nonatomic, assign) BOOL testingStoryboardCell;
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
