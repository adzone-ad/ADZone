//
//  AZPausableTimer.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/12/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AZPausableTimer : NSObject
-(void)pause;
-(void)resume;
-(BOOL)isValid;
-(void)invalidate;
+(instancetype)timerWithTimeInterval:(NSTimeInterval)ti target:(nonnull id)t selector:(nonnull SEL)sel userInfo:(nullable id)u repeats:(BOOL)r;
@end

NS_ASSUME_NONNULL_END
