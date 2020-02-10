//
//  AZPlatformInmobi.h
//  AdZonePlatformInmobi
//
//  Created by 张国志 on 2020/1/19.
//  Copyright © 2020 张国志. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AZPlatformInmobi : NSObject
+(instancetype)instance;
-(void)setAppId:(NSString *)appId;
@end

NS_ASSUME_NONNULL_END
