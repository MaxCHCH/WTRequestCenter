//
//  CALayer+Nice.h
//  WTRequestCenter
//
//  Created by SongWentong on 3/10/16.
//  Copyright © 2016 song. All rights reserved.
//


@import QuartzCore;
NS_ASSUME_NONNULL_BEGIN
@class CALayer;
@class UIImage;
@interface CALayer (Nice)
- (UIImage *)snapshot;
@end
NS_ASSUME_NONNULL_END