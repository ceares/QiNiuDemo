//
//  TNPCardInputForm.h
//  systemModelDemo
//
//  Created by 吴春旭 on 15/5/12.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardInputForm : NSObject

//描述：昵称
//类型：String
@property (nonatomic,copy) NSString* title;
//描述：推广语
//类型：String
@property (nonatomic,copy) NSString* subtitle;
//描述：图片Id,缺省为标准url
//类型：String
@property (nonatomic,copy) NSString* avatarId;
//描述：背景图
//类型：String
@property (nonatomic,copy) NSString* backgroundId;
//描述：交换方法
//类型：Integer
//取值：1 开放模式 2 申请模式 3 验证模式
@property (nonatomic,copy) NSString* joinMethod;
//描述：名片feedId
//类型：String
@property (nonatomic,copy) NSString* feedId;
//描述：名片号
//类型：String
@property (nonatomic,copy) NSString* cardNumber;
//描述：扩展信息
//类型：String
@property (nonatomic,copy) NSString* vCard;
//描述：搜索开关
//类型：Integer
//取值：0 关  1 开
@property (nonatomic,copy) NSString* searchStatus;

//描述：搜索字段值
//类型：String
@property (nonatomic,copy) NSString* searchFieldValue;

//描述：名片传播子分类
//类型：String
//取值：英文逗号分隔
//@property (nonatomic,copy) NSString* spreadSubCategorys;
//描述：拥有者用户Id
//类型：Long
//取值：大于0的数值
@property (nonatomic,copy) NSString* ownByUserId;
//描述：名片使用者Id
//类型：Long
//取值：大于0的数值
@property (nonatomic,copy) NSString* useByUserId;
//描述：LBS位置状态
//类型：Integer
//取值：0 指定位置 1 实时位置 2 隐藏位置
@property (nonatomic,copy) NSString* lbsStatus;
//描述：位置明细
//类型：String
@property (nonatomic,copy) NSString* locationDetail;
//描述：位置坐标 经纬度（维度,经度）
//类型：String
@property (nonatomic,copy) NSString* locationCoordinate;
//地理代码
@property (nonatomic,copy) NSString* adcodes;
//商业区
@property (nonatomic,copy) NSString* businessArea;
//国家代码
@property (nonatomic,copy) NSString* countrycode;
//描述：使用状态
//类型：Integer
//取值：0 停用 1 启用 2 转让中 3 授权中
@property (nonatomic,copy) NSString* useStatus;
//描述：社交属性：性别
//类型：Integer
//取值：0 男 1 女
//@property (nonatomic,copy) NSString* sex;
//描述：社交属性：年龄
//类型：Integer
//取值：1-150 之间的数字
//@property (nonatomic,copy) NSString* age;
//描述：社交属性 json格式
//类型：String
//@property (nonatomic,strong) NSString* socialPropertyFieldValue;
//描述：时间戳（版本）1970年到现在的毫秒数
//类型：Long
//取值：非负数值
@property (nonatomic,copy) NSString* version;
//描述：认证开关
//类型：Integer
//取值：0 关 1 开
@property (nonatomic,copy) NSString* authenSwitch;
//描述：名片类型
//类型：Integer
//取值：1 个人名片 2 组织名片 3 员工名片 101 房通顾问 102 权证顾问
@property (nonatomic,copy) NSString* cardType;
/**
 * 是否使用许可证 0 不使用，1 使用
 */
@property (nonatomic,copy) NSString* useLicense;

@end
