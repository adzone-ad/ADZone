//
//  AZBannerLoader.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/20.
//

#import <Foundation/Foundation.h>
#import "AZAdLoader.h"
NS_ASSUME_NONNULL_BEGIN

@class AZBannerLoader;

@protocol AZBannerLoaderDelegate <NSObject>
-(void)onBannerLoadSuccess:(AZBannerLoader*)loader;
-(void)onBannerLoadError:(AZBannerLoader*)loader errorMsg:(NSString*)errorMsg;
-(void)onBannerDisplaySuccess:(AZBannerLoader*)loader;
-(void)onBannerClick:(AZBannerLoader*)loader;
-(void)onBannerClose:(AZBannerLoader*)loader;
@end

typedef void(^AZBannerLoaderCallback)(AZBannerLoader* loader);
typedef void(^AZBannerLoaderErrorCallback)(AZBannerLoader* loader, NSString* error);

@interface AZBannerLoader : AZAdLoaderBase<AZAdLoaderAbstract>
@property (nonatomic, assign) _Nullable id<AZBannerLoaderDelegate>  delegate;
@property (nonatomic, strong) AZBannerLoaderCallback loadSuccessCallback;
@property (nonatomic, strong) AZBannerLoaderErrorCallback loadErrorCallback;
@property (nonatomic, strong) AZBannerLoaderCallback displayCallback;
@property (nonatomic, strong) AZBannerLoaderCallback clickCallback;
@property (nonatomic, strong) AZBannerLoaderCallback closeCallback;
@property (nonatomic, readonly) UIView* bannerView;
@property (nonatomic) AZBannerPositionType positionType;
@property (nonatomic) CGSize customSize;
@end

NS_ASSUME_NONNULL_END
