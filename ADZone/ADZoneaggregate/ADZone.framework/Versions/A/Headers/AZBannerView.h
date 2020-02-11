//
//  AZBannerView.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/12/10.
//

#import "AZAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@class AZBannerView;

@protocol AZBannerViewDelegate <NSObject>
-(void)onRefresh:(AZBannerView*)bannerView adapter:(id<AZBannerAdapterAbstract>)adapter;
@end

@interface AZBannerView : UIView
@property(nonatomic, weak) id<AZBannerViewDelegate> delegate;
-(void)transformAdapter:(id<AZBannerAdapterAbstract>)adapter;
-(void)refreshAfter:(NSTimeInterval)refreshInterval;
-(void)adapterOnClose:(id<AZBannerAdapterAbstract>)adapter;
@property (nonatomic) AZBannerPositionType positionType;
@property (nonatomic) CGSize customSize;
@end

NS_ASSUME_NONNULL_END
