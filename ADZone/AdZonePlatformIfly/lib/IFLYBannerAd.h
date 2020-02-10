//
//  IFLYBannerAd.h
//  AD_Test
//
//  Created by cheng ping on 14/10/20.
//  Copyright (c) 2014年 faf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IFLYAdError.h"

@class IFLYBannerAd;

@protocol IFLYBannerAdDelegate <NSObject>
/**
 *  请求横幅广告成功
 */
- (void)bannerAdReceived:(IFLYBannerAd *)banner;
/**
 *  请求横幅广告错误
 *
 *  @param errorCode 错误码，详见接入手册
 */
- (void)bannerAdFailedByErrorCode:(IFLYAdError *)errorCode;
/**
 *  横幅广告关闭回调
 */
- (void)bannerAdClosed;
/**
 *  广告被点击
 */
- (void)bannerAdClicked;

@end

@interface IFLYBannerAd : NSObject

/**
 *  横幅广告代理
 */
@property ( nonatomic, weak ) id<IFLYBannerAdDelegate> bannerAdDelegate;

/**
 *  父视图
 *  需设置为显示广告的UIViewController
 */
@property (nonatomic, weak) UIViewController *currentViewController;

/**
 *  设置横幅广告位置
 *
 *  @param origin 横幅广告坐标点
 *
 *  @return 返回横幅广告对象
 */
- (id) initWithOrigin:(CGPoint)origin;

/**
 *  设置广告请求配置参数
 */
-(void)setReqParamWithValue:(NSObject*)value forKey:(NSString *)key;

/**
 *  设置广告权限配置
 */
-(void)setReqPrivacyWithValue:(BOOL)value forKey:(NSString *)key;

/**
 *  获取横幅view
 *
 *  @return 返回横幅view
 */
- (UIView *) getAdView;

/**
 *  请求横幅广告
 *
 *  @param adUnitId 广告位
 *  @param autoRequest 是否轮播请求广告
 */
- (void) loadAdWithAdUnitId:(NSString *) adUnitId isAutoRequest:(BOOL) autoRequest;

/**
 *  请求横幅广告
 *
 *  @param adUnitId 广告位id
 */
- (void) loadAdWithAdUnitId:(NSString *) adUnitId;

/**
 *  清除广告
 */
- (void) destroy;

@end
