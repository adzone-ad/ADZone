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
  
  
  
  s.subspec 'ADZoneaggregate' do |ss|
      ss.vendored_frameworks = 'ADZone/ADZoneaggregate/ADZone.framework'
      ss.dependency 'AFNetworking'
      ss.dependency 'OpenUDID'
  end
  
  s.subspec 'AZPlatformtencent' do |ss|
      ss.dependency 'ADZone/ADZoneaggregate'
      ss.vendored_frameworks = 'ADZone/AZPlatformtencent/AZPlatformtencent.framework'
      ss.frameworks = 'AdSupport', 'CoreLocation', 'QuartzCore', 'SystemConfiguration', 'CoreTelephony', 'Security', 'StoreKit', 'AVFoundation', 'WebKit'
      ss.libraries = 'z', 'xml2'
      ss.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
      ss.dependency 'AFNetworking'
      ss.dependency 'OpenUDID'
  end
  
  
  
  # s.resource_bundles = {
  #   'ADZone' => ['ADZone/Assets/*.png']
  # }
  
  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
