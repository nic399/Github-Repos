//
//  repoClass.m
//  GithubRepos
//
//  Created by Nicholas Fung on 2017-10-23.
//  Copyright © 2017 Nicholas Fung. All rights reserved.
//

#import "RepoClass.h"

@implementation RepoClass

- (instancetype)initWithRepoDict:(NSDictionary *)repoDict {
    self = [super init];
    if (self) {
        _repoDict = repoDict;
        _name = _repoDict[@"name"];
    }
    return self;
}

@end
