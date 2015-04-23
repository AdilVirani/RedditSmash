//
//  DataSingleton.m
//  SimpleReddit
//
//  Created by Adil Virani on 4/23/15.
//  Copyright (c) 2015 Adil Virani. All rights reserved.
//

#import "DataSingleton.h"

static DataSingleton *sharedInstance = nil;

@implementation DataSingleton

+(id)sharedInfo {
    @synchronized (self) {
        if (sharedInstance == nil) {
            sharedInstance = [[[self class] alloc] init];
        }
        return sharedInstance;
    }
}

@end
