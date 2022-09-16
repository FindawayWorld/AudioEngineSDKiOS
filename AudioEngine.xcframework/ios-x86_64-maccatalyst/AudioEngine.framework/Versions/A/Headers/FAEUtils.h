//
//  AEUtils.h
//  AudioEngine
//
//  Created by Cory Breed on 4/12/16.
//  Copyright © 2016 Findaway World. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Helper Method used to ensure a block is onvoked on the main thread syncronously
 *
 *  @param block - block to be dispatched to the main thread
 */
FOUNDATION_EXPORT void FAERunOnMainThreadSync(void(^_Nonnull block)(void));

/**
 *  Helper Method used to ensure a block is onvoked on the main thread asynconously
 *
 *  @param block - block to be dispatched to the main thread
 */
FOUNDATION_EXPORT void FAERunOnMainThreadAsync(void(^_Nonnull block)(void));


@interface FAEUtils : NSObject

/**
 *  Generates a 128-bit unique identifier in the form
 *
 *  @return UUID in the form XXXX-XXXX-XXXX-XXXXXXXX-XXXX
 */
+(nonnull NSString *)generateUUID;


/**
 *  Validates a string against the following criteria
 *      - Non-null
 *      - Not empty
 *
 *  @param param - String to be evaluated
 *
 *  @return YES if validated, NO otherwise
 */
+(BOOL)validateStringParam:(nullable NSString *)param;

@end

