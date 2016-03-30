//
//  UIViewController+Nice.h
//  WTRequestCenter
//
//  Created by SongWentong on 3/2/16.
//  Copyright © 2016 song. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
//iOS 8可用的alertcontroller
@interface UIViewController (Alert)
/*!
 弹出一个提示内容后在1秒后隐藏
 iOS 8 可用
 */
-(void)showAlertWithMessage:(NSString*)message;


/*!
 弹出一个提示框在若干秒后隐藏.
 iOS 8 可用
 */
-(void)showAlertWithTitle:(nullable NSString*)title message:(nullable NSString*)message duration:(NSTimeInterval)time completion: (nullable void (^)(void))completion;
@end

@interface UIViewController (Nice)
/*!
    如果不需要特殊的设置,不想import的时候可以调用
 */
+(instancetype)instanceWithName:(NSString*)name;

/*!
    打开appstore中的页面
 */
-(id)showAppStoreWithAppID:(NSString*)appId inapp:(BOOL)inApp;
@end


//快速创建来自storyboard的控制器
@interface UIViewController (IBHelper)
/*!
    用于创建来自Main storyboard 下storyboard id和本类的名字一样的的控制器
 */
+(instancetype)instanceFromIB;
+(instancetype)instanceFromStoryBoardName:(NSString*)storyBoardName;
+(instancetype)instanceFromStoryBoard:(UIStoryboard*)sb;
+(instancetype)instanceFromStoryBoard:(UIStoryboard*)sb name:(NSString*)name;
@end
NS_ASSUME_NONNULL_END