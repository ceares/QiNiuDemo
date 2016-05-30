//
//  TNPContactInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPContactInputForm : NSObject
@property (nonatomic,copy) NSString * userId;//用户id
@property (nonatomic,copy) NSString * cardId;//名片id
@property (nonatomic,copy) NSString * cardType;//名片类型
@property (nonatomic,copy) NSString * friendCardId;//好友名片id
@property (nonatomic,copy) NSString * friendCardType;//好友名片类型
@property (nonatomic,copy) NSString * friendUserId;//好友用户id
@property (nonatomic,copy) NSString * remarkName;//好友备注名
@property (nonatomic,copy) NSString * addComment;//申请添加好友说明
@property (nonatomic,copy) NSString * fromWhere;//来源 1 手机通讯录 2 群聊 3 查找 4 推荐 5 扫一扫 等
@property (nonatomic,copy) NSString * lastUpdateTime;//最后更新时间

@end
