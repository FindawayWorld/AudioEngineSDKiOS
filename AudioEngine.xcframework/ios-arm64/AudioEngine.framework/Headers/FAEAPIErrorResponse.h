//
//  AEAPIErrorResponse.h
//  AudioEngine
//
//  Created by Alex Glenn on 4/7/16.
//  Copyright © 2016 Findaway World. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FAEAPIFieldError : NSObject
@property NSString *field;
@property NSString *code;

-(id)initWithField:(NSString*)field code:(NSString*)code;
+(id)fieldErrorFromDictionary:(NSDictionary*)dictionary;
@end


@interface FAEAPIErrorResponse : NSObject

@property NSString *message;
@property NSString *code;
@property uint64_t errorNumber;
@property NSArray<FAEAPIFieldError*> *fieldErrors;
-(id)initWithMessage:(NSString*)message
                code:(NSString*)code
         errorNumber:(uint64_t)errorNumber
         fieldErrors:(NSArray<FAEAPIFieldError*>*)fieldErrors;
+(id)errorResponseFromDictionary:(NSDictionary*)dictionary;
-(NSError*)toNSError;

@end
