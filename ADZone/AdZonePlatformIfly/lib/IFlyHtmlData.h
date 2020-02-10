//
//  IFlyHtmlData.h
//  AdAIUI_Test
//
//  Created by afei on 2019/3/11.
//  Copyright © 2019 iflytek. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface IFlyHtmlData : NSObject

//广告物料地址
@property (readonly,nonatomic,strong) NSString * adm;
//广告宽度（非必填）
@property (readonly,nonatomic,strong) NSNumber * width;
//广告高度（非必填）
@property (readonly,nonatomic,strong) NSNumber * height;
//扩展信息（非必填）
@property (readonly,nonatomic,strong) NSDictionary  * ext;

-(id)initWithDic:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
