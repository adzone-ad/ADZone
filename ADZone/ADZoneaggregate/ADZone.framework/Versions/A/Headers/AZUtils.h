//
//  AZUtils.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface AZUtils : NSObject

/**
 *  @brief  获取sdk的版本号
 */
+ (NSString*)getLanguage;

/**
 *  @brief  获取sdk的版本号
 */
+ (NSString*)getVersion;

/**
 *  @brief  获取sdk的版本号
 */
+ (NSString*)getBuild;

+ (NSString*)openID;

/**
 *  @brief  IDFA
 */
+ (NSString *)idfaString;

/**
 *  @brief  IDFV
 */
+ (NSString *)idfvString;


/*
 *  @brief  手机用户名称
 */
+ (NSString *)deviceName;

+ (BOOL)isIpad;

+(NSString*)getBundleDisplayName;
@end

NS_ASSUME_NONNULL_END
