//
//  AZAdapter+Internal.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/12/12.
//

#ifndef AZAdapter_Internal_h
#define AZAdapter_Internal_h
#import "AZAdapter.h"

@interface AZAdapterBase ()<AZAdapterAbstract>
@property (nonatomic, weak) id<AZAdapterDelegate> delegate;
@property (nonatomic, strong) AZPlatformConfig* config;
@end

#endif /* AZAdapter_Internal_h */
