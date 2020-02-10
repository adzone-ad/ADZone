//
//  AZViewController.m
//  ADZone
//
//  Created by objective on 01/03/2020.
//  Copyright (c) 2020 objective. All rights reserved.
//

#import "AZViewController.h"
#import <AdZoneAggregate/AdZoneAggregate.h>
#import <AdZonePlatformTencent/AdZonePlatformTencent.h>
#import <AdZonePlatformTouTiao/AdZonePlatformTouTiao.h>
#import <AdZonePlatformBaidu/AdZonePlatformBaidu.h>
#import <AdZonePlatformInmobi/AdZonePlatformInmobi.h>
#import <AdZonePlatformMTG/AdZonePlatformMTG.h>
#import <AdZonePlatformVungle/AdZonePlatformVungle.h>
#import <AdZonePlatformUnity/AdZonePlatformUnity.h>
#import <AdZonePlatformIfly/AdZonePlatformIfly.h>
#import <AdZonePlatformGoogle/AdZonePlatformGoogle.h>
#import <AdZonePlatformAdview/AdZonePlatformAdview.h>

@interface AZViewController ()

@end

@implementation AZViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	[[AZAggregate instance] registerPlatform:[AZPlatformTencent instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformTouTiao instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformGoogle instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformBaidu instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformAdview instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformInmobi instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformMTG instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformVungle instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformUnity instance]];
    [[AZAggregate instance] registerPlatform:[AZPlatformIfly instance]];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
