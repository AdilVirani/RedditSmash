//
//  DataSingleton.h
//  SimpleReddit
//
//  Created by Adil Virani on 4/23/15.
//  Copyright (c) 2015 Adil Virani. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSingleton : NSObject

@property (atomic) NSArray *dataArray;
@property (atomic) NSArray *popularSubredditsArray;

+(DataSingleton *)sharedInfo;

@end
