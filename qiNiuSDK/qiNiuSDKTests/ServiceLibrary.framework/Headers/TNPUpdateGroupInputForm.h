//
//  TNPUpdateGroupInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUpdateGroupInputForm : NSObject
@property (nonatomic,copy)NSString * address;//描述:地址 类型：字符型 取值范围：字符
@property (nonatomic,copy)NSString * lat;//描述:纬度 类型：双精度浮点型 取值范围：双精度浮点 如：10.01
@property (nonatomic,copy)NSString * lng;//描述:经度 类型：双精度浮点型 取值范围：双精度浮点 如：10.01
@property (nonatomic,copy)NSString * des;//描述:群组简介 类型：字符型 取值范围：字符
@property (nonatomic,copy)NSString *  groupBlackImg;//描述:群组背景图片的链接 类型：字符型 取值范围：字符
@property (nonatomic,copy)NSString *  groupLogo;//描述:群组Logo 类型：字符型 取值范围：字符
@property (nonatomic,copy)NSString *  name;//描述:群组名称 类型：字符型 取值范围：字符
@property (nonatomic,copy)NSString *  spreadTitle;//描述：群组的推广语 类型：字符型 取值范围：任意字符
@property (nonatomic,copy)NSString *  cardName;//描述：名片昵称 类型：字符型 取值范围：字符
@property (nonatomic,copy)NSString *  userId;//描述:用户的id 类型：整型 取值范围：大于0的整数
@property (nonatomic,copy)NSString *  cardId;//描述：名片的id 类型：长整型 取值范围：大于0的整数

@property (nonatomic,copy)NSString *  fromFeedId;//创建活动名片的FeedId
@property (nonatomic,copy)NSString *  cardType;//描述:名片类型 类型：整型 取值范围：1、个人名片 2、组织名片 3、员工名片
@property (nonatomic,copy)NSString *  groupId;//描述：群组的id 类型：长整型 取值范围：大于0的整数

@property (nonatomic,copy)NSString *  toFeedId;//群组feedId
@property (nonatomic,copy)NSString *  enrollType;// 描述:报名模式 类型：整型 取值范围：0、开放模式 1、申请模式 2、邀请模式
@property (nonatomic,copy)NSString *  isAutoCheck;// 描述:是否自动审核 类型：整型 取值范围：1、打开自动审核 0、不打开自动审核 默认为1
@property (nonatomic,copy)NSString *  applyContent;//描述:申请表 类型：字符型 取值范围：字符型，一般为json格式字符串
@property (nonatomic,copy)NSString *  membersIsOpenToOut;// 描述:成员名单是否对外公开 类型：整型 取值范围：1、公开 0、不公开
@property (nonatomic,copy)NSString *  membersIsOpenToIn;// 描述:成员名单是否对内公开 类型：整型 取值范围：1、公开 0、不公开
@property (nonatomic,copy)NSString *  groupMember;//描述:邀请成员id串 类型：字符型 取值范围：字符型 格式为：名片idA名片类型！名片idA名片类型 如1A1!2A1
@property (nonatomic,copy)NSString *  broadcastCategory;//描述:广播大类 类型：字符型 取值范围：字符型 格式为：类型id，类型id 如：1,2,3
@property (nonatomic,copy)NSString *  broadcastSubCategory;//描述:广播子类 类型：字符型 取值范围：字符型 格式为：类型id，类型id 如：1,2,3
@property (nonatomic,copy)NSString *  isActivityEnable;//描述:是否开启推荐活动 类型：整型 取值范围：1、启动 0、不启动
@property (nonatomic,copy)NSString *  isActivityPublic;//描述:推荐活动是否对匿名访问公开 类型：整型 取值范围：1、公开 0、不公开
@property (nonatomic,copy)NSString *  isGroupEnable;//描述:是否开启推荐群组 类型：整型 取值范围：1、启动 0、不启动
@property (nonatomic,copy)NSString *  isGroupPublic; //描述:推荐群组是否对匿名访问公开 类型：整型 取值范围：1、公开 0、不公开
@property (nonatomic,copy)NSString *  searchTitle;//描述:群组搜索的关键字 类型：字符型 取值范围：字符型
@property (nonatomic,copy)NSString *  isOpenMsgRemind;//描述:是否开启消息免打扰 类型：整型 取值范围：1、开启 0、不开启
@property (nonatomic,copy)NSString *  groupMemberCount;//描述:群组成员的数量 类型：整型 取值范围：大于0的整数
@property (nonatomic,copy)NSString *  version;//描述:时间戳 类型：整型 取值范围：大于0的整数
@property (nonatomic,copy)NSString *  isSpecifyLocation;//描述：是否制定位置  类型：Integer 取值范围： 0否1是
@property (nonatomic,copy)NSString *  toonMeetingId;//描述toonMeetingId
@property (nonatomic,copy)NSString *  isDel;//isDel字段只针对群组解散  2:表示该举报群组用户已经进行点击操作

@end
