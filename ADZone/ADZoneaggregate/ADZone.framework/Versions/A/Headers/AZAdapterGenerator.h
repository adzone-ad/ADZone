//
//  AZAdapterGenerator.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/12/12.
//

#import <Foundation/Foundation.h>
#import "AZConfigs.h"
#import "AZAdapter.h"
NS_ASSUME_NONNULL_BEGIN

@interface AZAdapterGenerator : NSObject
-(id<AZAdapterAbstract>)generateAdapterByConfig:(AZPlatformConfig*)config delegate:(id<AZAdapterDelegate>)delegate;
-(void)cleanCache;
-(void)setAdapter:(id<AZAdapterAbstract>)adapter state:(AZAdLoaderState)state;
-(AZAdLoaderState)getAdapterState:(id<AZAdapterAbstract>)adapter;
@end

@interface AZAdapterGeneratorForBanner : AZAdapterGenerator
-(void)setAdapter:(id<AZAdapterAbstract>)adapter inUse:(BOOL)inUse;
-(BOOL)getAdapterInUse:(id<AZAdapterAbstract>)adapter;
@end

@interface AZAdapterGeneratorForNative : AZAdapterGenerator
@property (nonatomic) BOOL classicOnly;
@end

NS_ASSUME_NONNULL_END
