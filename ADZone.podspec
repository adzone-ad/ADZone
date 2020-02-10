#
# Be sure to run `pod lib lint ADZone.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ADZone'
  s.version          = '0.1.0'
  s.summary          = 'A short description of ADZone.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  TODO: Add long description of the pod here.
  DESC
  
  s.homepage         = 'https://github.com/adzone-ad/ADZone'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Aaron.L' => 'zgz682000@dingtalk.com' }
  s.source           = { :git => 'https://github.com/adzone-ad/ADZone.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  
  s.ios.deployment_target = '8.0'
  
  
  
  s.subspec 'AdZoneAggregate' do |ss|
      ss.vendored_frameworks = 'ADZone/AdZoneAggregate/AdZoneAggregate.framework'
      ss.dependency 'AFNetworking'
      ss.dependency 'OpenUDID'
  end
  
  s.subspec 'AdZonePlatformAdview' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.source_files = 'ADZone/AdZonePlatformAdview/lib/*.{h,m}'
      ss.vendored_frameworks = 'ADZone/AdZonePlatformAdview/AdZonePlatformAdview.framework'
      ss.vendored_libraries = 'ADZone/AdZonePlatformAdview/lib/libAdCompViewSDK.a'
      ss.resource  = 'ADZone/AdZonePlatformAdview/lib/AdViewRes.bundle'
      ss.frameworks = 'CoreLocation', 'AddressBook', 'AdSupport'
      ss.libraries = 'c++', 'sqlite3', 'z', 'xml2'
      ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC", }
  end
  
  s.subspec 'AdZonePlatformBaidu' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.resource  = 'ADZone/AdZonePlatformBaidu/lib/baidumobadsdk.bundle'
      ss.frameworks = 'StoreKit', 'SafariServices', 'MessageUI', 'CoreMedia', 'CoreMotion', 'SystemConfiguration', 'CoreLocation', 'CoreTelephony', 'AVFoundation', 'AdSupport'
      ss.vendored_frameworks = 'ADZone/AdZonePlatformBaidu/lib/BaiduMobAdSDK.framework','ADZone/AdZonePlatformBaidu/AdZonePlatformBaidu.framework'
      ss.libraries = 'c++'
      ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
  end
  
  s.subspec 'AdZonePlatformGoogle' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.vendored_frameworks =
      'ADZone/AdZonePlatformGoogle/lib/GoogleAppMeasurement.framework',
      'ADZone/AdZonePlatformGoogle/lib/GoogleMobileAds.framework',
      'ADZone/AdZonePlatformGoogle/lib/GoogleUtilities.framework',
      'ADZone/AdZonePlatformGoogle/lib/nanopb.framework',
      'ADZone/AdZonePlatformGoogle/AdZonePlatformGoogle.framework'
  end
  
  s.subspec 'AdZonePlatformIfly' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.source_files = 'ADZone/AdZonePlatformIfly/lib/*.{h,m}'
      ss.vendored_frameworks = 'ADZone/AdZonePlatformIfly/AdZonePlatformIfly.framework'
      ss.vendored_libraries = 'ADZone/AdZonePlatformIfly/lib/libIFLYAdLib.a'
      ss.resource  = 'ADZone/AdZonePlatformIfly/lib/IFLYPlayer.bundle'
      ss.frameworks = 'CoreTelephony', 'AVFoundation', 'AdSupport', 'CoreMedia', 'WebKit', 'MediaPlayer', 'SystemConfiguration', 'StoreKit','CoreLocation'
      ss.libraries = 'z'
      ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
  end
  
  s.subspec 'AdZonePlatformInmobi' do |ss|
    ss.dependency 'ADZone/AdZoneAggregate'
    ss.vendored_frameworks =
    'ADZone/AdZonePlatformInmobi/lib/InMobiSDK.framework',
    'ADZone/AdZonePlatformInmobi/AdZonePlatformInmobi.framework'
    ss.frameworks = 'WebKit'
    ss.libraries = 'sqlite3.0', 'z'
    ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
  end
  
  s.subspec 'AdZonePlatformMTG' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.vendored_frameworks =
      'ADZone/AdZonePlatformMTG/AdZonePlatformMTG.framework',
      'ADZone/AdZonePlatformMTG/lib/MTGSDK.framework',
      'ADZone/AdZonePlatformMTG/lib/MTGSDKBanner.framework',
      'ADZone/AdZonePlatformMTG/lib/MTGSDKInterstitialVideo.framework',
      'ADZone/AdZonePlatformMTG/lib/MTGSDKReward.framework'
      ss.frameworks = 'CoreGraphics', 'Foundation', 'UIKit', 'AdSupport', 'StoreKit', 'QuartzCore', 'CoreTelephony', 'MobileCoreServices', 'AVFoundation', 'WebKit'
      ss.libraries = 'sqlite3', 'z'
      ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
  end
  
  s.subspec 'AdZonePlatformTencent' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.source_files = 'ADZone/AdZonePlatformTencent/lib/*.{h,m}'
      ss.vendored_frameworks = 'ADZone/AdZonePlatformTencent/AdZonePlatformTencent.framework'
      ss.vendored_libraries = 'ADZone/AdZonePlatformTencent/lib/libGDTMobSDK.a'
      ss.frameworks = 'AdSupport', 'CoreLocation', 'QuartzCore', 'SystemConfiguration', 'CoreTelephony', 'Security', 'StoreKit', 'AVFoundation', 'WebKit'
      ss.libraries = 'z', 'xml2'
      ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
  end
  
  s.subspec 'AdZonePlatformTouTiao' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.resource  = 'ADZone/AdZonePlatformTouTiao/lib/BUAdSDK.bundle'
      ss.frameworks = 'MobileCoreServices', 'MediaPlayer', 'CoreMedia', 'CoreLocation', 'AdSupport', 'CoreLocation', 'QuartzCore', 'SystemConfiguration', 'CoreTelephony', 'Security', 'StoreKit', 'AVFoundation', 'WebKit', 'CoreMotion', 'Accelerate', 'ImageIO'
      ss.vendored_frameworks =
      'ADZone/AdZonePlatformTouTiao/lib/BUAdSDK.framework',
      'ADZone/AdZonePlatformTouTiao/AdZonePlatformTouTiao.framework'
      ss.libraries = 'z', 'resolv.9', 'c++', 'sqlite3'
      ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
  end
  
  s.subspec 'AdZonePlatformUnity' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.vendored_frameworks =
      'ADZone/AdZonePlatformUnity/lib/UnityAds.framework',
      'ADZone/AdZonePlatformUnity/AdZonePlatformUnity.framework'
  end
  
  s.subspec 'AdZonePlatformVungle' do |ss|
      ss.dependency 'ADZone/AdZoneAggregate'
      ss.vendored_frameworks =
      'ADZone/AdZonePlatformVungle/lib/VungleSDK.framework',
      'ADZone/AdZonePlatformVungle/AdZonePlatformVungle.framework'
      ss.frameworks = 'CoreFoundation', 'Foundation', 'StoreKit'
      ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
  end
  
end
