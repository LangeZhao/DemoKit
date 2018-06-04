#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BeeHive.h"
#import "BHAnnotation.h"
#import "BHAppDelegate.h"
#import "BHCommon.h"
#import "BHConfig.h"
#import "BHContext.h"
#import "BHDefines.h"
#import "BHModuleManager.h"
#import "BHModuleProtocol.h"
#import "BHServiceManager.h"
#import "BHServiceProtocol.h"
#import "BHTimeProfiler.h"
#import "BHWatchDog.h"
#import "ZCMBeehive.h"

FOUNDATION_EXPORT double DemoKitVersionNumber;
FOUNDATION_EXPORT const unsigned char DemoKitVersionString[];

