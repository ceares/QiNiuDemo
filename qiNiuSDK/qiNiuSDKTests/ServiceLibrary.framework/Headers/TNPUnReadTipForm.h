//
//  TNPUnReadTipForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/24.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUnReadTipForm : NSObject

/**
 * 变更业务对象Id，多个以逗号隔开 eg. c_12422,c_232323,c_23033,c_23320
 */
@property (nonatomic,copy) NSString * bizIds;

@end
