//
//  ZCMBeehive.m
//  bangjob
//
//  Created by 赵学良 on 2018/5/24.
//  Copyright © 2018年 com.58. All rights reserved.
//

#import "ZCMBeehive.h"
#import "BeeHive.h"
#import "BHTimeProfiler.h"
static NSString *const kDefaultModuleConfigName = @"BeeHive.bundle/BeeHive";
static NSString *const kDefaultServiceConfigName = @"BeeHive.bundle/BHService";

@implementation ZCMBeehive

+ (Class)getClassService:(Protocol *)service {
   return [[BeeHive shareInstance] getClassService:service];
}

+ (id)createService:(Protocol *)service {
   return [[BeeHive shareInstance] createService:service];
}

+ (BHContext *)registerVespidaeWithApplication:(UIApplication *)application
                                   launchOptions:(NSDictionary *)launchOptions
                                moduleConfigName:(NSString *)moduleConfigName
                               serviceConfigName:(NSString *)serviceConfigName
                                 enableException:(BOOL)enableException
{
    moduleConfigName = (moduleConfigName.length > 0) ? moduleConfigName : kDefaultModuleConfigName;
    serviceConfigName = (serviceConfigName.length > 0) ? serviceConfigName : kDefaultServiceConfigName;
    
    BHContext *context = [BHContext shareInstance];
    
    BeeHive *hive = [BeeHive shareInstance];
    hive.enableException = enableException;
    hive.context = context;
    
    [[BHTimeProfiler sharedTimeProfiler] recordEventTime:@"BeeHive::super start launch"];
    return context;
}

@end
