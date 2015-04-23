//
//  ViewController.h
//  SimpleReddit
//
//  Created by Adil Virani on 4/23/15.
//  Copyright (c) 2015 Adil Virani. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataConnection.h"
#import "DataSingleton.h"
#import "UIImageView+WebCache.h"
#import "DetailViewController.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property NSArray *redditArray;
@property NSString *redditURL;


@property IBOutlet UITableView *redditTableView;



@end

