//
//  repoClass.h
//  GithubRepos
//
//  Created by Nicholas Fung on 2017-10-23.
//  Copyright © 2017 Nicholas Fung. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RepoClass : NSObject

@property (nonatomic, strong, readonly) NSDictionary *repoDict;
@property (nonatomic, copy, readonly) NSString *name;


- (instancetype)initWithRepoDict:(NSDictionary *)repoDict;

@end
