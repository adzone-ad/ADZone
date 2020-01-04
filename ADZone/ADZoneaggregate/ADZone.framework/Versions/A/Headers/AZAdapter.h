//
//  AZAdapter.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/14.
//

#import <Foundation/Foundation.h>
#import "AZConfigs.h"
#import "AZNativeAdMaterial.h"

NS_ASSUME_NONNULL_BEGIN


@protocol AZAdapterAbstract;
@protocol AZVideoAdapterAbstract;
@protocol AZBannerAdapterAbstract;
@protocol AZInterstitialAdapterAbstract;
@protocol AZNativeAdapterAbstract;
@protocol AZSplashAdapterAbtract;

@protocol AZAdapterDelegate <NSObject>
@required
-(void)onLoadSuccess:(id<AZAdapterAbstract>)adapter;
-(void)onLoadError:(_Nullable id<AZAdapterAbstract>)adapter errorMsg:(NSString*)errorMsg;
-(void)onClick:(id<AZAdapterAbstract>)adapter;
-(void)onDisplaySuccess:(id<AZAdapterAbstract>)adapter;
-(void)onClose:(id<AZAdapterAbstract>)adapter;
-(UIViewController*)containerViewController;
@end



@protocol AZInterstitialAdapterDelegate <AZAdapterDelegate>
-(void)onDisplayError:(id<AZInterstitialAdapterAbstract>)adapter errorMsg:(NSString*)errorMsg;
@end

@protocol AZVideoAdapterDelegate <AZAdapterDelegate>
-(void)onDisplayError:(id<AZVideoAdapterAbstract>)adapter errorMsg:(NSString*)errorMsg;
-(void)onComplete:(id<AZVideoAdapterAbstract>)adapter;
-(void)onSkip:(id<AZVideoAdapterAbstract>)adapter;
@end

@protocol AZBannerAdapterDelegate <AZAdapterDelegate>
-(void)onAutoRefresh:(id<AZBannerAdapterAbstract>)adapter;
-(CGSize)customSize;
@end

@protocol AZNativeAdapterDelegate <AZAdapterDelegate>
-(void)onLoadSuccess:(id<AZNativeAdapterAbstract>)adapter rawMaterial:(id)rawMaterial;
-(void)onDisplaySuccess:(id<AZNativeAdapterAbstract>)adapter rawMaterial:(id)rawMaterial;
-(void)onDisplayError:(id<AZNativeAdapterAbstract>)adapter rawMaterial:(id)rawMaterial errorMsg:(NSString*)errorMsg;
-(void)onClick:(id<AZAdapterAbstract>)adapter rawMaterial:(id)rawMaterial;
-(void)onClose:(id<AZAdapterAbstract>)adapter rawMaterial:(id)rawMaterial;
@end

@protocol AZSplashAdapterDelegate <AZAdapterDelegate>
-(void)onSkip:(id<AZSplashAdapterAbtract>)adapter;
-(UIImage*)placeholderImage;
-(UIWindow*)keyWindow;
-(UIView*)footerView;
-(NSTimeInterval)timeout;
@end


@protocol AZAdapterAbstract <NSObject>
@required
@property(nonatomic, weak, readonly) id<AZAdapterDelegate> delegate;
@property(nonatomic, strong, readonly) AZPlatformConfig* config;
-(void)onInit;
-(BOOL)isAvailable;
-(void)onLoad;
@end

@protocol AZBannerAdapterAbstract <AZAdapterAbstract>
@required
-(UIView*)bannerView;
-(NSTimeInterval)minAutoRefreshInterval;
-(BOOL)autoRefresh;
-(BOOL)firstTimeLoad;
@end



@protocol AZInterstitialAdapterAbstract <AZAdapterAbstract>
@required
-(BOOL)precentWithViewController:(UIViewController*)viewController;
@end

@protocol AZVideoAdapterAbstract <AZAdapterAbstract>
@required
-(BOOL)precentWithViewController:(UIViewController*)viewController;
@end

@protocol AZNativeAdapterAbstract <AZAdapterAbstract>
@required
+(BOOL)supportClassicLoader;
-(void)click:(id)rawMaterial;
-(void)display:(id)rawMaterial view:(UIView*)view;
-(void)complete:(id)rawMaterial;
-(AZNativeAdMaterial*)createNativeAdMaterial:(id)rawMaterial;
@end

@protocol AZSplashAdapterAbtract <AZAdapterAbstract>
@required


@end

@interface AZAdapterBase : NSObject
@property(nonatomic, weak, readonly) id<AZAdapterDelegate> delegate;
@property(nonatomic, strong, readonly) AZPlatformConfig* config;
@end



NS_ASSUME_NONNULL_END
