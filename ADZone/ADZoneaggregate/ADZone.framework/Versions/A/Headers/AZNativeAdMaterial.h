//
//  AZNativeAd.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/12/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AZNativeImageInfo : NSObject
@property(nonatomic)float width;
@property(nonatomic)float height;
@property(nonatomic, copy) NSString* url;
@end

@interface AZNativeAppInfo : NSObject
@property(nonatomic, copy) NSString* iconUrl;
@property(nonatomic) float rating;
@property(nonatomic) float price;
@end

@interface AZNativeAdMaterial : NSObject
@property(nonatomic, copy)NSString* title;
@property(nonatomic, copy)NSString* desc;
@property(nonatomic, strong)AZNativeAppInfo* appInfo;
@property(nonatomic, strong)NSMutableArray<AZNativeImageInfo*>* images;
@property (nonatomic, strong)UIView* view;
@property (nonatomic, copy)NSString* action;
@end





NS_ASSUME_NONNULL_END
