//
//  ServiceRequest+DownloadRequest.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/19.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (DownloadRequest)

/** 检查新版本
 
 其中以下参数为必传参数：
 
 chNO 渠道号码
 
 version 版本号
 
 platform 平台类型 android ios
 
 */

- (void)checkVersionWithTNP:(TNPOnlineVersionInputForm *)TNP
                     succeed:(void(^)(NSDictionary *))succeed
                     failure:(void(^)(NSError *))failure;

/** 获取版本信息
 
 其中以下参数为必传参数：
 
 version 版本号
 
 platform 平台类型 android ios
 */

- (void)getVersionInfoWithTNP:(TNPOnlineVersionInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

/** 获取toon二维码下载
 
 其中以下参数为必传参数：
 
 private Long userId;
 
 private String platform; //android 1 ios 2
 
 private String chNO ;
 
 private Integer width=0;//二维码的宽度
 
 private Integer height=0;//二维码的高度
 */

- (void)QRCodeWithTNP:(TNPOnlineVersionInputForm *)TNP
                      succeed:(void(^)())succeed
                      failure:(void(^)(NSError *))failure;


/** 产品反馈
 
 其中以下参数为必传参数：
 
 private Long userId;
 
 private String comment;//评论内容
 
 private String phone;
 */
- (void)addAdviceWithTNP:(TNPAdvicesInputForm *)TNP
                 succeed:(void(^)())succeed
                 failure:(void(^)(NSError *))failure;

/** 获取错误代码字典
 
 其中以下参数为必传参数：
 
 private Long userId;
 
 private String appVersion；应用版本号
 */
- (void)obtainToondicWithTNP:(TNPToonDicInputForm *)TNP
                 succeed:(void(^)(NSArray *))succeed
                 failure:(void(^)(NSError *))failure;

/** 检查新版本 (新接口)
 
 其中以下参数为必传参数：
 
 chNO	渠道号
 platform	平台类型

 */
- (void)checkNewVersionWithTNP:(TNPOnlineVersionInputForm *)TNP
                     succeed:(void(^)(NSDictionary *))succeed
                     failure:(void(^)(NSError *))failure;


/**
 percent  下载百分比
 
 TNP必传参数
 NSString *fileUrl; //文件url
 
 NSString *path; //本地路径
 */
- (void)downloadFileWithTNP:(TNPDownloadFileInputForm *)TNP
                    percent:(void(^)(float))percent
                    succeed:(void(^)(id responseObject))succeed
                    failure:(void(^)(NSError *))failure;
@end
