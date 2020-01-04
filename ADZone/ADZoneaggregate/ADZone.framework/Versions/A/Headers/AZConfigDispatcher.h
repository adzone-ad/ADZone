//
//  AZConfigDispatcher.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/15.
//

#import <Foundation/Foundation.h>
#import "AZConfigs.h"
NS_ASSUME_NONNULL_BEGIN

@interface AZConfigDispatcher : NSObject

- (instancetype)initWithZoneId:(NSString*)zoneId;

-(AZPlatformConfig*)dispatchConfig;

-(void)reset;

-(void)idleConfig:(AZPlatformConfig*)config;

@end

NS_ASSUME_NONNULL_END
