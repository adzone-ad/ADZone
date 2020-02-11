//
//  AZAdLoader+Protected.h
//  Pods
//
//  Created by 张国志 on 2019/11/20.
//

#ifndef AZAdLoader_Protected_h
#define AZAdLoader_Protected_h

#import "AZAdLoader.h"
#import "AZConfigDispatcher.h"
#import "AZReporter.h"
#import "AZAdapterGenerator.h"

@protocol AZAdLoaderAbstractProtected <NSObject>
-(NSString*)loaderTypeName;
-(void)onFinallyLoadError:(NSString*)errorMsg;
-(void)onNilAdapter;
-(AZAdapterGenerator*)createAdapterGenerator;
-(BOOL)shouldReload;
@end


@interface AZAdLoaderBase () <AZAdapterDelegate>
@property (nonatomic) unsigned short retriedTimes;
@property (nonatomic) NSTimeInterval nilAdapterWaitInterval;
@property (nonatomic, strong) id<AZAdapterAbstract> adapter;
-(AZReporter*)protectedReporter;
-(AZConfigDispatcher*)protectedConfigDispatcher;
-(AZAdapterGenerator*)protectedAdapterGenerator;
-(NSTimer*)protectedLoadTimer;
-(AZAdapterGenerator*)createAdapterGenerator;
-(void)load;
-(BOOL)isAvailable;
-(BOOL)isLoading;
-(BOOL)isDisplaying;
-(void)reload;
-(void)onFinallyLoadError:(NSString *)errorMsg;
-(BOOL)shouldReload;
@end



#endif /* AZAdLoader_Protected_h */
