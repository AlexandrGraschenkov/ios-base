//
//  APIManager.h
//  ios-base
//
//  Created by Danis Ziganshin on 14.02.14.
//  Copyright (c) 2014 FlatStack. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APIManager : NSObject

+ (APIManager*)sharedManager;

- (void)getCurrentDateWithCompleteBlock:(ObjectCallback)block;

@end
