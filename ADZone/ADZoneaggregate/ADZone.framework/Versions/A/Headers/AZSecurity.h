//
//  ZYAGSecurity.h
//  sdkIOSDemo
//
//  Created by 张国志 on 2017/8/21.
//
//

#import <Foundation/Foundation.h>

@interface AZSecurity : NSObject
+(instancetype) instance;
-(NSData*)decryptData:(NSData*)srcData;
-(NSString*)decryptString:(NSString*)srcStr;
-(NSData*)encryptData:(NSData*)srcData;
-(NSString*)encryptString:(NSString*)srcStr;
@end
