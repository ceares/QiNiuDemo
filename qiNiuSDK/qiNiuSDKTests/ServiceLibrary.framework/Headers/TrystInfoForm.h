//
//  TrystInfoForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/29.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TrystInfoForm : NSObject
//描述：用户id 类型:Long
@property (nonatomic, copy) NSString *userId;

//描述：名片feedId 类型:String
@property (nonatomic, copy) NSString *feedId;

//描述：名片头像 类型：String

@property (nonatomic, copy) NSString *avatarId;

//描述：性别 类型:Integer  取值范围：0：男 1：女
@property (nonatomic, copy) NSString *sex;

//描述：年龄 类型：Integer 取值范围 1-150 之间的数字
@property (nonatomic, copy) NSString *age;
@end
