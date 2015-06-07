//
//  TAWS.h
//  TAWS
//
//  Created by suwa.yuki on 2015/05/26.
//  Copyright (c) 2015 classmethod, Inc. All rights reserved.
//

#import <Bolts/Bolts.h>
#import <AWSCore/AWSService.h>
#import <OCMock/OCMock.h>
#import <OCMock/OCMStubRecorder.h>

@class AWSMock;
@compatibility_alias AWSStub AWSMock;

/**
 *  AWS Mock Class.
 */
@interface AWSMock : NSObject

/**
 *  AWSServiceType.
 */
@property (assign, nonatomic) AWSServiceType serviceType;

/**
 *  Convinience constractor.
 *
 *  @param serviceType AWSServiceType
 *
 *  @return AWSMock object
 */
+ (instancetype)mockWith:(AWSServiceType)serviceType;

/**
 *  Convinience constractor.
 *  Initialize and set stub method, request, and response.
 *
 *  @param serviceType AWSServiceType
 *  @param selector    Expect method
 *  @param request     Request object
 *  @param response    Response object
 *
 *  @return AWSMock object
 */
+ (instancetype)mockWith:(AWSServiceType)serviceType
                 receive:(SEL)selector
                    with:(id)request
               andReturn:(id)response;

/**
 *  Convinience constractor.
 *  Initialize and set stub method, error object.
 *
 *  @param serviceType AWSServiceType
 *  @param selector    Expect method
 *  @param request     Request object
 *  @param error       NSError object
 *
 *  @return AWSMock object
 */
+ (instancetype)mockWith:(AWSServiceType)serviceType
                 receive:(SEL)selector
                    with:(id)request
                   error:(NSError *)error;

/**
 *  Convinience constractor.
 *  Initialize and set stub method, error object.
 *
 *  @param serviceType AWSServiceType
 *  @param selector    Expect method
 *  @param request     Request object
 *  @param domain      Error domain
 *  @param type        Error type (code)
 *
 *  @return AWSMock object
 */
+ (instancetype)mockWith:(AWSServiceType)serviceType
                 receive:(SEL)selector
                    with:(id)request
             errorDomain:(NSString *)domain
               errorType:(NSInteger)type;

/**
 *  Convinience constractor.
 *
 *  @param serviceType AWSServiceType
 *
 *  @return AWSMock object
 */
+ (instancetype)stubWith:(AWSServiceType)serviceType;

/**
 *  Convinience constractor.
 *  Initialize and set stub method, request, and response.
 *
 *  @param serviceType AWSServiceType
 *  @param selector    Expect method
 *  @param request     Request object
 *  @param response    Response object
 *
 *  @return AWSStub object
 */
+ (instancetype)stubWith:(AWSServiceType)serviceType
                 receive:(SEL)selector
                    with:(id)request
               andReturn:(id)response;

/**
 *  Convinience constractor.
 *  Initialize and set stub method, error object.
 *
 *  @param serviceType AWSServiceType
 *  @param selector    Expect method
 *  @param request     Request object
 *  @param error       NSError object
 *
 *  @return AWSStub object
 */
+ (instancetype)stubWith:(AWSServiceType)serviceType
                 receive:(SEL)selector
                    with:(id)request
                   error:(NSError *)error;

/**
 *  Convinience constractor.
 *  Initialize and set stub method, error object.
 *
 *  @param serviceType AWSServiceType
 *  @param selector    Expect method
 *  @param request     Request object
 *  @param domain      Error domain
 *  @param type        Error type (code)
 *
 *  @return AWSStub object
 */
+ (instancetype)stubWith:(AWSServiceType)serviceType
                 receive:(SEL)selector
                    with:(id)request
             errorDomain:(NSString *)domain
               errorType:(NSInteger)type;

/**
 *  Set expect method.
 *
 *  @param selector Expect method
 *
 *  @return AWSMock object
 */
- (id)receive:(SEL)selector;

/**
 *  Set expect parameter.
 *
 *  @param value Parameter
 *
 *  @return AWSMock object
 */
- (id)with:(id)value;

/**
 *  Set return value.
 *
 *  @param value Response value
 *
 *  @return AWSMock object
 */
- (id)andReturn:(id)value;

/**
 *  Set NSError.
 *
 *  @param error NSError object
 *
 *  @return AWSMock object
 */
- (id)andError:(NSError *)error;

/**
 *  Set ErrorDomain and ErrorType.
 *
 *  @param domain ErrorDomain
 *  @param type   ErrorType
 *
 *  @return AWSMock object
 */
- (id)andErrorDomain:(NSString *)domain type:(NSInteger)type;

/**
 *  Verify to expected method whether it has been called.
 */
- (void)verify;

@end