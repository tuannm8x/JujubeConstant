//
//  Constant.h
//  Tuvi2014
//
//  Created by Tuan on 11/24/13.
//  Copyright (c) 2013 JujubeSoftware. All rights reserved.
//

#import <Foundation/Foundation.h>

#define Is_IPhone           [UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPhone
#define Is_IPad               [UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad
#define Is_IPhone5                  (Is_IPhone && [[UIScreen mainScreen] bounds].size.height == 568)
#define Is_IPhone4                   (Is_IPhone && [[UIScreen mainScreen] bounds].size.height < 568)
#define Is_iPhone6Plus              (Is_IPhone && [[UIScreen mainScreen] bounds].size.height == 736)
#define Is_iPhone6                  (Is_IPhone && [[UIScreen mainScreen] bounds].size.height == 667)

#define FONT_WITH_NAME_SIZE(n,s)                                      [UIFont fontWithName:n size:s]

#define DLog(...){if(NEED_DEBUG) NSLog(@"[CLASS: %@]%s[LINE: %d]%@", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __func__, __LINE__, [NSString stringWithFormat:__VA_ARGS__]);}

#define JLog(...) {if(NEED_DEBUG) NSLog(@"%s%@", __func__,[NSString stringWithFormat:__VA_ARGS__]);}
#define JLogObject(v)                                                                  JLog(@"%@",v)

#define NEED_DEBUG                                                                                 1

#define CURRENT_VERSION                                     [[UIDevice currentDevice] systemVersion] 
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([CURRENT_VERSION compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([CURRENT_VERSION compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([CURRENT_VERSION compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([CURRENT_VERSION compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([CURRENT_VERSION compare:v options:NSNumericSearch] != NSOrderedDescending)

#define SYSTEM_VERSION_7                                                                      @"7.0"
#define SYSTEM_VERSION_8                                                                      @"8.0"

#define STANDARD_USERDEFAULT                                   [NSUserDefaults standardUserDefaults]


#define EMPTY_STRING                                                                             @""

@interface Constant : NSObject

@end
