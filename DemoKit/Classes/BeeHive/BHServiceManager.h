/**
 * Created by BeeHive.
 * Copyright (c) 2016, Alibaba, Inc. All rights reserved.
 *
 * This source code is licensed under the GNU GENERAL PUBLIC LICENSE.
 * For the full copyright and license information,please view the LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@class BHContext;

@interface BHServiceManager : NSObject

@property (nonatomic, assign) BOOL  enableException;

+ (instancetype)sharedManager;

- (void)registerLocalServices;

- (void)registerService:(Protocol *)service implClass:(Class)implClass;

- (Class)getClassService:(Protocol *)service;
- (id)createService:(Protocol *)service;

@end
