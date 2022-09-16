//
//  FWAudiobookAPIFetch.h
//  AudioEngine
//
//  Created by Alexander Glenn on 1/7/14.
//  Copyright (c) 2015 Findaway. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FAEDownloadEngine;

@interface FAEAudiobookAPIFetch : NSObject
@property NSString *sessionKey;

-(instancetype)initWithSessionKey:(NSString*)sessionKey;
-(void)fetchAudiobook:(NSString*)audiobookID completionHandler:(void (^)(NSError *error))completionHandler;

typedef NS_ENUM(NSUInteger, FAEAudiobookAPIFetchError) {
    
    FAEAudiobookAPIFetchErrorUnauthorized = 45,
    FAEAudiobookAPIFetchErrorServiceUnavailable = 50,
    FAEAudiobookAPIFetchErrorServiceTimeout = 55,
    FAEAudiobookAPIFetchErrorPageNotFound = 60,
    FAEAudiobookAPIFetchErrorUnknownServerResponse = 65,
    FAEAudiobookAPIFetchErrorMetadataUnavailable = 70
};

@end
