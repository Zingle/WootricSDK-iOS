//
//  APIWootric.h
//  WootricSDKObjC
//
//  Created by Łukasz Cichecki on 05/03/15.
//  Copyright (c) 2015 Wootric. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APIWootric : NSObject

@property (nonatomic, strong) NSString *clientSecret;
@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *accountToken;
@property (nonatomic, strong) NSString *accessToken;
@property (nonatomic, strong) NSString *endUserEmail;
@property (nonatomic, strong) NSString *apiVersion;
@property (nonatomic, strong) NSString *originURL;
@property (nonatomic, strong) NSNumber *registeredPercent;
@property (nonatomic, strong) NSNumber *visitorPercent;
@property (nonatomic, strong) NSNumber *resurveyThrottle;
@property (nonatomic) BOOL forceSurvey;

+ (instancetype)sharedInstance;
- (void)voteWithScore:(NSInteger)score andText:(NSString *)text;
- (void)userDeclined;
- (BOOL)checkConfiguration;
- (void)surveyForEndUser:(void (^)())completionHandler;

@end