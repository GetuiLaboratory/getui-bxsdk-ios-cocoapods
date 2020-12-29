#
#  Be sure to run `pod spec lint GetuiBXSdk.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
  # 名称，pod search 搜索的关键词,注意这里一定要和.podspec的名称一样,否则报错
  s.name         = "GetuiBXSDK"
  # 版本号/库原代码的版本
  s.version      = "2.2.0.0"
  # 简介
  s.summary      = "个推变现 iOS SDK CocoaPods 集成库"
  # 项目主页地址
  s.homepage     = "http://docs.getui.com/monetize/start/ios/"
  # 许可证/所采用的授权版本
  s.license      = "MIT"
  # 库的作者
  s.author       = { "个推" => "support@getui.com" }
  # 项目的地址
  s.source       = { :git => "https://github.com/GetuiLaboratory/getui-bxsdk-ios-cocoapods.git", :tag => "#{s.version}" }
  # 支持的平台及版本
  s.platform     = :ios, "9.0"
  # iOS支持的pod最低版本 / iOS对应的版本
  s.ios.deployment_target = "9.0"

  s.subspec 'core' do |ss|
    # 需要包含的源文件
    # ss.source_files  = ''
    # 依赖的第三方pod
    ss.dependency 'GTCommonSDK', '1.1.1.0'
    # 使用了第三方静态库
    # ss.ios.vendored_libraries = 'libxxx.a'
    ss.ios.vendored_frameworks = 'GetuiBXSdk.framework'
    # 所需的framework，多个用逗号隔开
    ss.frameworks = 'AdSupport', 'AVFoundation', 'CoreLocation', 'CoreTelephony', 'CoreMotion', 'MessageUI', 'QuartzCore', 'SafariServices', 'Security', 'SystemConfiguration', 'WebKit', 'CoreMedia'
    # “弱引用”所需的framework，多个用逗号隔开
    # s.ios.weak_frameworks = 'WebKit'
    # 所需的library，多个用逗号隔开
    ss.libraries = 'c++', 'resolv', 'sqlite3', 'xml2', 'z'
    # 是否使用ARC，如果指定具体文件，则具体的问题使用ARC
    # ss.requires_arc = true
  
    # ss.info_plist = { 'NSAppTransportSecurity' => { 'NSAllowsArbitraryLoads' => true } }
    ss.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  end

  s.subspec 'csj' do |ss|
    ss.dependency 'GetuiBXSDK/core'
    ss.dependency 'Bytedance-UnionAD', '3.3.1.5'
    # ss.ios.vendored_frameworks = 'Vendor/CSJSDK/BUAdSDKSDK.framework', 'Vendor/CSJSDK/BUFoundation.framework'
    # ss.resource = 'Vendor/CSJSDK/BUAdSDK.bundle'
  end

  s.subspec 'gdt' do |ss|
    ss.dependency 'GetuiBXSDK/core'
    ss.dependency 'GDTMobSDK', '4.11.12'
    # ss.ios.vendored_libraries = 'Vendor/GDTSDK/libGDTMobSDK.a'
    # ss.source_files = 'Vendor/GDTSDK/*.h'
  end

  s.subspec 'inmobi' do |ss|
    ss.dependency 'GetuiBXSDK/core'
    ss.dependency 'InMobiSDK-China', '7.5.0'
    # ss.ios.vendored_frameworks = 'Vendor/InMob/InMobiSDK.framework'
  end

  s.subspec 'bd' do |ss|
    ss.dependency 'GetuiBXSDK/core'
    ss.ios.vendored_frameworks = 'Vendor/BaiduMobAdSDK.framework'
  end

  s.subspec 'bxm' do |ss|
    ss.dependency 'GetuiBXSDK/core'
    ss.ios.vendored_libraries = 'Vendor/BXMSDK/libBXMSDK.a'
    ss.resource = 'Vendor/BXMSDK/BXMAdSDK.bundle'
    ss.source_files = 'Vendor/BXMSDK/*.h'
  end

end
