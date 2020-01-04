//
//  AZAggregate+Internal.h
//  Pods
//
//  Created by 张国志 on 2019/11/14.
//

#ifndef AZAggregate_Internal_h
#define AZAggregate_Internal_h

#import "AZConfigs.h"
#import "AZAggregate.h"

@class AZPlatformConfig;

@interface AZAggregate (Internal)
-(AZGlobalConfig*)internalGlobalConfig;
- (NSMutableDictionary<NSNumber *, id<AZPlatformAbstract>> *)internalPlatforms;
@end

#endif /* AZAggregate_Internal_h */
