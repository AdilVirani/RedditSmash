//
//  DetailViewController.h
//  SimpleReddit
//
//  Created by Adil Virani on 4/23/15.
//  Copyright (c) 2015 Adil Virani. All rights reserved.
//

#import "ViewController.h"

@interface DetailViewController : UIViewController <UIWebViewDelegate>

@property IBOutlet UIWebView *webView;
@property NSString *urlString;


@end
