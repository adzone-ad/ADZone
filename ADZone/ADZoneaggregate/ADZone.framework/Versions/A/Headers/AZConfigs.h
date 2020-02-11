//
//  AZConfigs.h
//  sdkIOSDemo
//
//  Created by 张国志 on 2017/8/8.
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZDefines.h"

@class AZPlatformConfig;
@class AZZoneConfig;

@interface AZGlobalConfig : NSObject
@property (nonatomic) int configVersion;
@property (nonatomic) int useUmeng;
@property (nonatomic, copy) NSString* domainUrl;
@property (nonatomic, strong) NSMutableDictionary<NSString*, AZZoneConfig*>* zoneConfigs;
+(AZGlobalConfig*)parseConfigFromJson:(NSData*)jsonData;
-(void)encode:(NSMutableDictionary*)dict;
-(void)decode:(NSMutableDictionary*)dict;
@end


@interface AZZoneConfig : NSObject
@property (nonatomic) BOOL useDefaultConfigs;
@property (nonatomic, copy) NSString* zoneId;
@property (nonatomic) AZZoneType zoneType;
@property (nonatomic, strong) NSMutableArray<AZPlatformConfig*>* plaformConfigs;
-(void)encode:(NSMutableDictionary*)dict;
-(void)decode:(NSMutableDictionary*)dict;
@end


@interface AZPlatformConfig : NSObject
@property (nonatomic, copy) NSString* zoneId;
@property (nonatomic)AZZoneType zoneType;
@property (nonatomic) int platformId;
@property (nonatomic, copy) NSString* platformAppId;
@property (nonatomic, copy) NSString* platformPosId;
@property (nonatomic) int percentage;
@property (nonatomic) int priority;
@property (nonatomic) BOOL enable;
@property (nonatomic) int zonePosId;
@property (nonatomic) int delay;
@property (nonatomic) int idleTime;
-(void)encode:(NSMutableDictionary*)dict;
-(void)decode:(NSMutableDictionary*)dict;
@end
