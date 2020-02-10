//
//  IFlyAdData.h
//  AdAIUI_Test
//
//  Created by afei on 2019/3/11.
//  Copyright © 2019 iflytek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IFlyHtmlData.h"
#import "IFlyImgVoiceData.h"
#import "IFlyAudioData.h"
#import "IFlyVideoData.h"
#import "IFlyMonitorData.h"

NS_ASSUME_NONNULL_BEGIN

@interface IFlyAdData : NSObject

@property (readonly,nonatomic,strong) NSNumber * template_id;
@property (readonly,nonatomic,strong) NSString * creative_id;
@property (readonly,nonatomic,strong) NSNumber * price;
@property (readonly,nonatomic,strong) NSString * deal_id;
@property (readonly,nonatomic,strong) IFlyHtmlData * html;
@property (readonly,nonatomic,strong) IFlyImgVoiceData  * img;
@property (readonly,nonatomic,strong) IFlyImgVoiceData  * img1;
@property (readonly,nonatomic,strong) IFlyImgVoiceData  * img2;
@property (readonly,nonatomic,strong) IFlyImgVoiceData  * img3;
@property (readonly,nonatomic,strong) IFlyVideoData  * video;
@property (readonly,nonatomic,strong) IFlyAudioData  * audio;
@property (readonly,nonatomic,strong) NSString  * title;
@property (readonly,nonatomic,strong) NSString  * desc;
@property (readonly,nonatomic,strong) IFlyImgVoiceData  * icon;
@property (readonly,nonatomic,strong) NSString  * content;
@property (readonly,nonatomic,strong) NSString  * ctatext;
@property (readonly,nonatomic,strong) NSString  * app_name;
@property (readonly,nonatomic,strong) NSNumber  * downloads;
@property (readonly,nonatomic,strong) NSString  * rating;
@property (readonly,nonatomic,strong) NSString  * app_download_url;
@property (readonly,nonatomic,strong) NSString  * app_intro_url;
@property (readonly,nonatomic,strong) NSString  * app_ver;
@property (readonly,nonatomic,strong) NSNumber  * app_size;
@property (readonly,nonatomic,strong) NSString  * phone;
@property (readonly,nonatomic,strong) NSNumber  * likes;
@property (readonly,nonatomic,strong) NSNumber  * original_price;
@property (readonly,nonatomic,strong) NSNumber  * current_price;
@property (readonly,nonatomic,strong) NSString  * sponsored;
@property (readonly,nonatomic,strong) NSString  * address;
@property (readonly,nonatomic,strong) NSString  * app_id;
@property (readonly,nonatomic,strong) NSString  * package_name;
@property (readonly,nonatomic,strong) NSString  * brand;
@property (readonly,nonatomic,strong) NSArray  * display_labels;
@property (readonly,nonatomic,strong) IFlyImgVoiceData  * voice_ad;
@property (readonly,nonatomic,strong) NSString  * close_icon;
@property (readonly,nonatomic,strong) IFlyMonitorData  * monitor;
@property (readonly,nonatomic,strong) NSString  * deeplink;
@property (readonly,nonatomic,strong) NSString  * landing;
@property (readonly,nonatomic,strong) NSString  * action_type;
@property (readonly,nonatomic,strong) NSString  * ad_source_mark;
@property (readonly,nonatomic,strong) NSDictionary  * ext;

-(id)initWithDic:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
