//
//  AZVideoLoader.h
//  AdZoneAggregate
//
//  Created by Arrow.L on 2019/12/27.
//

#import "AZAdLoader.h"


NS_ASSUME_NONNULL_BEGIN

@class AZVideoLoader;

@protocol AZVideoLoaderDelegate <NSObject>
-(void)onVideoLoadSuccess:(AZVideoLoader*)loader;
-(void)onVideoLoadError:(AZVideoLoader*)loader errorMsg:(NSString*)errorMsg;
-(void)onVideoDisplaySuccess:(AZVideoLoader*)loader;
-(void)onVideoDisplayError:(AZVideoLoader*)loader errorMsg:(NSString*)errorMsg;
-(void)onVideoClick:(AZVideoLoader*)loader;
-(void)onVideoClose:(AZVideoLoader*)loader;

@end

typedef void(^AZVideoLoaderCallback)(AZVideoLoader* loader);
typedef void(^AZVideoLoaderErrorCallback)(AZVideoLoader* loader, NSString* error);


@interface AZVideoLoader : AZAdLoaderBase<AZAdLoaderAbstract>

@property (nonatomic, assign) _Nullable id<AZVideoLoaderDelegate>  delegate;
@property (nonatomic, strong) AZVideoLoaderCallback loadSuccessCallback;
@property (nonatomic, strong) AZVideoLoaderErrorCallback loadErrorCallback;
@property (nonatomic, strong) AZVideoLoaderCallback displayCallback;
@property (nonatomic, strong) AZVideoLoaderErrorCallback displayErrorCallback;
@property (nonatomic, strong) AZVideoLoaderCallback clickCallback;
@property (nonatomic, strong) AZVideoLoaderCallback closeCallback;
@property (nonatomic, strong) AZVideoLoaderCallback completeCallback;
@property (nonatomic, strong) AZVideoLoaderCallback skipCallback;

-(BOOL)precentWithViewController:(UIViewController*)viewController;

@end

NS_ASSUME_NONNULL_END
