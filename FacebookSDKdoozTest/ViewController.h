//
//  ViewController.h
//  FacebookSDKdoozTest
//
//  Created by Stijn Willems on 04/11/11.
//  Copyright (c) 2011 dooZ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBConnect.h"

@interface ViewController : UIViewController <UIApplicationDelegate, FBSessionDelegate>

@property (nonatomic, strong) Facebook *facebook;

@end
