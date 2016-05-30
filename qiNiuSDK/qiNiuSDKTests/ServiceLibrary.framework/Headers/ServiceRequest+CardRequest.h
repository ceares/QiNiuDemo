//
//  ServiceRequest+CardRequest.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import "ServiceRequest.h"

@interface ServiceRequest (CardRequest)
/** 创建名片
 
 //描述：昵称
 //类型：String
 private String title;
 
 //描述：推广语
 //类型：String
 private String subtitle;
 
 */
- (void)createCardWithTNP:(TNPCardInputForm *)TNP
                  succeed:(void (^)(NSDictionary *))succeed
                  failure:(void (^)(NSError *))failure;

/** 面查询名片接口
 
 //描述：访问者feedId
 //类型：String
 private String fromFeedId;
 
 //描述：被访问者feedId
 //类型：String
 private String toFeedId;
 
 //描述：访问者面类型
 //类型：Integer
 //取值：1、匿名面 2、好友面 3、自己
 private String aspectType;
 
 //描述：时间戳（版本）
 //类型：Long
 //取值：非负数值
 private String version;
 */
- (void)cardFrameWithTNP:(TNPFrameParamInputForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                 failure:(void(^)(NSError *))failure;

/** 更新名片接口
 
 //描述：名片feedId
 //类型：Long
 //取值：大于0的数值
 private String feedId;
 */
- (void)updateCardWithTNP:(TNPCardInputForm *)TNP
                  succeed:(void(^)(NSDictionary *))succeed
                  failure:(void(^)(NSError *))failure;

/** 获取名片列表(已废弃-15.10.27)
 
 //描述：拥有者用户id
 //类型：Long
 //取值：大于0的数值
 private String ownByUserId;
 
 //描述：时间戳
 //类型：Long
 //取值：大于0的数值
 private String version;
 */
- (void)cardListWithTNP:(TNPCardListParamInputForm *)TNP
                succeed:(void(^)(NSDictionary *))succeed
                failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);

/** 获取名片
 
 //描述：名片feedId
 //类型：Long
 //取值：大于0的数值
 private String feedId;
 
 //描述：时间戳（版本）
 //类型：Long
 //取值：非负数值
 private String version;
 */
- (void)obtainCardWithTNP:(TNPCardInputForm *)TNP
               succeed:(void(^)(NSDictionary *))succeed
               failure:(void(^)(NSError *))failure;

/** 删除名片（暂无此功能）
 
 //描述：名片feedId
 //类型：Long
 //取值：大于0的数值
 private String feedId;
 
 //描述：拥有者用户Id
 //类型：Long
 //取值：大于0的数值
 private String ownByUserId;
 */
- (void)deleteCardWithTNP:(TNPCardInputForm *)TNP
                  succeed:(void(^)())succeed
                  failure:(void(^)(NSError *))failure;

/** 获取名片配置字段表
 注：若传类型则返回类型对应的配置字段，若不传类型则返回所有配置字段
 
 //描述：名片类型
 //类型：Integer
 //取值：1 个人名片 2 企业名片 3 员工名片
 private Integer cardType;
 */
- (void)obtainCardFieldConfigWithTNP:(TNPCardFieldConfigParamInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;


/** 添加名片推荐
 
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 //描述：推荐的名片feedId
 //类型：String
 private String recommendFeedId;
 
 //描述：推荐原因
 //类型：String
 private String recommendReason;
 
 //描述：操作者feedId（通知用）
 //类型：String
 private String operatorFeedId;
 
 //描述：推荐状态
 //类型：Integer
 //取值：1 正常 2 待确认 3 已拒绝
 private Integer recommendStatus;
 
 */
- (void)addCardRecommendationWithTNP:(TNPCardRecommendationInputForm *)TNP
                        succeed:(void(^)())succeed
                        failure:(void(^)(NSError *))failure;


/** 更新名片推荐
 
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 //描述：推荐的名片feedId
 //类型：String
 private String recommendFeedId;
 
 //描述：推荐状态
 //类型：Integer
 //取值：1 正常 2 待确认 3 已拒绝
 private Integer recommendStatus;

 */
- (void)updateCardRecommendationWithTNP:(TNPCardRecommendationInputForm *)TNP
                           succeed:(void(^)())succeed
                           failure:(void(^)(NSError *))failure;


/** 获取名片推荐列表
 
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 //描述：更新时间（用于增量更新）
 //类型：Long
 private String version;
 */
- (void)obtainCardRecommendationListWithTNP:(TNPCardRecommendationInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;

/** 删除名片推荐
 
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 //描述：推荐的名片feedId
 //类型：String
 private String recommendFeedId;
 */
- (void)deleteCardRecommendationWithTNP:(TNPCardRecommendationInputForm *)TNP
                           succeed:(void(^)())succeed
                           failure:(void(^)(NSError *))failure;

/** 更新实时位置坐标
 
 //描述：名片id,多个名片id以逗号分隔，如：1，2，3，4
 //类型：String
 private String feedIds;
 
 //描述：经纬度（格式为：维度,经度）
 //类型：String
 private String latilongitude;
 
 //地理代码
 private String adcodes;
 
 //商业区
 private String businessArea;
 
 //国家代码
 private String countrycode;
 */
- (void)updateLocationCoordinateWithTNP:(TNPCoordinateInputForm *)TNP
                                succeed:(void(^)())succeed
                                failure:(void(^)(NSError *))failure;

/** 生成二维码
 
 //描述：名片feedId
 //类型：String
 private String feedId;
 */
- (void)generateQRCodeWithTNP:(TNPQRCodeParamInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;
/**获取交换表单（已废弃-15.10.27）
 
其中以下参数为必传参数：

//描述：名片id
//类型：String
private String cardId;
 */
- (void)obtainExchangeFormWithTNP:(TNPExchangeFormInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);

/**获取名片feedId列表（已废弃-15.10.27）
 
 其中以下参数为必传参数：
 
 //描述：拥有者用户id
 //类型：Long
 //取值：大于0的数值
 private String ownByUserId;
 
 //描述：时间戳
 //类型：Long
 //取值：大于0的数值
 private String version;
 */
- (void)cardFeedIdListWithTNP:(TNPCardListParamInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);

/*
 获取传播分类列表(已废弃-16.01.27)
 其中以下参数为必传参数：
 
 //描述：类型
 //类型：Integer
 //取值：1 名片 2 活动&群组
 private String type;
 
 //描述：时间戳
 //类型：Long
 //取值：大于0的数值
 private String version;
 */
- (void)obtainSpreadCategoryWithTNP:(TNPSpreadCategoryInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);

/*
 获取热门推荐传播子类型列表
 其中以下参数为必传参数：
 
 //描述：类型
 //类型：Integer
 //取值：1 名片 2 活动&群组
 private String type;
 
 //描述：时间戳
 //类型：Long
 //取值：大于0的数值
 private String version;
 */
- (void)obtainRecommendSubCategoryListWithTNP:(TNPSpreadCategoryInputForm *)TNP
                                succeed:(void(^)(NSDictionary *))succeed
                                failure:(void(^)(NSError *))failure;

/*
 获取名片交换模式
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 */
- (void)obtainJoinMethodWithTNP:(TNPCardInputForm *)TNP
                                      succeed:(void(^)(NSDictionary *))succeed
                                      failure:(void(^)(NSError *))failure;

/*
 获取推广名片
 返回值: List<String>
 */
- (void)obtainPopularizeCardSucceed:(void(^)(NSArray *))succeed
                            failure:(void(^)(NSError *))failure;



/*
更新名片推荐顺序
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 //描述：推荐的名片feedId
 //类型：String
 private String recommendFeedId;
 
 //描述：当前项前一项的displayOrder
 //类型：Long
 private String maxDisplayOrder;
 
 //描述：当前项后一项的displayOrder
 //类型：Long
 private String minDisplayOrder;
 */
- (void)updateCardRecommendationDisplayOrderWithTNP:(TNPCardRecommendationInputForm *)TNP
                        succeed:(void(^)())succeed
                        failure:(void(^)(NSError *))failure;

/*
 发送个人公告
 其中以下参数为必传参数：
 //描述：发送公告方feedId
 //类型：String
 private String fromFeedId;
 
 //描述：接收公告方feedId，多个以英文逗号隔开
 //类型：String
 private String toFeedIds;
 
 //描述：发送内容
 //类型：String
 private String content;
 */
- (void)sendAnnouncementWithTNP:(TNPCardAnnouncementInputForm *)TNP
                                            succeed:(void(^)())succeed
                                            failure:(void(^)(NSError *))failure;

/*
 匿名面查询接口
 其中以下参数为必传参数：
 //描述：访问者feedId
 //类型：String
 private String fromFeedId;
 
 //描述：被访问者feedId
 //类型：String
 private String toFeedId;
 
 //描述：访问者面类型
 //类型：Integer
 //取值：1、匿名面 2、好友面 3、自己
 private String aspectType;
 
 //描述：时间戳（版本）
 //类型：Long
 //取值：非负数值
 private String version;;
 */
- (void)obtainCardAFWithTNP:(TNPFrameParamInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/*
 获取名片列表面接口
 其中以下参数为必传参数：
 //描述：被访问者feedId
 //类型：String
 private String toFeedId;
 

 //描述：时间戳（版本）
 //类型：Long
 //取值：非负数值
 private String version;
 

 */
- (void)obtainCardLFWithTNP:(TNPFrameParamInputForm *)TNP
                    succeed:(void(^)(NSDictionary *))succeed
                    failure:(void(^)(NSError *))failure;


/*
 获取兴趣列表
 其中以下参数为必传参数：
 //描述：类型
 //类型：Integer
 //取值：1 名片
 private String type;
 
 //描述：时间戳
 //类型：Long
 private String version;

 */
- (void)obtainInterestWithTNP:(TNPInterestInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;
/*
 获取社交属性配置字段表
 其中以下参数为必传参数：
 //描述：名片类型
 //类型：Integer
 //取值：1 个人名片
 private Integer cardType;
 
 */
- (void)obtainSocialPropertyFieldConfigWithTNP:(TNPCardFieldConfigParamInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;
/*
 获取服务者信息接口
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 */
- (void)obtainProviderInfoWithTNP:(TNPCardInputForm *)TNP
                                       succeed:(void(^)(NSDictionary *))succeed
                                       failure:(void(^)(NSError *))failure;
/*
 保存简历基本信息
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 */
- (void)saveResumeBaseInfoWithTNP:(TNPResumeBaseInfoInputForm *)TNP
                          succeed:(void(^)())succeed
                          failure:(void(^)(NSError *))failure;
/*
 获取简历基本信息
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 */
- (void)obtainResumeBaseInfoWithTNP:(TNPResumeBaseInfoInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;

/*
 保存教育经历
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 //描述：学历
 //类型：Integer
 //取值：0 小学 1 初中 2 中专 3 高中 4 大专 5 大学 6 硕士 7 博士 8 博士后
 private String degree;
 
 //描述：学校名称
 //类型：String
 private String schoolName;
 
 //描述：入学时间
 //类型：String
 private String joinTime;
 
 //描述：毕业时间
 //类型：String
 private String graduationTime;
 

 
 */
- (void)saveEducationExperienceWithTNP:(TNPEducationExperienceInputForm *)TNP
                            succeed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;

/*
 保存工作履历
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 //描述：公司名称
 //类型：String
 private String companyName;
 
 //描述：职位
 //类型：String
 private String position;
 
 //描述：开始时间
 //类型：String
 private String beginTime;
 
 //描述：结束时间
 //类型：String
 private String endTime;
 
 
 */
- (void)saveJobExperienceWithTNP:(TNPJobExperienceInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;
/*
 保存项目经验技能
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 
 //描述：项目名称
 //类型：String
 private String projectName;
 
 //描述：开始时间
 //类型：String
 private String beginTime;
 
 //描述：结束时间
 //类型：String
 private String endTime;
 
 
 
 */
- (void)saveProjectExperienceWithTNP:(TNPProjectExperienceInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/*
 获取简历信息
 其中以下参数为必传参数：
 //描述：名片feedId
 //类型：String
 private String feedId;
 */
- (void)obtainResumeInfoWithTNP:(TNPResumeBaseInfoInputForm *)TNP
                             succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(2_0, 2_0, "Use -obtainResumeBaseInfoWithTNP:succeed:failure:");


/*
 获取名片许可证
 其中以下参数为必传参数：
 private Long userId; （必传）
 
 private Integer licenseNo; （必传）（个人名片 1 ）
 */
- (void)obtaintUserLicenseWithTNP:(TNPUserCardLicense *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/*
 使用许可证名片
 其中以下参数为必传参数：
 private Long userId; （必传）
 
 private Integer licenseNumber;（必传 使用许可证 的数量）
 
 private Integer licenseNo;（必传 个人名片许可证为1 ）
 */
- (void)delUserLicenseWithTNP:(TNPUserCardLicense *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/*
 添加许可证名片
 其中以下参数为必传参数：
 private Long userId; （必传）
 
 private Integer licenseNumber;（必传 许可证 的数量）
 
 private Integer licenseNo;（必传 个人名片许可证为1 ）
 */
- (void)addUserLicenseWithTNP:(TNPUserCardLicense *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/*
 名片添加自定义字段
 参数说明：
 private Long feedId;//名片id
 
 private String fieldName;//字段名
 
 private String fieldValue;//字段值
 
 private Integer category;//类别 0-其他 1-社交属性（设计到 扩展，传入 1）
 */
- (void)addCustomFieldWithTNP:(TNPCardCustomFieldInput *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

/*
 更新自定义字段
 参数说明：
 private Long feedId;//名片id（必传）
 
 private Long fieldId;//字段id（必传）
 
 private String fieldValue;//字段值（必传）
 */
- (void)updateCustomFieldWithTNP:(TNPCardCustomFieldInput *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

/*
 删除自定义字段
 参数说明：
 private Long feedId;//名片id（必传）
 
 private Long fieldId;//字段id（必传）
 */
- (void)deleteCustomFieldWithTNP:(TNPCardCustomFieldInput *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;

/*
 获取用户的自定义字段
 参数说明：
 private Long feedId;//名片id（必传）
 
 */
- (void)obtainAllCustomFieldWithTNP:(TNPCardCustomFieldInput *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;


/*
 获取用户的Vcard信息
 必传参数：
 //描述：访问者feedId
 //类型：String
 private String fromFeedId;
 
 //描述：被访问者feedId
 //类型：String
 private String toFeedId;
 
 //描述：访问者面类型
 //类型：Integer
 //取值：1、匿名面 2、好友面 3、自己
 private String aspectType;
 
 //描述：时间戳（版本）
 //类型：Long
 //取值：非负数值
 private String version;
 
 */
- (void)vCardFrameWithTNP:(TNPFrameParamInput *)TNP
                            succeed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;

/*
 获取服务名片需要审核的字段
 必传参数：
 //名片id
 
 private String feedId;
 
 // 名片类型 1 个人名片  2 组织名片  3 员工名片
 // 101 房通顾问 102 权证顾问 103个人服务名片
private Integer cardType;

 */
- (void)obtainCardServiceConfigWithTNP:(TNPCardInput *)TNP
                  succeed:(void(^)(NSDictionary *))succeed
                  failure:(void(^)(NSError *))failure;

/*
 验证 推荐名片关系 接口
 必传参数：
 //描述：名片feedId
 //类型：String
 NSString * feedId;
 //描述：推荐的名片feedId
 //类型：String
 NSString * recommendFeedId;
 */
- (void)checkRecommendStatusWithTNP:(TNPCardRecommendationInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;

/*
 获取城市所有的商圈
 必传参数：
 private String cityCode;城市编码（必传)
 
 private String version;增量更新版本号（必传）
 */
- (void)obtainBusinessAreaWithTNP:(TNPBusinessAreaInput *)TNP
                            succeed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;
/*
 更新名片的商圈
 必传参数：
 private String feedId;（必传）
 
 private List<BusinessAreaDetail> addAreas;//新增的数据
 
 private List<BusinessAreaDetail> delAreas;//删除的数据
 */
- (void)saveBusinessAreaWithTNP:(TNPCardBusinessArea *)TNP
                          succeed:(void(^)(NSString *))succeed
                          failure:(void(^)(NSError *))failure;
/*
 获取名片名片的商圈
 必传参数：
private String feedId;（必传）
 */
- (void)obtainCardBusinessAreaWithTNP:(TNPBusinessAreaInput *)TNP
                          succeed:(void(^)(NSArray *))succeed
                          failure:(void(^)(NSError *))failure;
@end
