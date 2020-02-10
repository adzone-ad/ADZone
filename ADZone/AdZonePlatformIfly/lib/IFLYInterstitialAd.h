//  IFLYInterstitialAd.h
//
//
//  Created by cheng ping on 14/10/20.
//  Copyright (c) 2014年 iflytek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IFLYAdError.h"
#import <UIKit/UIKit.h>

@protocol IFLYInterstitialAdDelegate <NSObject>
/**
 *  请求插屏广告成功
 */
- (void)interstitialAdReceive;
/**
 *  请求插屏广告错误
 *
 *  @param errorCode 错误码，详见接入手册
 */
- (void)interstitialAdFailedByErrorCode:(IFLYAdError *)errorCode;
/**
 *  插屏广告关闭回调
 */
- (void)interstitialAdClosed;
/**
 *  广告被点击
 */
- (void)interstitialAdClicked;

@end

@interface IFLYInterstitialAd : NSObject

/**
 *  插屏广告代理
 */
@property (nonatomic, weak) id<IFLYInterstitialAdDelegate> interstitialAdDelegate;

/**
 *  获取插屏广告对象
 *
 *  @return 返回IFLYInterstitialAd对象
 */
+ (IFLYInterstitialAd *)sharedInstance;

/**
 *  设置广告请求配置参数
 */
- (void)setReqParamWithValue:(NSObject*)value forKey:(NSString *)key;

/**
 *  设置广告权限配置
 */
- (void)setReqPrivacyWithValue:(BOOL)value forKey:(NSString *)key;

/**
 *  请求插屏广告
 *
 *  @param adUnitId 广告位id
 */
- (void)loadAdWithAdUnitId:(NSString *) adUnitId;

/**
 *  展现插屏广告
 */
- (void)showAd;

@end
