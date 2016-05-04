//
//  NSObject+Nice.h
//  WTRequestCenter
//
//  Created by SongWentong on 3/10/16.
//  Copyright © 2016 song. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Nice)
//用于DEBUG时候的输出
+(void)WTLog:(NSString*)format,...;
-(void)WTLog:(NSString*)format,...;

+(void)debugBlock:(dispatch_block_t)block;
-(void)debugBlock:(dispatch_block_t)block;
+(void)releaseBlock:(dispatch_block_t)block;
-(void)releaseBlock:(dispatch_block_t)block;


+(void)safeSyncInMainQueue:(dispatch_block_t)block;
+(void)performBlock:(dispatch_block_t)block afterDelay:(NSTimeInterval)delay;
+(void)performBlock:(dispatch_block_t)block inQueue:(dispatch_queue_t)queue afterDelay:(NSTimeInterval)delay;



void safeSyncInMainQueue( dispatch_block_t block);
-(void)safeSyncInMainQueue:(dispatch_block_t)block;
@end
