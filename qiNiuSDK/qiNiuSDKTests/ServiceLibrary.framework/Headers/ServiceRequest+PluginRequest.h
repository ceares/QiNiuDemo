//
//  ServiceRequest+PluginRequest.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (PluginRequest)

/****************************插件库相关接口**********************************/

/** 获取功能插件列表及推荐广告列表
 
 userId：用户id
 
 source： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
 */
- (void)obtainFunctionPluginWithTNP:(TNPFunPluginInputForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                 failure:(void(^)(NSError *))failure;
/** 获取已使用的插件
 
 userId：用户id
 
 source： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
 
 feedId：来源ID
 */
- (void)obtainUsedFunctionPluginWithTNP:(TNPMyFunPluginInputForm *)TNP
                          succeed:(void(^)(NSArray *))succeed
                          failure:(void(^)(NSError *))failure;

/** 增加功能插件
 
 userId：用户id
 
 source： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
 
 pluginId ：为1-13、获取功能插件列表中对应的id
 
 feedId：来源ID
 
 useScope:企业可以有三种形式添加插件     1.添加插件给自己用   2.添加插件给所有员工  3.添加插件给部分员工  (企业添加插件时才传该参数)
 
 appName:插件名称     (轻链接的名称)  可选
 
 pluginIcon:自定义插件icon （轻链接的显示图标）  可选
 
 linkContent：轻链接 指向的内容 （前端传入 json格式   linkType： 1 为feedId   0为其他链接    content：对应的feedId或者url）  轻链接操作时才传此值
 */
- (void)addFunctionPluginWithTNP:(TNPMyFunPluginInputForm *)TNP
                            succeed:(void(^)())succeed
                            failure:(void(^)(NSError *))failure;

/** 删除功能插件
 
 userId：用户id
 
 source： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
 
 pluginId：插件ID
 
 myFunId：我的插件id
 
 feedId：来源ID
 
 //描述：插件类型
 
 //类型：Integer
 
 //取值：1  内容型插件  2 非内容型插件
 
 private String pluginType;
 */
- (void)deleteFunctionPluginWithTNP:(TNPMyFunPluginInputForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;

/** 修改功能插件
 
 userId：用户id
 
 source： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
 
 appName:插件名称
 
 myFunId：我的插件id
 
 feedId：活动ID
 
 pluginIcon:自定义插件icon （可选）
 
 linkContent：轻链接 指向的内容 （前端传入 json格式   linkType： 1 为feedId   0为其他链接    content：对应的feedId或者url） 轻链接操作时才传此值
 */
- (void)updateFunctionPluginWithTNP:(TNPMyFunPluginInputForm *)TNP
                                succeed:(void(^)())succeed
                                failure:(void(^)(NSError *))failure;

/** 将插件绑定给员工/card 或删除已经绑定的名片  或管理员 （维护在哪儿出现）
 
 userId：用户id
 
 source： 2:个人名片 15:企业名片
 
 myFunId：我的插件id
 
 //新增加的管理员列表
 
 String addAdminIds
 
 //新增加的使用人员列表
 
 String addShowIds
 
 //本次操作删除的管理员列表
 
 String delAdminIds
 
 //本次操作删除的使用人员列表
 
 String delShowIds
 
 //描述：服务ID
 
 //类型：Long
 
 private String serviceId;
 
 //描述：当为组织给员工添加时插件时， 传组织id（用于清除缓存）
 
 //类型：String
 
 private String feedId；
 */
- (void)updateShowAdminIdsWithTNP:(TNPMyFunPluginInputForm *)TNP
                                succeed:(void(^)())succeed
                                failure:(void(^)(NSError *))failure;

/** 添加插件评论
 
 
 必传TNP参数
 
 //描述： 用户ID
 
 //类型：Long
 
 private String userId;
 
 //描述： 用户名片ID
 
 //类型：String
 
 private String cardFeedId;
 
 //描述： 评论内容
 
 //类型：String
 
 private String commentContent;
 
 //描述： 组件id：可以是具体活动id；或其他具体应用的id
 
 //类型：String
 
 private String feedId;
 
 //描述： 数据来源
 
 //类型：int
 
 //取值：
 
 private String source;
 
 //描述： 插件的主键id
 
 //类型：Long
 
 private String pluginId;
 

 */
- (void)addCommentWithTNP:(TNPMsgCommentInputForm *)TNP
                              succeed:(void(^)())succeed
                              failure:(void(^)(NSError *))failure;

/** 获取插件评论
 
 TNP必传参数
 
 //描述： 用户ID
 
 //类型：Long
 
 private String userId;
 
 //描述： 数据来源
 
 //类型：int
 
 //取值：
 
 private String source;
 
 //描述： 插件的主键id
 
 //类型：Long
 
 private String pluginId;
 
 //描述： 开始id
 
 //类型：Long
 
 private String sinceId;
 
 //描述： 结束id
 
 //类型：Long
 
 private String maxId;
 
 //描述： 分页查询-每页几条
 
 //类型：int
 
 private String limit;
 */
- (void)obtainCommentListWithTNP:(TNPMsgCommentInputForm *)TNP
                      succeed:(void(^)(NSArray *))succeed
                      failure:(void(^)(NSError *))failure;

/** 功能插件排序接口
 //用户ID
 
 private Long userId;
 
 //请求来源
 
 private Integer source;
 
 //描述：组件id：可以是具体活动id；或其他具体应用的id  名片ID,用户ID 群组ID等
 
 //类型：String
 
 private String feedId;
 
 //我的插件的列表信息
 
 private List<TNPMyFunPluginInputForm> myFunPluginList;
 */
- (void)updateFunPluginSortWithTNP:(TNPMyFunPluginListInputForm *)TNP
                             succeed:(void(^)(NSArray *))succeed
                             failure:(void(^)(NSError *))failure;


/** 获取推荐的插件图标库
 必填参数
 
 //描述：请求来源  1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
 
 private Integer source;//必填
 
 myFunId;//添加的插件Id（栏目插件使用）
 
 pluginId; //插件的Id（栏目插件使用）
 
 */
- (void)obtainSuggestIconsWithTNP:(TNPFunPluginInputForm *)TNP
                           succeed:(void(^)(NSArray *))succeed
                           failure:(void(^)(NSError *))failure;

/** 修改栏目插件
 参数说明：
 
 userId：用户id
 
 source：  3:用户中心
 
 appName:插件名称
 
 myFunId：我的插件id
 
 feedId：活动ID
 
 pluginIcon:自定义插件icon （可选）
 */
- (void)updateContentPluginWithTNP:(TNPMyFunPluginInputForm *)TNP
                          succeed:(void(^)())succeed
                          failure:(void(^)(NSError *))failure;
/** 根据命名空间获取插件列表
 参数说明：
 
 nameSpace 域命名（必填）
 */
- (void)obtainPluginListByNamespaceWithTNP:(TNPFunPluginInputForm *)TNP
                           succeed:(void(^)(NSArray *))succeed
                           failure:(void(^)(NSError *))failure;

/** 根据命名空间获取应用列表
 参数说明：
 
 nameSpace 域命名（必填）
 */
- (void)obtainAppInfoByNamespaceWithTNP:(TNPAppInfoInputForm *)TNP
                                   succeed:(void(^)(NSDictionary *))succeed
                                   failure:(void(^)(NSError *))failure;

/** 根据根据插件ID获取插件推荐名称和业务类型
 参数说明：
 
 npluginId 插件Id（必填）
 */
- (void)obtainFunPluginInfoWithTNP:(TNPMyFunPluginInputForm *)TNP
                                succeed:(void(^)(NSDictionary *))succeed
                                failure:(void(^)(NSError *))failure;
/****************************展板库相关接口**********************************/


/** 获得显示插件类型列表
 userId：用户id （frame提供） 必填
 
 componentId：1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片  （frame提供） 必填
 */
- (void)obtainPluginListWithTNP:(TNPPluginInputForm *)TNP
                               succeed:(void(^)(NSArray *))succeed
                               failure:(void(^)(NSError *))failure;

/** 插入图文插件
 userId：用户id （frame提供）  必填
 
 cardFeedId：用户名片ID  ，当插件为用户级插件时，名片ID为空 （frame提供）  必填
 
 posterContent：图片地址
 
 posterTitle：文字内容
 
 posterSource： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片 （frame提供）  必填
 
 feedId：活动ID或群组ID等 （frame提供）       必填
 
 myPluginName：新插件名称
 
 styleContent：样式内容
 
 urlLink：跳转链接
 
 */
- (void)addPosterPluginWithTNP:(TNPPosterInputForm *)TNP
                               succeed:(void(^)())succeed
                               failure:(void(^)(NSError *))failure;

/** 插入自定义表格插件
 userId：用户id （frame提供）  必填
 
cardFeedId：用户名片FeedID  ，当插件为用户级插件时，名片FeedID为空 （frame提供）  必填
 
 sheetSource： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片 （frame提供） 必填
 
feedId：活动FeedID或群组FeedID等 （frame提供）       必填
 
 sheetContent：自定义表格内容
 
 myPluginName：新插件名称
 
 styleContent：样式内容
 
 urlLink：跳转链接
 
 */
- (void)addSheetPluginWithTNP:(TNPSheetInputForm *)TNP
                           succeed:(void(^)())succeed
                           failure:(void(^)(NSError *))failure;

/** 插入地图插件
 userId：用户id （frame提供）  必填
 
 cardFeedId：用户名片FeedID  ，当插件为用户级插件时，名片FeedID为空 （frame提供）  必填
 
 feedId：活动FeedID或群组FeedID等 （frame提供）       必填
 
 source： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片 （frame提供） 必填
 
 longitude：经度
 
 latitude：纬度
 
 url：地图url
 
 location：位置描述
 
 content ：地图内容
 
 myPluginName：新插件名称
 
 styleContent：样式内容
 
 urlLink：跳转链接
 

 */
- (void)addMapLocationPluginWithTNP:(TNPMapLocationInputForm *)TNP
                          succeed:(void(^)())succeed
                          failure:(void(^)(NSError *))failure;

/** 更新图文插件
 userId：用户id （frame提供）  必填
 
 cardFeedId：用户名片ID  ，当插件为用户级插件时，名片ID为空 （frame提供）  必填
 
 posterContent：内容
 
 posterTitle：名称
 
 posterSource： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片 （frame提供）  必填
 
 feedId：活动ID （frame提供）  必填
 
 posterId：主键ID （frame提供）  必填
 
 myPluginId：插件ID （frame提供）  必填
 
 orgMyPluginId:插件id,名片级别（frame提供）  必填
 
 styleContent：样式内容
 
 urlLink：跳转链接
 

 */
- (void)updatePosterPluginWithTNP:(TNPPosterInputForm *)TNP
                                succeed:(void(^)())succeed
                                failure:(void(^)(NSError *))failure;

/** 更新自定义表格插件
 userId：用户id （frame提供）  必填
 
 myPluginId：我的插件ID （frame提供）  必填
 
 cardFeedId：用户名片FeedID  ，当插件为用户级插件时，名片FeedID为空 （frame提供）  必填
 
 feedId：活动FeedID或群组FeedID等 （frame提供）       必填
 
 orgMyPluginId：对应的用户插件的原始 （frame提供）  必填
 
 sheetId：自定义表格主键ID （frame提供）  必填
 
 sheetStatus：状态值 当删除时，传值0
 
 sheetContent：自定义表格内容
 
 styleContent：样式内容
 
 urlLink：跳转链接
 
 */
- (void)updateSheetPluginWithTNP:(TNPSheetInputForm *)TNP
                              succeed:(void(^)())succeed
                              failure:(void(^)(NSError *))failure;

/** 更新地图插件
 userId：用户id （frame提供）  必填
 
 mapLocationId：主键ID （frame提供）  必填
 
 myPluginId：我的插件ID （frame提供）  必填
 
 orgMyPluginId：对应的用户插件的原始 （frame提供）  必填
 
 cardFeedId：用户名片FeedID  ，当插件为用户级插件时，名片FeedID为空 （frame提供）  必填
 
 feedId：活动FeedID或群组FeedID等 （frame提供）       必填
 
 source： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片 （frame提供）必填
 
 longitude：经度
 
 latitude：纬度
 
 url：地图url
 
 location：位置描述
 
 content ：地图内容
 
 styleContent：样式内容
 
 urlLink：跳转链接
 
 */
- (void)updateMapLocationPluginWithTNP:(TNPMapLocationInputForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;

/** 插入我的插件(用户级别的展板，赋予具体名片使用时)
 userId：用户id （frame提供）  必填
 
 cardFeedId：用户名片ID （frame提供）  必填
 
 pluginId：插件Id （frame提供）  必填
 
 componentId：插件类型  1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片 （frame提供） 必填
 
 feedId：类型为时对应的活动id或群组ID等 （frame提供） 必填
 
 orgMyPluginId：对应的用户插件ID （frame提供）  必填
 */
- (void)addMyPluginWithTNP:(TNPMyPluginInputForm *)TNP
                                   succeed:(void(^)())succeed
                                   failure:(void(^)(NSError *))failure;


/** 更新我的展板配置（更新展板的展示开关、自定义展板名称等）
 userId：用户id（从基础参数中获得）  必填
 
 myPluginId：主键id 必填
 
 cardFeedId：名片ID 必填
 
 //sort：排序 数值类型（可选）
 
 componentId：插件来源类型 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片 必填
 
 feedId：活动ID 必填
 
 myPluginName：修改插件名字 （可选）
 
 publicStatus：2好友公开 1公开 0不公开（可选）
 
 orgUserObjId：原始插件的从属ID 必填
 
 orgUserObjType：原始插件类型 必填
 
 orgMyPluginId ：对应绑定的原始的myPluginId 必填
 */
- (void)updateMyPluginWithTNP:(TNPMyPluginInputForm *)TNP
                       succeed:(void(^)())succeed
                       failure:(void(^)(NSError *))failure;

/** 删除我添加的展板
 userId：用户id 必填
 
 cardFeedId：用户名片ID 必填
 
 myPluginId：插件id 必填
 
 orgMyPluginId ：对应绑定的原始的myPluginId 必填
 
 componentId：1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8: 收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片 必填
 
 feedId：当类型为活动时，对应的活动ID或群组ID等 必填
 */
- (void)deleteMyPluginWithTNP:(TNPMyPluginInputForm *)TNP
                          succeed:(void(^)())succeed
                          failure:(void(^)(NSError *))failure;

/** 维护使用插件的名片列表（在哪儿出现）
 userId：用户id  必填
 
 cardFeedId：用户名片ID  必填
 
 pluginId：插件Id  必填
 
 componentId：插件类型  1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片  必填
 
 feedId：类型为时对应的活动id  必填
 
 mypluginId:我的展板插件主键id
 
 orgMyPluginId：对应的用户插件ID  （不为空时必填，对应frame中的bindMyPluginId）
 
 addShowIds：新增授权可查看人员id     格式 ：cardId| componentId, cardId| componentId
 
 delShowIds：删除可查看人员id   格式 ：cardId| componentId, cardId| componentId
 */
- (void)updateUsePluginCardListWithTNP:(TNPMyPluginInputForm *)TNP
                          succeed:(void(^)())succeed
                          failure:(void(^)(NSError *))failure;



/****************************应用相关接口**********************************/

/**获得未注册的应用列表
 //描述： 具体类型的实体ID
 //类型：String
 private String feedId;
 
 //描述： 实体类型
 //类型：Integer
 //取值：1 活动 , 2 个人名片, 3 用户, 13 群组, 15 企业(组织)名片, 16 员工名片;
 */
- (void)obtainUnRegAppWithTNP:(TNPAppRegInputForm *)TNP
                      succeed:(void(^)(NSArray *))succeed
                      failure:(void(^)(NSError *))failure;
/*
 获得已经注册的应用列表
 //描述： 具体类型的实体ID
 
 //类型：String
 //取值：大于0
 private String feedId;
 
 //描述： 实体类型
 //类型：Integer
 //取值：1 活动 , 2 个人名片, 3 用户, 13 群组, 15 企业(组织)名片, 16 员工名片;
 private String objectType;
 */
- (void)obtainRegAppWithTNP:(TNPAppRegInputForm *)TNP
                      succeed:(void(^)(NSArray *))succeed
                      failure:(void(^)(NSError *))failure;

/*
 获得应用列表
 source:来源  必填
 */
- (void)obtainAppListWithTNP:(TNPAppInputForm *)TNP
                    succeed:(void(^)(NSDictionary *))succeed
                    failure:(void(^)(NSError *))failure;

/*
 获得已使用的应用列表
 source:来源  必填
 userId
 */
- (void)obtainUsedAppListWithTNP:(TNPAppInputForm *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;

/*
 获取未安装应用
 source:取值：1 活动 , 2 个人名片, 3 用户, 13 群组, 15 企业(组织)名片, 16 员工名片;
 userId
 */
- (void)obtainUnUsedAppListWithTNP:(TNPAppInputForm *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;

/*
 获得应用列表(包含分类及是否安装标识)
 //描述： 具体类型的实体ID
 
 //类型：Long
 
 //取值：大于0
 
 private Long   userId;
 
 //描述： 实体类型
 
 //类型：Integer
 
 //取值：1 活动 , 2 个人名片, 3 用户, 13 群组, 15 企业(组织)名片, 16 员工名片;
 
 private Integer source;
 */
- (void)obtainAllAppListWithTNP:(TNPAppInputForm *)TNP
                           succeed:(void(^)(NSDictionary *))succeed
                           failure:(void(^)(NSError *))failure;


/*
 获取输入面板常用应用接口
 */
- (void)getInputPanelAppWithTNP:(TNPInputPanelAppInputForm *)TNP
                         succeed:(void(^)(NSArray *))succeed
                        failure:(void(^)(NSError *))failure;


/*
 添加应用
 source:来源  必填
 
 userId
 
 appId  应用的id 必填
 */
- (void)addAppWithTNP:(TNPAppInputForm *)TNP
              succeed:(void(^)(NSDictionary *))succeed
              failure:(void(^)(NSError *))failure;
/*
获得有公共库服务压缩包存储id列表（mwap调用）
 
 参数TNP：无
 */
- (void)obtainPublicServiceWithsucceed:(void(^)(NSArray *))succeed
                            failure:(void(^)(NSError *))failure;

/*
 删除应用
 userId ：用户主键id 必传
 
 appId  应用的id 必填
 */
- (void)delAppWithTNP:(TNPAppInputForm *)TNP
              succeed:(void(^)())succeed
              failure:(void(^)(NSError *))failure;

/*
 获取服务列表
 
 参数TNP：无
 */
- (void)obtainServiceAppWithsucceed:(void(^)(NSArray *))succeed
                                    failure:(void(^)(NSError *))failure;

/*
 获取社区列表
 
 参数TNP：无
 */
- (void)obtainCommunityAppWithsucceed:(void(^)(NSArray *))succeed
                            failure:(void(^)(NSError *))failure;

/*
 获取社交新接口(已废弃)
 
 参数TNP：无
 */
- (void)getSocialAppFormWithsucceed:(void(^)(NSDictionary *))succeed
                              failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(2_0, 2_0, "Use -obtainSocialAppWithTNP:succeed:failure:");

/*
 获取社交新接口
 
 */
- (void)obtainSocialAppWithTNP:(TNPSocialAppInputForm *)TNP
              succeed:(void(^)(NSDictionary *))succeed
              failure:(void(^)(NSError *))failure;


/*
 获得服务增量状态
 参数说明：
 
 //描述： 增量时间
 
 //类型：Long
 
 private Long  lastDate; （第一次传0）
 */
- (void)getBizServiceStatusWithTNP:(TNPBizServiceStatusInputForm *)TNP
                       succeed:(void(^)(NSDictionary *))succeed
                       failure:(void(^)(NSError *))failure;


/*
 注册应用
 参数说明：
 //描述： 具体类型的实体ID
 
 //类型：String
 
 //取值：大于0
 
 private String feedId;
 
 //描述： 实体类型
 
 //类型：Integer
 
 //取值：1 活动 , 2 个人名片, 3 用户, 13 群组, 15 企业(组织)名片, 16 员工名片;
 
 private String objectType
 
 //类型：Long
 
 private String appId;
 */
- (void)regAppWithTNP:(TNPAppRegInputForm *)TNP
                           succeed:(void(^)(NSString *))succeed
                           failure:(void(^)(NSError *))failure;

/*
 删除已经注册的应用
 参数说明：
 //描述： 具体类型的实体ID
 
 //类型：String
 
 //取值：大于0
 
 private String feedId;
 
 //描述： 实体类型
 
 //类型：Integer
 
 //取值：1 活动 , 2 个人名片, 3 用户, 13 群组, 15 企业(组织)名片, 16 员工名片;
 
 private String objectType
 
 //类型：Long
 
 private String appId;
 */
- (void)deleteRegAppWithTNP:(TNPAppRegInputForm *)TNP
              succeed:(void(^)(NSString *))succeed
              failure:(void(^)(NSError *))failure;

@end
