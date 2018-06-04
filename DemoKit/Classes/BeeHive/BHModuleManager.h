/**
 * Created by BeeHive.
 * Copyright (c) 2016, Alibaba, Inc. All rights reserved.
 *
 * This source code is licensed under the GNU GENERAL PUBLIC LICENSE.
 * For the full copyright and license information,please view the LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BHModuleLevel)
{
    BHModuleBasic  = 0,
    BHModuleNormal = 1,
    
    
    BHModuleBusinessItemLow = 2,                //业务项目层，默认请用该级别
    BHModuleBusinessItemDefault = 3,
    BHModuleBusinessItemHigh = 4,
    
    BHModuleCommonItemLow = 5,                  //公共项目层，默认请用该级别
    BHModuleCommonItemDefault = 6,
    BHModuleCommonItemHigh = 7,
    
    BHModuleComponentLow = 8,                   //组件层，默认请用该级别
    BHModuleComponentDefault = 9,
    BHModuleComponentHigh = 10,                 //组件层 - 高级别，比如网络库的注册等
    
    BHmoduleSystermLow = 11,                    //系统级别，默认请用该级别
    BHmoduleSystermDefault = 12,
    BHmoduleSystermHigh = 13,
    
    BHModuleMaximum = 14                        //max级，预留
};

typedef NS_ENUM(NSInteger, BHModuleEventType)
{
    BHMSetupEvent = 0,
    BHMInitEvent,
    BHMInitAfterCreatedMainScreenEvent,
    BHMIndexPageLaunchedEvent,          //首页 viewDidAppear 之后，该方法为异步调用
    BHMTearDownEvent,
    BHMSplashEvent,
    BHMQuickActionEvent,
    BHMWillResignActiveEvent,
    BHMDidEnterBackgroundEvent,
    BHMWillEnterForegroundEvent,
    BHMDidBecomeActiveEvent,
    BHMWillTerminateEvent,
    BHMUnmountEvent,
    BHMOpenURLEvent,
    BHMDidReceiveMemoryWarningEvent,
    BHMDidFailToRegisterForRemoteNotificationsEvent,
    BHMDidRegisterUserNotificationSettings,
    BHMDidRegisterForRemoteNotificationsEvent,
    BHMDidReceiveRemoteNotificationEvent,
    BHMDidReceiveLocalNotificationEvent,
    BHMWillContinueUserActivityEvent,
    BHMContinueUserActivityEvent,
    BHMDidFailToContinueUserActivityEvent,
    BHMDidUpdateUserActivityEvent,
    BHMHandleWatchKitExtensionRequest,
    BHMDidCustomEvent = 1000
    
};


@interface BHModuleManager : NSObject

+ (instancetype)sharedManager;

// If you do not comply with set Level protocol, the default Normal
- (void)registerDynamicModule:(Class)moduleClass;

- (void)loadLocalModules;

- (void)registedAllModules;

- (void)triggerEvent:(BHModuleEventType)eventType;

@end

