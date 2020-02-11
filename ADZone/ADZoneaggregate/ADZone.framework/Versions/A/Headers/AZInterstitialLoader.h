//
//  AZInterstitialLoader.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZAdLoader.h"

NS_ASSUME_NONNULL_BEGIN

@class AZInterstitialLoader;

@protocol AZInterstitialLoaderDelegate <NSObject>
-(void)onInterstitialLoadSuccess:(AZInterstitialLoader*)loader;
-(void)onInterstitialLoadError:(AZInterstitialLoader*)loader errorMsg:(NSString*)errorMsg;
-(void)onInterstitialDisplaySuccess:(AZInterstitialLoader*)loader;
-(void)onInterstitialDisplayError:(AZInterstitialLoader*)loader errorMsg:(NSString*)errorMsg;
-(void)onInterstitialClick:(AZInterstitialLoader*)loader;
-(void)onInterstitialClose:(AZInterstitialLoader*)loader;
@end


typedef void(^AZInterstitialLoaderCallback)(AZInterstitialLoader* loader);
typedef void(^AZInterstitialLoaderErrorCallback)(AZInterstitialLoader* loader, NSString* error);

@interface AZInterstitialLoader : AZAdLoaderBase <AZAdLoaderAbstract>
@property (nonatomic, assign) _Nullable id<AZInterstitialLoaderDelegate>  delegate;
@property (nonatomic, strong) AZInterstitialLoaderCallback loadSuccessCallback;
@property (nonatomic, strong) AZInterstitialLoaderErrorCallback loadErrorCallback;
@property (nonatomic, strong) AZInterstitialLoaderCallback displayCallback;
@property (nonatomic, strong) AZInterstitialLoaderErrorCallback displayErrorCallback;
@property (nonatomic, strong) AZInterstitialLoaderCallback clickCallback;
@property (nonatomic, strong) AZInterstitialLoaderCallback closeCallback;

-(BOOL)precentWithViewController:(UIViewController*)viewController;
@end

NS_ASSUME_NONNULL_END
