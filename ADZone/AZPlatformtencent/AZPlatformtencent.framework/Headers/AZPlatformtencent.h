//
//  AZPlatformTencent.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/29.
//

#import <Foundation/Foundation.h>

#import "AZPlatform.h"

NS_ASSUME_NONNULL_BEGIN

@interface AZPlatformTencent : AZPlatformBase<AZPlatformAbstract>
+(instancetype)instance;
@end

@interface AZPlatformTencentForBannerAutoRefresh : AZPlatformTencent
@end


NS_ASSUME_NONNULL_END
