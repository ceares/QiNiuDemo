//
//  TNPLinkUpInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/20.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPLinkUpInputForm : NSObject
//描述：用户id
//类型：Long
//取值：正数
@property (nonatomic,copy) NSString * userId;

//描述：feedId
@property (nonatomic,copy) NSString * feedId;

//描述：好友feedId
@property (nonatomic,copy) NSString * friendFeedId;

//描述：好友手机号
//类型：Long
//取值：正数
@property (nonatomic,copy) NSString * friendmobile;

//描述：好友备注名
@property (nonatomic,copy) NSString * remarkName;

//描述：申请添加好友说明
@property (nonatomic,copy) NSString * addComment;

//描述：来源
//类型：Integer
//取值：1 手机通讯录 2 群聊 3 查找 4 推荐 5 扫一扫 等
@property (nonatomic,copy) NSString * fromWhere;

//描述：最后更新时间
//类型：Long
//取值：正数
@property (nonatomic,copy) NSString * lastUpdateTime;

//描述：好友手机号码集合
//类型：Set
//取值：正数
@property (nonatomic,strong) NSArray * friendMobileSet;

//描述：好友手机号码对应的保存姓名
//类型：Map
@property (nonatomic,strong) NSDictionary * friendMobileNick;

//描述：单个的手机号对应的保存姓名
//类型：String
@property (nonatomic,copy) NSString * mobileNickname;
@end
