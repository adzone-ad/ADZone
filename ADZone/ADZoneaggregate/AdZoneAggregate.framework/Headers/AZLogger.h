//
//  AZLogger.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/14.
//

#import <Foundation/Foundation.h>
#include "AZDefines.h"

NS_ASSUME_NONNULL_BEGIN

@interface AZLogger : NSObject
+(void)initDefaultLogger;
+(void)setLogger:(id<AZLoggerProtocol>)logger;
+(void)logMsg:(NSString*)msg;
+(void)logError:(NSString*)msg;
+(void)logWarning:(NSString*)msg;
@end

NS_ASSUME_NONNULL_END
