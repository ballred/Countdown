//
//  CountdownAppDelegate.h
//  Countdown
//
//  Created by Bill Allred on 1/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CountdownViewController;

@interface CountdownAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) CountdownViewController *viewController;

@end
