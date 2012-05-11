//
//  NSData+RACSupport.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 5/11/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RACSubscribable;
@class RACScheduler;


@interface NSData (RACSupport)

// Read the data at the URL using -[NSData initWithContentsOfURL:options:error:].
// Sends the data or the error.
+ (RACSubscribable *)rac_readContentsOfURL:(NSURL *)URL options:(NSDataReadingOptions)options scheduler:(RACScheduler *)scheduler;

@end