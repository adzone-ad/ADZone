//
//  AZAdLoader.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZDefines.h"
NS_ASSUME_NONNULL_BEGIN

@protocol AZAdLoaderAbstract <NSObject>
@required
@property(nonatomic) BOOL willGetLocation;
@property (nonatomic, strong) UIViewController* containerViewController;
-(BOOL)isAvailable;
-(BOOL)isLoading;
-(BOOL)isDisplaying;
-(void)load;
@end


@interface AZAdLoaderBase : NSObject
@property(nonatomic) BOOL willGetLocation;
@property (nonatomic, strong) UIViewController* containerViewController;
- (instancetype)initWithZoneId:(NSString*)zoneId;
@property(nonatomic, copy) NSString* zoneId;
@property(nonatomic) NSTimeInterval timeout;
@property(nonatomic) unsigned short retryTimes;
@end


NS_ASSUME_NONNULL_END
