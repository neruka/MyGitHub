//
//  LLReposViewController.h
//  MyGitHub
//
//  Created by Lauren Lee on 4/21/14.
//  Copyright (c) 2014 Lauren Lee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LLMenuProtocol.h"
#import "LLRepoDetailViewController.h"

@interface LLReposViewController : UIViewController

@property (nonatomic, unsafe_unretained) id<LLMenuProtocol> menuDelegate;
@property (strong, nonatomic) LLRepoDetailViewController *detailViewController;

@end
