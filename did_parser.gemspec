$:.unshift File.join(File.dirname(__FILE__), 'lib')
require 'did_parser/version'

Gem::Specification.new do |s|
  s.name     = 'did_parser'
  s.version  = ::DIDParser::VERSION
  s.authors  = ['Terry Tu']
  s.email    = ['tuminfei1981@gmail.com']
  s.homepage = 'https://github.com/tuminfei/did-parser-rb'

  s.description = s.summary = 'A DID parser for Ruby'

  s.platform = Gem::Platform::RUBY

  s.add_dependency 'rice', '~> 4.0'

  s.extensions = File.join(*%w(ext did_parser extconf.rb))

  s.require_path = 'lib'
  s.files = Dir[
    '{lib,spec}/**/*',
    'ext/did_parser/*.{cpp,h}',
    'ext/did_parser/extconf.rb',
    'ext/did_parser/antlrgen/*',
    'ext/did_parser/antlr4-upstream/runtime/Cpp/runtime/src/**/*.{cpp,h}',
    'Gemfile',
    'README.md',
    'Rakefile',
    'did_parser.gemspec'
  ]
end
