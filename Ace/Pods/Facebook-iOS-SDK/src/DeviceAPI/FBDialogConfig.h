/*
 * Copyright 2010-present Facebook.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

extern NSString *const FBDialogConfigurationNameDefault;
extern NSString *const FBDialogConfigurationNameLogin;
extern NSString *const FBDialogConfigurationNameSharing;
extern NSString *const FBDialogConfigurationNameLike;
extern NSString *const FBDialogConfigurationNameMessage;
extern NSString *const FBDialogConfigurationNameShare;

extern NSString *const FBDialogConfigurationFeatureUseNativeFlow;
extern NSString *const FBDialogConfigurationFeatureUseSafariViewController;

@interface FBDialogConfig : NSObject <NSCoding>

+ (instancetype)dialogConfigWithDictionary:(NSDictionary *)dictionary;
+ (BOOL)useNativeDialogForDialogName:(NSString *)dialogName;
+ (BOOL)useSafariViewControllerForDialogName:(NSString *)dialogName;


@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSURL *URL;
@property (nonatomic, copy, readonly) NSArray *versions;

@end
