//
//  AppDelegate.h
//  ToyResolution
//
//  Created by Andy Woo on 26/7/13.
//  Copyright (c) 2013 WOOKIEWEB.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StoreViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navController;
@property (strong, nonatomic) StoreViewController *storeViewController;

@end
