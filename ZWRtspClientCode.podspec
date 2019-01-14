
Pod::Spec.new do |s|

  s.name         = "ZWRtspClientCode"
  s.version      = "1.0.0"
  s.summary      = "one class for live555 Client"

  s.description  = <<-DESC
  用于liv555流媒体框架客户端
                   DESC

  s.homepage     = "https://github.com/xzwgithub/ZWRtspClientCode"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "xiezhiwen" => "xiezhiwen@allwinnertech.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/xzwgithub/ZWRtspClientCode.git", :tag => s.version }
  s.source_files  = "Classes", "ZWRtspClientCode/ZWRtspClientCode/Classes/**/*.{h,m}"
  s.requires_arc = true
end
