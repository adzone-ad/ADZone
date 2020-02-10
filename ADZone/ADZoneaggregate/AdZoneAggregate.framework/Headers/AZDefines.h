//
//  AZDefines.h
//  Pods
//
//  Created by 张国志 on 2019/11/14.
//

#ifndef AZDefines_h
#define AZDefines_h

#define AZ_AGG_VERSION @"2.0"

#define AZ_IS_IPAD [[UIDevice currentDevice].model isEqualToString:@"iPad"]
#define AZ_IPAD_FACTOR      (AZ_IS_IPAD ? 1 : 0.5)


typedef enum : NSUInteger {
    AZZoneTypeBanner = 1,
    AZZoneTypeInterstitial = 2,
    AZZoneTypeVideo = 3,
    AZZoneTypeSplash = 4,
    AZZoneTypeNative = 5
} AZZoneType;

typedef enum : NSUInteger {
    AZBannerPositionTypeUndefined,
    AZBannerPositionTypeMiddleBottom,
} AZBannerPositionType;

@protocol AZLoggerProtocol <NSObject>
@required
- (void)logMsg:(NSString *)msg;
- (void)logError:(NSString *)error;
- (void)logWarning:(NSString *)warning;

@end

typedef enum : NSUInteger {
    AZAdLoaderStateNone,
    AZAdLoaderStateLoading,
    AZAdLoaderStateCached,
    AZAdLoaderStateAttempToDisplay,
    AZAdLoaderStateDisplaying,
    AZAdLoaderStateDisplayComplete
} AZAdLoaderState;

#endif /* AZDefines_h */
