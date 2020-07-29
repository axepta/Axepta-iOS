#
# Be sure to run `pod lib lint Axepta.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name                  = 'Axepta'
  s.version               = '0.0.1'
  s.summary               = 'Axepta SDK for iOS'
  # s.description         = 'Axepta SDK for iOS'
  s.homepage              = 'https://github.com/Axepta/Axepta-iOS.git'
  s.license               = { :type => 'MIT', :file => 'LICENSE' }
  s.author                = { 'Gerald Collaku' => 'gerald.collaku@endava.com' }
  s.source                = { :git => 'https://github.com/axepta/Axepta-iOS.git', :tag => s.version.to_s }
  s.ios.deployment_target = '10.0'
  s.vendored_frameworks   = 'Axepta/**/Axepta.framework'

end


