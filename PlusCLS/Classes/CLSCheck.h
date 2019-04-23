//
//  CLSCheck.h
//  CLSCheck
//
//  Created by 公用 on 2019/4/23.
//  Copyright © 2019年 cc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CLSCheckTool : NSObject

+(CLSCheckTool*) sharedInstance;

- (BOOL) checkLocal:(NSString*) dtStr seed : (int) seed Appid:(NSString*) appid  Type:(BOOL*) isIOS;

@end
