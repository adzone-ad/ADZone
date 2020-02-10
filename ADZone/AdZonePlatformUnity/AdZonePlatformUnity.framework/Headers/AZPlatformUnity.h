//
//  AZPlatformUnity.h
//  AdZonePlatformUnity
//
//  Created by Arrow.L on 2020/2/4.
//  Copyright © 2020 Aaron_wk. All rights reserved.
//

#import <AdZoneAggregate/AdZoneAggregate.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UnityAdsDelegate;

@interface AZPlatformUnity : AZPlatformBase<AZPlatformAbstract>

+ (instancetype)instance;

- (void)setAppId:(NSString *)appId delegate:(id<UnityAdsDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
