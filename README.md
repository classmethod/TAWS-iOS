# TAWS

[![CI Status](http://img.shields.io/travis/classmethod/TAWS-iOS.svg?style=flat)](https://travis-ci.org/classmethod/TAWS-iOS)
[![Version](https://img.shields.io/cocoapods/v/TAWS.svg?style=flat)](http://cocoapods.org/pods/TAWS)
[![License](https://img.shields.io/cocoapods/l/TAWS.svg?style=flat)](http://cocoapods.org/pods/TAWS)
[![Platform](https://img.shields.io/cocoapods/p/TAWS.svg?style=flat)](http://cocoapods.org/pods/TAWS)

TAWS is a Mocking & Stubbing Library for [AWSiOSSDKv2](https://github.com/aws/aws-sdk-ios).  
`AWSMock` is simple class that can write stub & mock, it like RSpec.  
Let try mocking and stubbing to AWS!

## Usage

1. To run the example project, clone the repo, and run `pod install` from the Example directory first.
2. `#import <TAWS/TAWS.h>` in your test case.

### AWSMock
```objective-c
AWSMock *mock = [AWSMock mockWith:[AWSSNS class]
                          receive:@selector(subscribe:)
                             with:request 
                        andReturn:response];

// Call Subscribe API

[mock verify];
```

### AWSStub
`AWSStub` is alias to `AWSMock`.

```objective-c
AWSStub *stub = [AWSStub stubWith:[AWSSNS class]
                          receive:@selector(subscribe:)
                             with:request 
                        andReturn:response];
```

## Suported Services
- AWSAutoScaling
- AWSCloudWatch
- AWSCognitoIdentity
- AWSCognitoSync
- AWSDynamoDB
- AWSEC2
- AWSElasticLoadBalancing
- AWSKinesis
- AWSLambda
- AWSMachineLearning
- AWSS3
- AWSSES
- AWSSNS
- AWSSQS
- AWSSimpleDB

## Requirements

TAWS require [AWSiOSSDKv2](https://github.com/aws/aws-sdk-ios).

## Installation

TAWS is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "TAWS"
```

## Author

[Classmethod, Inc.](http://classmethod.jp/)

## License

TAWS is available under the MIT license. See the LICENSE file for more info.
