//
//  AZPlatform.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZDefines.h"
NS_ASSUME_NONNULL_BEGIN

@protocol AZPlatformAbstract <NSObject>
@required
-(NSString*)sdkVersion;
-(int)typeId;
-(NSString*)name;
-(NSArray<Class>*)adapterClasses;
-(void)onRegisted:(UIViewController*)rootViewController;
-(NSArray<id<AZPlatformAbstract>>*)subPlatforms;
@end

@interface AZPlatformBase : NSObject
@end


NS_ASSUME_NONNULL_END
