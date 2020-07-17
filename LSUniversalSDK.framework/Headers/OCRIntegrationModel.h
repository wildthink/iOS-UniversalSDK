//
//  OCRIntegrationModel.h
//  LSUniversalSDK
//
//  Created by Ben Maad on 17/06/2020.
//  Copyright © 2020 SightCall. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OCRIntegrationModel : NSObject

@property (nonatomic) NSString *idIntegration;
@property (nonatomic) NSString *attributeName;

- (instancetype)initWithDictionary:(NSDictionary*)dictionary;

@end

NS_ASSUME_NONNULL_END