//
//  AZPlatformMTG.h
//  AdZonePlatformMTG
//
//  Created by ZHONGPING YE on 2020/1/21.
//  Copyright © 2020 ZHONGPING YE. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AZPlatformMTG : NSObject
+(instancetype)instance;
-(void)setAppId:(NSString *)appId;
@end

NS_ASSUME_NONNULL_END
