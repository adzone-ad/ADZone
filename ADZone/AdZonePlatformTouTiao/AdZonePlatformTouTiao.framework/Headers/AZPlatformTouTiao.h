//
//  AZPlatformTouTiao.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/12/18.
//

#import <Foundation/Foundation.h>

#import <AdZoneAggregate/AdZoneAggregate.h>



NS_ASSUME_NONNULL_BEGIN

@interface AZPlatformTouTiao : AZPlatformBase<AZPlatformAbstract>
+(instancetype)instance;
-(void)setAppId:(NSString *)appId;
@end

NS_ASSUME_NONNULL_END
