//
//  TNPCardInput.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/23.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardInput : NSObject

//昵称
@property (nonatomic,copy) NSString * title;

//推广语
@property (nonatomic,copy) NSString * subtitle;

//头像图片Id,缺省为标准url
@property (nonatomic,copy) NSString * avatarId;

//背景图
@property (nonatomic,copy) NSString * backgroundId;

//交换方法 1 开放模式 2 申请模式 3 验证模式
@property (nonatomic,copy) NSString * joinMethod;

//状态：激活状态，非激活状态，屏蔽状态，删除状态
@property (nonatomic,copy) NSString * status;

//名片id
@property (nonatomic,copy) NSString * feedId;

//card number
@property (nonatomic,copy) NSString * cardNumber;

//扩展信息
@property (nonatomic,copy) NSString * vCard;

//搜索开关 0 关  1 开
@property (nonatomic,copy) NSString * searchStatus;

//搜索字段值列表
@property (nonatomic,copy) NSString * searchFieldValue;

//拥有者用户Id
@property (nonatomic,copy) NSString * ownByUserId;

//名片使用者Id
@property (nonatomic,copy) NSString * useByUserId;

//LBS位置状态 0 指定位置 1 实时位置 2 隐藏位置
@property (nonatomic,copy) NSString * lbsStatus;

//位置明细
@property (nonatomic,copy) NSString * locationDetail;

//位置坐标 经纬度
@property (nonatomic,copy) NSString * locationCoordinate;

//地理代码
@property (nonatomic,copy) NSString * adcodes;

//国家代码
@property (nonatomic,copy) NSString * countrycode;

//商业圈
@property (nonatomic,copy) NSString * businessArea;

//使用状态 0 停用 1 启用 2 转让中 3 授权中
@property (nonatomic,copy) NSString * useStatus;

//社交属性：性别 0 男 1 女
@property (nonatomic,copy) NSString * sex;

//社交属性：年龄 1-150 之间的数字
@property (nonatomic,copy) NSString * age;

@property (nonatomic,copy) NSString * birthday;//出生日期 yyyy-MM-dd
//认证开关 0 关 1 开
@property (nonatomic,copy) NSString * authenSwitch;

//0不隐藏 1 隐藏
@property (nonatomic,copy) NSString * isOperationHide;

//社交状态  0 未设置  1  已设置
@property (nonatomic,copy) NSString * socialStatus;

//简历状态  0 未设置  1  已设置
@property (nonatomic,copy) NSString * resumeStatus;

/**
 * 名片类型 1 个人名片  2 组织名片  3 员工名片
 * 101 房通顾问 102 权证顾问
 */
@property (nonatomic,copy) NSString * cardType;

//时间戳（版本）
@property (nonatomic,copy) NSString * version;

@end
