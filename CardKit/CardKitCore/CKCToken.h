//
//  NSObject+CKCToken.h
//  Core
//
//  Created by Alex Korotkov on 11/12/20.
//  Copyright © 2020 AnjLab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CKCTokenResult.h"
#import "CKCBindingParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface CKCToken: NSObject
- (instancetype) init NS_UNAVAILABLE;
+ (CKCTokenResult *) generateWithBinding: (CKCBindingParams *) params;
@end

NS_ASSUME_NONNULL_END
