//
//  IFLYNativeAd.h
//  AD_Demo
//
//  Created by chengping on 15/12/18.
//  Copyright © 2015年 faf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IFLYAdError.h"
#import "IFlyAdResponseData.h"
#import "IFlyAdData.h"

@class IFLYNativeAd;

@protocol IFLYNativeAdDelegate <NSObject>

/**
 *  原生广告加载广告数据成功回调
 *
 *  @param nativeAdData IFlyAdData对象
 */
- (void)onAdReceived:(IFlyAdData *)nativeAdData;

/**
 *  原生广告加载广告数据失败回调
 *
 *  @param errorCode 错误码，详见接入手册
 */
- (void)onAdLoadFailed:(IFLYAdError *)error;

@end


@interface IFLYNativeAd : NSObject

/**
 *  委托对象
 */
@property (nonatomic, assign) id<IFLYNativeAdDelegate> delegate;

/**
 *  父视图
 *  需设置为显示广告的UIViewController
 */
@property (nonatomic, weak) UIViewController *currentViewController;

/**
 *  构造方法
 *  详解：adunitId是广告位id
 */
- (instancetype)initWithAdUnitId:(NSString *)adunitId;

/**
 *  设置广告请求权限配置
 */
- (void)setReqPrivacyWithValue:(BOOL)value forKey:(NSString *)key;

/**
 *  设置广告请求配置参数
 */
- (void)setReqParamWithValue:(NSObject*)value forKey:(NSString *)key;

/**
 *  广告发起请求方法
 *  详解：[必选]发起拉取广告请求,在获得广告数据后回调delegate
 */
- (void)loadAd;

/**
 *  广告数据渲染完毕即将展示时调用方法
 *  详解：[必选]广告数据渲染完毕，即将展示时需调用本方法。
 *      @param view         渲染出的广告结果页面
 */
- (BOOL)attachAd:(UIView *)view;

/**
 *  开屏广告数据渲染完毕即将展示时调用方法
 *  详解：[必选]广告数据渲染完毕，即将展示时需调用本方法。
 *      @param view         渲染出的广告结果页面
 */
- (BOOL)attachWindowAd:(UIView *)view;

/**
 *  广告点击调用方法
 *  详解：当用户点击广告时，开发者需调用本方法，系统会弹出内嵌浏览器、或内置AppStore、
 *      或打开系统Safari，来展现广告目标页面
 *      @param view         渲染出的广告结果页面
 */
- (BOOL)clickAd:(UIView *)view;

/**
 * 广告退出落地页的回调
 */
@property (nonatomic, copy) void(^dismissBlock)(void);


/**
 * deeplink跳转离开app回调
 */
@property (nonatomic, copy) void(^didLeaveApp)(void);

@end
