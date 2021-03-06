//
//  BNHandlerTests.m
//  Copyright (c) 2016 Bambora ( http://bambora.com/ )
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <XCTest/XCTest.h>

@interface BNHandlerTests : XCTestCase

@property BNPaymentHandler *handler;

@end

@implementation BNHandlerTests

- (void)setUp {
    [super setUp];
    self.handler = [BNPaymentHandler sharedInstance];
}

- (void)testSetupPaymentHandler {

    // Given:
    NSString *apiToken = @"api-token";
    NSString *baseUrl = @"https://zebragiraffe.net/";
    BOOL debug = YES;
    NSError *error = nil;
    
    // When:
    [BNPaymentHandler setupWithApiToken:apiToken
                                baseUrl:baseUrl
                                  debug:debug
                                  error:&error];
    
    // Then:
    XCTAssertNotNil(_handler, "The handler property should not be nil.");
    XCTAssertNil(error, "The error variable should be nil.");
    
    XCTAssertEqualObjects([self.handler getApiToken], apiToken, "The value returned from the call to [self.handler getApiToken] should match the value of the apiToken variable.");
    XCTAssertEqualObjects([self.handler getBaseUrl], baseUrl, "The value returned from the call to [self.handler getBaseUrl] should match the value of the baseUrl variable.");
    XCTAssertEqual([self.handler debugMode], debug, "The value returned from the call to [self.handler debugMode] should match the value of the debug variable.");
    XCTAssertNotNil([self.handler getHttpClient], "The HTTP client object should not be nil.");
    XCTAssertTrue([[self.handler getHttpClient] isKindOfClass:[BNHTTPClient class]], "The HTTP client should be an object of the BNHTTPClient class.");
}


- (void)tearDown {
    [super tearDown];
    self.handler = nil;
}


@end