//
//  ServiceRequest+DaRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/19.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (DaRequest)

/** 设备信息接口
 
 data传入字段：
 "ot":操作类型              // 非空  1.启动toon 5.登录toon  2.退出toon 6.杀死toon进程
 "sf":启动标识              // 非空 客户端生成的UUID，在一个启动退出过程中保持唯一
 "dn":设备号,               // 非空 优先取imei号，如果为空取mac
 "ui":用户ID,               //非登陆情况下为空
 "dc":设备型号,              //机型
 "os":操作系统,              // 非空 运行应用的操作系统
 "ov":操作系统版本,           // 非空 运行应用的操作系统版本号
 "tv":TOON版本,              // 非空
 "bv":TOON-Bulid版本,        // 非空
 "rs":	分辨率,              //运行应用的设备屏幕分辨率
 "nw":网络情况（联网方式）,     // 非空 1:WIFI 2:4G 3:3G 4:GPRS 5:其他
 "op":运营商,                 // 非空  1中国移动 2中国电信 3中国联通 4其他
 "ch":渠道,                   // 非空 产品来源
 "at":激活,                   // 非空 1第一次启动 0 非第一次启动
 "dv":数据版本                 // 非空 当前取值为 4 注：后续弱改动版本号另行通知

 
 */
- (void)saveDeviceInfoWithTNP:(TNPDaSaveDeviceInfoInputForm *)TNP
                           succeed:(void(^)(NSDictionary *))succeed
                           failure:(void(^)(NSError *))failure;


/** 	功能操作信息接口
 data传入字段：
 "sf": 启动标识     // 非空 客户端生成的UUID，在一个启动退出过程中保持唯一
 "dn":设备号       // 设备号 优先取imei号，如果为空取mac
 "ui":用户ID       // 非空
 "ci":名片ID,
 "ft":功能类型,     // 非空 1基本功能，2插件，3应用
 "fi":功能ID        // 非空 1、	基本功能详见功能ID列 2、	插件为插件ID 3、	应用为应用ID
 "bc":业务入口分类   //1.	群组8宫格操作 2.	名片8宫格操作 3.	查看通知操作 4.	聊伴内容点击 其他功能操作该字段为空
 "bd":业务数据      //1.	群组8宫格操作：群组id2.	名片8宫格操作：名片id 3.	查看通知操作：messageId 4.	聊伴内容点击：聊伴数据id
 "dv":数据版本      //当前取值为3 注：后续弱改动版本号另行通知
 */
- (void)saveOperInfoWithTNP:(TNPDaSaveOperInfoInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

/** MWAP操作信息接口
 data传入字段：
 启动标识	sf	startFalg	字符		toon
 设备号	dn	devicesNumber	字符		toon
 用户id	ui	userID	字符	用户id     	toon
 数据版本	dv	dataVersion	字符	当前取值为2注：后续若改动版本号另行通知	toon
 名片id	ci	cardID	字符	名片id	H5
 Cookie信息	ck	cookie	字符	网站Cookie信息	H5
 应用/插件ID	ai	appPlugID	字符		H5
 应用/插件版本	av	appPlugVersion	字符	字符	H5
 来源页	rf	referrer	字符	当前页的来源	H5
 当前页url	url	url	字符	当前页url	H5
 页面title	ti	title	字符	页面title	H5
 功能点操作信息	ot	operation	字符	页面的操作信息 H5
 */
- (void)saveMwapInfoWithTNP:(TNPDaSaveMwapInfoInputForm *)TNP
                    succeed:(void(^)(NSDictionary *))succeed
                    failure:(void(^)(NSError *))failure;


@end
