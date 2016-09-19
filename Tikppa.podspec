Pod::Spec.new do |s|

  s.name         = "Tikppa"
  s.version      = "0.2.3"
  s.summary      = "AppKit UI"
  s.homepage     = "https://github.com/gabriel/Tikppa"
  s.license      = "MIT"
  s.authors      = {"Gabriel Handford" => "gabrielh@gmail.com"}
  s.source       = {:git => "https://github.com/gabriel/Tikppa.git", :tag => s.version.to_s}

  s.requires_arc = true

  s.dependency "YOLayout"
  s.dependency "GHKit"
  s.dependency "Slash"
  s.dependency "ObjectiveSugar"
  s.dependency "CocoaLumberjack"
  s.dependency "AFNetworking"

  s.platform = :osx, "10.10"
  s.osx.source_files = "Tikppa/**/*.{h,m}"

end
