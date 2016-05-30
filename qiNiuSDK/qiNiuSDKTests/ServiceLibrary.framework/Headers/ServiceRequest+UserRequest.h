//
//  ServiceRequest+UserRequest.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import "ServiceRequest.h"

@interface ServiceRequest (UserRequest)

/** 登录接口
 
 必传参数：
 
 //描述：登录帐号
 //类型：String
 private String mobile;
 //描述：密码
 //类型：String
 private String password;
 //描述：登录模式(1密码登录，2验证码登录，3其他方式登录（无需任何验证）)
 //类型：String
 private String loginType;
 //描述：设备信息（用于校验是否更换设备），ios为设备信息，安卓与deviceId相同
 //类型：String
 private String uuid
 //描述：设备名称：比如华为，iphone等
 //类型：String
 private String deviceName;
 //描述：app版本,比如：linli-1.0.0
 //类型：String
 private String appVersion;
 //描述：toon账号类型
 //类型：String
 private String teleCode;

 */
- (void)userLoginWithTNP:(TNPUserLoginInputForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                 failure:(void(^)(NSError *))failure;

/** 注册接口
 
 必传参数：
 
 //描述：注册手机号
 //类型：String
 private String mobile;
 //描述：渠道 分发渠道
 //类型：String
 private String channel;
 */
- (void)userRegisterWithTNP:(TNPUserRegisterInputForm *)TNP
                    succeed:(void(^)(NSDictionary *))succeed
                    failure:(void(^)(NSError *))failure;

/** 发送短信验证码接口
 
 必传参数：
 
 //描述：手机号
 //类型：String
 private String mobile;//手机号
 */
- (void)userMobileVerfiyCodeSendWithTNP:(TNPUserMobileVerfiyCodeSendInputForm *)TNP
                                succeed:(void(^)(NSDictionary *))succeed
                                failure:(void(^)(NSError *))failure;

/** 校验短信验证码接口
 
 /描述：手机号
 //类型：String
 private String mobile;
 //描述：手机短信验证码
 //类型：String
 private String mobileVerfiyCode;
 */
- (void)userMobileVerfiyCodeCheckWithTNP:(TNPUserMobileVerfiyCodeCheckInputForm *)TNP
                                 succeed:(void(^)())succeed
                                 failure:(void(^)(NSError *))failure;


/** 向安全邮箱发送验证码
 
 必传参数：
 
 //描述：手机号
 //类型：String
 private String mobile;
 */
- (void)userEmailVerfiyCodeSendWithTNP:(TNPUserEmailVerfiyCodeSendInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;


/** 安全问题登录
 
 必传参数：
 //描述：账号
 //类型：String
 private String mobile;
 //描述：安全问题答案（采用格式例如：1-谢谢@2-谢谢@3-谢谢    注：1.2.3 代表预先设定好的问题序号）
 //类型：String
 private String secretQuestion;
 //描述：设备信息（用于校验是否更换设备），ios为设备信息，安卓与deviceId相同
 //类型：String
 private String uuid
 */
- (void)userSecretQuestionLoginWithTNP:(TNPUserSecretQuestionLoginInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;


/** 检查用户是否注册
 
 必传参数：
 
 //描述：手机号
 //类型：String
 private String mobile;
 //描述：设备id ios为用户设备ID，安卓同deviceId
 //类型：String
 private String uuid;
 */
- (void)userCheckRegisterWithTNP:(TNPUserCheckRegisterInputForm *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;


/** 用户退出
 
 必传参数：
 
 //描述：用户ID
 //类型：Long
 private String userId;
 //描述：用户token
 //类型：String
 private String token;
 */
- (void)userQuitWithTNP:(TNPUserQuitInputForm *)TNP
                succeed:(void(^)())succeed
                failure:(void(^)(NSError *))failure;


/** 设置用户安全问题
 
 必传参数：
 
 //描述：用户ID
 //类型：Long
 private String userId;
 //描述：用户安全问题（采用格式例如：1-谢谢@2-谢谢@3-谢谢    注：1.2.3 代表预先设定好的问题序号）
 //类型：String
 private String secretQuestion;
 */
- (void)userSetSecretQuestionsWithTNP:(TNPUserSetSecretQuestionsInputForm *)TNP
                              succeed:(void(^)())succeed
                              failure:(void(^)(NSError *))failure;

/** 校验验证码并注册
 
 必传参数：
 
 //描述：手机号
 //类型：String
 private String mobile;
 //描述：短信验证码
 //类型：String
 private String mobileVerfiyCode;
 //描述：设备名称：比如华为，iphone等
 //类型：String
 private String deviceName;
 
 //描述：来源渠道
 //类型：String
 private String channel;
 */
- (void)userCheckMobileVerfiyCodeAndRegisterWithTNP:(TNPUserCheckMobileVerfiyCodeAndRegisterInputForm *)TNP
                                            succeed:(void(^)(NSDictionary *))succeed
                                            failure:(void(^)(NSError *))failure;

/** 通过邮箱修改密码
 
 必传参数：
 
 //描述：手机号
 //类型：String
 private String mobile;
 */
- (void)userChangePasswordByEmailWithTNP:(TNPUserChangePasswordByEmailInputForm *)TNP
                          succeed:(void(^)())succeed
                          failure:(void(^)(NSError *))failure;
/** 修改密码
 
 //描述：用户ID
 //类型：Long
 private String userId;
 //描述：新密码
 //类型：String
 private String password;
 //描述：旧密码
 //类型：String
 private String oldPassword;
 //描述：修改方式，0为短信验证码修改不需要发送oldPassword；1为修改密码，需要发送oldPassword
 //类型：long
 private String type;
 //描述：登录密码启用开关 0 关 1 开
 //类型：Integer
 private String loginProtectStatus;
 */
- (void)userChangePasswordWithTNP:(TNPUserChangePasswordInputForm *)TNP
                          succeed:(void(^)())succeed
                          failure:(void(^)(NSError *))failure;

/** 修改用户手机号
 
 必传参数：
 
 //描述：用户ID
 //类型：Long
 private String userId;
 //描述：用户新手机号
 //类型：String
 private String changeToMobile;
 //描述：短信验证码
 //类型：String
 private String mobileVerfiyCode;
 */

- (void)userChangeMobileWithTNP:(TNPUserChangeMobileInputForm *)TNP
                        succeed:(void(^)())succeed
                        failure:(void(^)(NSError *))failure;

/** 修改用户邮箱
 
 必传参数：
 
 //描述：用户ID
 //类型：Long
 private String userId;
 //描述：用户邮箱
 //类型：String
 private String email;
 */
- (void)userChangeEmailWithTNP:(TNPUserChangeEmailInputForm *)TNP
                       succeed:(void(^)())succeed
                       failure:(void(^)(NSError *))failure;

/** 获取用户安全问题
 
 必传参数：
 
 //描述：手机号
 //类型：String
 private String mobile;
 */
- (void)obtainAllUserLoginQuestionsWithTNP:(TNPGetAllUserLoginQuestionsInputForm *)TNP
                                   succeed:(void(^)(NSDictionary *))succeed
                                   failure:(void(^)(NSError *))failure;

/** 添加用户收藏
 
 必传参数：
 
 //描述：收藏类型 1 名片 2 群组 3 活动4内容
 //类型：int
 private String type;
 //描述：对象id 即活动id或者收藏名片的名片ID等
 //类型：long
 private String objectId;
 //描述：收藏对象源的feedid
 //类型：String
 private String fromFeedId;
 //描述：用户ID
 //类型：Long
 private String userId;
 */
- (void)addUserCollectWithTNP:(TNPAddUserCollectInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

/** 添加常用咨询
 
 必传参数：
 
 //描述：用户Id
 //类型：Long
 private String userId;
 //描述：简单名称
 //类型：String
 private String simpleName;
 //描述：内容
 //类型：String
 private String content;
 */
- (void)addUserCommonInformationWithTNP:(TNPUserCommonInformationInputForm *)TNP
                                succeed:(void(^)(NSDictionary *))succeed
                                failure:(void(^)(NSError *))failure;

/** 添加常用位置
 
 必传参数：
 
 //描述：用户id
 //类型：Long
 private String userId;
 //描述：常用位置名称
 //类型：String
 private String name;
 //描述：地址 用户输入的
 //类型：String
 private String address;
 */
- (void)addUserCommonPositionWithTNP:(TNPUserCommonLocationInputForm *)TNP
                             succeed:(void(^)(NSDictionary *))succeed
                             failure:(void(^)(NSError *))failure;

/** 删除用户收藏
 
 必传参数：
 
 //描述：收藏ID
 //类型：long
 private String collectId;
 //描述：用户ID
 //类型：Long
 private String userId;
 */
- (void)deleteUserCollectWithTNP:(TNPDeleteUserCollectInputForm *)TNP
                         succeed:(void(^)())succeed
                         failure:(void(^)(NSError *))failure;

/** 删除常用咨询
 
 必传参数：
 
 //描述：常用咨询ID
 //类型：Long
 private String commonInformationId;
 //描述：用户ID
 //类型：Long
 private String userId;
 */
- (void)deleteUserCommonInformationWithTNP:(TNPDeleteUserCommonInformationInputForm *)TNP
                                   succeed:(void(^)())succeed
                                   failure:(void(^)(NSError *))failure;

/** 删除常用地址
 
 必传参数：
 
 //描述：常用地址
 //类型：Long
 private String commonLocationId;
 //描述：用户ID
 //类型：Long
 private String userId;//用户ID
 */
- (void)deleteUserCommonPositionWithTNP:(TNPDeleteUserCommonPositionInputForm *)TNP
                                succeed:(void(^)())succeed
                                failure:(void(^)(NSError *))failure;

/** 获取用户收藏列表
 
 必传参数：
 
 //描述：增量更新时间
 //类型：String
 private String updateTime;
 //描述：用户ID
 //类型：Long
 private String userId;
 */
- (void)obtainAllUserCollectsWithTNP:(TNPGetAllUserCollectsInputForm *)TNP
                             succeed:(void(^)( NSArray *))succeed
                             failure:(void(^)(NSError *))failure;
/** 获取用户常用咨询
 
 必传参数：
 
 //描述：用户ID
 //类型：Long
 private String userId;//用户ID
 //描述：增量更新时间
 //类型：long
 private String editTime;//增量更新时间
 */
- (void)obtainAllUserCommonInformationsListWithTNP:(TNPGetAllUserCommonInformationsListInputForm *)TNP
                                           succeed:(void(^)( NSArray *))succeed
                                           failure:(void(^)(NSError *))failure;

/** 获取用户常用地址
 
 必传参数：
 //描述：用户ID
 //类型：Long
 private String userId;//用户ID
 //描述：增量更新时间
 //类型：long
 private String editTime;//增量更新时间
 */
- (void)obtainUserCommonPositionListWithTNP:(TNPGetUserCommonPositionListInputForm *)TNP
                                    succeed:(void(^)( NSDictionary *))succeed
                                    failure:(void(^)(NSError *))failure;

/** 更新常用咨询
 
 必传参数：
 
 //描述：常用资讯Id 自增长
 //类型：Long
 private String commonInformationId;
 //描述：用户Id
 //类型：Long
 private String userId;
 */
- (void)updateUserCommonInformationWithTNP:(TNPUserCommonInformationInputForm *)TNP
                                   succeed:(void(^)())succeed
                                   failure:(void(^)(NSError *))failure;


/** 更新常用位置
 
 必传参数：
 
 //描述：常用位置id
 //类型：Long
 private String commonLocationId;
 //描述：用户id
 //类型：Long
 private String userId;
 */
- (void)updateUserCommonPositionWithTNP:(TNPUserCommonLocationInputForm *)TNP
                                succeed:(void(^)())succeed
                                failure:(void(^)(NSError *))failure;

/** 获取用户级插件
 
 必传参数：
 
 //描述：用户ID
 //类型：Long
 private String userId;
 */
- (void)obtainUserPluginItemListWithTNP:(TNPGetUserPluginItemListInputForm *)TNP
                                succeed:(void(^)(NSArray *))succeed
                                failure:(void(^)(NSError *))failure;

/** 获取用户级展板 //测试与中间插交互无问题，数据为空
 
 必传参数：
 
 //描述：用户ID
 //类型：Long
 private String userId;
 */
- (void)obtainUserShowPluginItemListWithTNP:(TNPGetUserShowPluginItemListInputForm *)TNP
                                    succeed:(void(^)(NSArray *))succeed
                                    failure:(void(^)(NSError *))failure;

/** 获取用户信息
 
 必传参数：
 
 //描述：用户ID
 //类型：Long
 private String userId;
 */
- (void)obtainUserInformationWithTNP:(TNPGetUserInformationInputForm *)TNP
                             succeed:(void(^)(NSDictionary *))succeed
                             failure:(void(^)(NSError *))failure;
/** 设置用户生日
 
 必传参数：
 
 //用户ID
 private Long userId;
 
 //用户生日格式：yyyyMMdd
 private String birthday;
 */
- (void)userChangeBirthdayWithTNP:(TNPUserChangeBirthdayInputForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;
/** 校验用户生日
 
 必传参数：
 
 //用户账号
 private String mobile;
 
 //用户生日格式：yyyyMMdd
 private String birthday;
 */
- (void)userCheckBirthdayWithTNP:(TNPUserCheckBirthdayInputForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;
/*  用户用token校验登录有效性
入参：无

必传参数：公共参数。

出参：无
注：只传入公共参数，校验用户token，ticket是否有效，如果失效则返回804或805需要重新登录，如果未失效则返回success，code为0表示登录成功
 */
- (void)userCheckTokenLoginWithTNPsucceed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;


/** 获取app皮肤列表
 必传参数：
 
 //皮肤主题版本号
 
 private String version;
 
 //获取类型  1：主题  2：背景  3：皮肤
 
 private int type;
 图片地址结构
 背景图片路径获取方式：
      IOS标准背景图：http://img.icon.systoon.com/style/3.0/background/ios/stardard/space.png
      IOS缩略背景图：http://img.icon.systoon.com/style/3.0/background/ios/thumbnail/space.png

*/
- (void)getAppSkinListWithTNP:(TNPGetAppSkinListInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;


/** 获取安全问题列表

 */
- (void)getAllSecretQuestionsWithTNP:(TNPGetAllSecretQuestionsInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;

/** 更新用户设备信息（注：此接口userId传0时则是设备激活接口，app安装完成时第一次调用且只调用一次，每次版本更新时也需要调用携带版本号appVersion重新录入信息）
 
 必传参数：公共参数。
 
 //描述：用户Id
 //类型：Long
 @property (nonatomic,copy) NSString * userId;
 //描述：推送设备信息
 //类型：String
 @property (nonatomic,copy) NSString * deviceToken;
 //描述：只针对android:imei号
 //类型：String
 @property (nonatomic,copy) NSString * imei;
 //描述：mac地址
 //类型：String
 @property (nonatomic,copy) NSString * macAddress;
 //描述：针对ios的idfa获取
 //类型：String
 @property (nonatomic,copy) NSString * idfa;
 //描述：设备唯一标识信息
 //类型：String
 @property (nonatomic,copy) NSString * uuid;
 //描述：设备名称：比如华为，iphone等
 //类型：String
 @property (nonatomic,copy) NSString * deviceName;
 //描述：app版本,比如：linli-1.0.0
 //类型：String
 @property (nonatomic,copy) NSString * appVersion;
 //描述：渠道
 //类型：String
 @property (nonatomic,copy) NSString * channel;
 //描述：分发代码
 //类型：String
 @property (nonatomic,copy) NSString * code;
 
 */
- (void)updateUserDeviceWithTNP:(TNPUpdateUserDeviceInputForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;


/** 用户更换手机号时，发送短信验证码之前，先验证新号码是否已注册
 必传参数：
 
 
 
 //描述：手机号
 //类型：String
 private String mobile;//手机号
 
 */
- (void)userCheckBeforeMobileVerfiyCodeSendWithTNP:(TNPUserMobileVerfiyCodeSendInputForm *)TNP
                        succeed:(void(^)())succeed
                        failure:(void(^)(NSError *))failure;
/*
 用户按收藏类型获取收藏
 必传参数：
 //描述：增量更新时间
 //类型：String
 private String updateTime;
 //描述：用户id
 //类型：String
 private Long userId;
 //描述：收藏类型
 //类型：String
 private int type;
 */
- (void)obtainAllUserCollectsByTypeWithTNP:(TNPGetAllUserCollectsInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;
/*
 用户安全邮箱状态
 必传参数：
 //描述：用户id
 //类型：String
 private Long userId;
 //描述：用户注册手机号
 //类型：String
 private String mobile;
 */
- (void)getUserEmailStatusWithTNP:(TNPUserObtainEmailStatusInputForm *)TNP
                             succeed:(void(^)(NSDictionary *))succeed
                             failure:(void(^)(NSError *))failure;

/*
 获取用户BBS登录地址

 入参：无
 */
- (void)getUserBBSUrlWithTNPSucceed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;
/*
获取桌面资源
 必传参数：
 private long updateTime; // 描述：增量更新时间(时间戳）
 private int resType; // 描述：资源类型(1主题，2背景，3皮肤)
 */
- (void)getDesktopResListWithTNP:(TNPDesktopResInputForm *)TNP
                                   succeed:(void(^)(NSDictionary *))succeed
                                   failure:(void(^)(NSError *))failure;

/*
 获取桌面应用
 必传参数：
 private long version; // 描述：版本信息(时间戳）
 */
- (void)getDesktopAppWithTNP:(TNPDesktopAppInputForm *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;

/*
 未登录修改密码(用户找回密码功能）
 必传参数：
 //描述：用户ID
 //类型：Long
 private String userId;
 //描述：新密码
 //类型：String
 private String password;
 */
- (void)userChangePasswordBeforeLoginWithTNP:(TNPUserChangePasswordInputForm *)TNP
                     succeed:(void(^)( ))succeed
                     failure:(void(^)(NSError *))failure;

/*
 获取好友和陌生人名片（用户找回密码功能）
 必传参数：
 //描述：用户ID
 //类型：Long
 private String userId;
 */
- (void)userGetCardsUsingFindPwdWithTNP:(TNPUserObtainEmailStatusInputForm *)TNP
                     succeed:(void(^)(NSDictionary *))succeed
                     failure:(void(^)(NSError *))failure;

/*
 校验选中的好友名片信息（用户找回密码功能）
 必传参数：
 //描述：用户ID
 //类型：Long
 
 private Long userId;
 
 //描述：选中的好友名片
 //类型：List<String>
 
 private List<String> friendCards;
 
 */
- (void)userCheckCardsUsingFindPwdWithTNP:(TNPUserCheckFriendCardInputForm *)TNP
                                     succeed:(void(^)(NSDictionary *))succeed
                                     failure:(void(^)(NSError *))failure;

/*
 校验安全问题回答是否正确（找回密码功能）
 
 必传参数：
 // 账号
 private String mobile;
 // 安全问题答案（采用格式例如：1:谢谢;2:谢谢;3:谢谢 注：1.2.3 代表预先设定好的问题序号）
 private String secretQuestion;
 
 */
- (void)checkUserSecretQuestionWithTNP:(TNPUserSecretQuestionLoginInputForm *)TNP
                                  succeed:(void(^)(NSDictionary *))succeed
                                  failure:(void(^)(NSError *))failure;

/*
 查询通用设置消息开关
 
 必传参数：
 无
 
 */
- (void)obtainUserCommonSettingsSucceed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;


/*
 修改通用设置消息开关
 
 必传参数：
 //通用设置消息开关状态，0：关闭，1：开启
 
 private Integer msgShowSign
 
 */
- (void)userChangeCommonSettingsWithTNP:(TNPChangeUserCommonSettingsInputForm *)TNP
                               succeed:(void(^)())succeed
                               failure:(void(^)(NSError *))failure;
/*
 更换设备登录时校验密码
 
 必传参数：
 private String mobile;  //手机号
 
 private String teleCode; // 0000为运营号 0086为中国区
 private String mobileVerfiyCode;  //密码
 
 */
- (void)userPasswordCheckWithTNP:(TNPUserMobileVerfiyCodeCheckInputForm *)TNP
                                succeed:(void(^)(NSDictionary *))succeed
                                failure:(void(^)(NSError *))failure;

/*
 修改密保开关状态时校验密码
 
 必传参数：
 private String mobile;  //手机号
 
 private String teleCode; // 0000为运营号 0086为中国区
 private String mobileVerfiyCode;  //密码
 
 */
- (void)userPasswordCheckAfterLoginWithTNP:(TNPUserMobileVerfiyCodeCheckInputForm *)TNP
                         succeed:(void(^)())succeed
                         failure:(void(^)(NSError *))failure;

@end
