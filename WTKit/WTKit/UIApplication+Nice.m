//
//  UIApplication+Nice.m
//  WTRequestCenter
//
//  Created by SongWentong on 3/22/16.
//  Copyright © 2016 song. All rights reserved.
//

#import "UIApplication+Nice.h"

@implementation UIApplication (Nice)
+(UIViewController*)rootViewController
{
    return [self sharedApplication].delegate.window.rootViewController;
}
@end
