//
//  AZSplashLoader.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/12/28.
//

#import "AZAdLoader.h"

NS_ASSUME_NONNULL_BEGIN

@class AZSplashLoader;

@protocol AZSplashLoaderDelegate <NSObject>
-(void)onSplashLoadSuccess:(AZSplashLoader*)loader;
-(void)onSplashLoadError:(AZSplashLoader*)loader errorMsg:(NSString*)errorMsg;
-(void)onSplashClick:(AZSplashLoader*)loader;
-(void)onSplashSkip:(AZSplashLoader*)loader;
-(void)onSplashClose:(AZSplashLoader*)loader;
@end

typedef void(^AZSplashLoaderCallback)(AZSplashLoader* loader);
typedef void(^AZSplashLoaderErrorCallback)(AZSplashLoader* loader, NSString* errorMsg);

@interface AZSplashLoader : AZAdLoaderBase<AZAdLoaderAbstract>

@property (nonatomic, strong) AZSplashLoaderCallback loadSuccessCallback;
@property (nonatomic, strong) AZSplashLoaderErrorCallback loadErrorCallback;
@property (nonatomic, strong) AZSplashLoaderCallback clickCallback;
@property (nonatomic, strong) AZSplashLoaderCallback skipCallback;
@property (nonatomic, strong) AZSplashLoaderCallback closeCallback;

@property (nonatomic, weak) id<AZSplashLoaderDelegate> delegate;

@property (nonatomic, strong) UIImage* placeholderImage;
@property (nonatomic, strong) UIWindow* keyWindow;
@property (nonatomic, strong) UIView* footerView;



-(void)loadAndShow;

@end

NS_ASSUME_NONNULL_END
