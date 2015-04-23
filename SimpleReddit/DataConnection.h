//
//  DataConnection.h
//  SimpleReddit
//
//  Created by Adil Virani on 4/23/15.
//  Copyright (c) 2015 Adil Virani. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataSingleton.h"

@interface DataConnection : NSObject

-(void)getRedditFrontPage:(NSString *)subreddit success:(void (^)())success failure:(void(^)())failure;
-(void)getPopularSubreddits:(void (^)())success failure:(void(^)())failure;

@end
