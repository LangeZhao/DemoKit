//
//  ZCMBeehive.h
//  bangjob
//
//  Created by 赵学良 on 2018/5/24.
//  Copyright © 2018年 com.58. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BHContext;


@interface ZCMBeehive : NSObject

/**
 初始化 Vespidae ，在  application:didFinishLaunchingWithOptions:  中 一开始就调用
 
 @param application application
 @param launchOptions launchOptions
 @param moduleConfigName 默认 BeeHive.bundle/BeeHive
 @param serviceConfigName 默认 BeeHive.bundle/BHService
 @param enableException 是否开启内部异常
 @param type 当前工程环境
 */
+ (BHContext *)registerVespidaeWithApplication:(UIApplication *)application
                                   launchOptions:(NSDictionary *)launchOptions
                                moduleConfigName:(NSString *)moduleConfigName
                               serviceConfigName:(NSString *)serviceConfigName
                                enableException:(BOOL)enableException;


/**
 获取 Service 的 Class版本，如果 service 方法都为类方法，则可以用该方法获取
 
 @param service 对应项目的协议名
 @return Class
 */
+ (Class)getClassService:(Protocol *)service;



/**
 获取 Service 的 实例版本，如果 service 方法都为实例方法，则可以用该方法获取
 
 @param service 对应项目的协议名
 @return 实现协议的实体
 */
+ (id)createService:(Protocol *)service;

@end
