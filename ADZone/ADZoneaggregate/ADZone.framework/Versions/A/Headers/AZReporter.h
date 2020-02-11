//
//  AZReporter.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/20.
//

#import <Foundation/Foundation.h>
#import "AZConfigs.h"
NS_ASSUME_NONNULL_BEGIN

@interface AZReporter : NSObject

-(void)reportLoading:(AZPlatformConfig*)config;
-(void)reportLoadSuccess:(AZPlatformConfig*)config;
-(void)reportLoadError:(AZPlatformConfig*)config errorMsg:(NSString*)errorMsg;
-(void)reportDisplaySuccess:(AZPlatformConfig*)config;
-(void)reportDisplayError:(AZPlatformConfig*)config errorMsg:(NSString*)errorMsg;
-(void)reportClick:(AZPlatformConfig*)config;

@end

NS_ASSUME_NONNULL_END
