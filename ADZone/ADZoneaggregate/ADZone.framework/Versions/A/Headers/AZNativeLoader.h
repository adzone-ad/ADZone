//
//  AZNativeLoader.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/12/20.
//

#import <Foundation/Foundation.h>

#import "AZAdLoader.h"

#import "AZNativeAdMaterial.h"

NS_ASSUME_NONNULL_BEGIN

@class AZNativeLoader;

@protocol AZNativeLoaderDelegate <NSObject>
-(void)onNativeLoadSuccess:(AZNativeLoader*)loader material:(AZNativeAdMaterial*)material;
-(void)onNativeLoadError:(AZNativeLoader *)loader errorMsg:(NSString*)errorMsg;
-(void)onNativeDisplaySuccess:(AZNativeLoader*)loader material:(AZNativeAdMaterial*)material;
-(void)onNativeDisplayError:(AZNativeLoader*)loader material:(AZNativeAdMaterial*)material errorMsg:(NSString*)errorMsg;
-(void)onNativeClick:(AZNativeLoader*)loader material:(AZNativeAdMaterial*)material;
-(void)onNativeClose:(AZNativeLoader*)loader material:(AZNativeAdMaterial*)material;
@end

typedef void(^AZNativeLoaderCallback)(AZNativeLoader* loader, AZNativeAdMaterial* material);
typedef void(^AZNativeLoaderErrorCallback)(AZNativeLoader* loader, NSString* error);
typedef void(^AZNativeLoaderMaterialErrorCallback)(AZNativeLoader* loader, AZNativeAdMaterial* material, NSString* error);


@interface AZNativeLoader : AZAdLoaderBase <AZAdLoaderAbstract>
@property(nonatomic, weak)_Nullable id<AZNativeLoaderDelegate> delegate;
@property(nonatomic, strong) AZNativeLoaderCallback loadSuccessCallback;
@property(nonatomic, strong) AZNativeLoaderErrorCallback loadErrorCallback;
@property(nonatomic, strong) AZNativeLoaderCallback displayCallback;
@property(nonatomic, strong) AZNativeLoaderMaterialErrorCallback displayErrorCallback;
@property(nonatomic, strong) AZNativeLoaderCallback clickCallback;
@property(nonatomic, strong) AZNativeLoaderCallback closeCallback;

@property(nonatomic) BOOL classicOnly;


-(void)display:(AZNativeAdMaterial *)material view:(UIView *)view;
-(void)click:(AZNativeAdMaterial*)material;
-(void)complete:(AZNativeAdMaterial*)material;


@end



NS_ASSUME_NONNULL_END
