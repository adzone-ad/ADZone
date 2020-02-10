//
//  IFlyAdResponseData.h
//  AD_Test
//
//  Created by afei on 15/3/9.
//  Copyright (c) 2015年 IFLYTEK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IFlyAdData.h"

@interface IFlyAdResponseData : NSObject

//返回码
@property (readonly,nonatomic,strong) NSNumber * rc;
//请求id
@property (readonly,nonatomic,strong) NSString * id;
//响应唯一标识
@property (readonly,nonatomic,strong) NSString * bid_id;
//响应信息
@property (readonly,nonatomic,strong) NSString * info;
//价格单位
@property (readonly,nonatomic,strong) NSString * cur;
//广告物料信息
@property (readonly,nonatomic,strong) IFlyAdData * ad;
//数据开关
@property (readonly,nonatomic,strong) NSNumber  * extra_data_toggle;
//扩展信息
@property (readonly,nonatomic,strong) NSDictionary  * ext;

-(id)initWithDic:(NSDictionary *)dic;

@end
