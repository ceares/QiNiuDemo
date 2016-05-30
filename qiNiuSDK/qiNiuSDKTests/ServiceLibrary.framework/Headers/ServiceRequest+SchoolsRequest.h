//
//  ServiceRequest+SchoolsRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/26.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (SchoolsRequest)
/** 获取学校信息接口
 //必填参数：
 //描述：学校名称 类型:String
 private String schoolName;
 //描述：学校类型 类型：String 取值范围：小学、初中、大学
 private String schoolType;
 */
- (void)searchSchoolsWithTNP:(TNPSchoolInputForm *)TNP
                      succeed:(void(^)(NSArray *))succeed
                      failure:(void(^)(NSError *))failure;

/** 获取房产信息接口
  //必填参数：
 //描述：房产名称 类型：String
 private String houseName;
 */
- (void)searchHouseWithTNP:(TNPHouseInputForm *)TNP
                     succeed:(void(^)(NSArray *))succeed
                     failure:(void(^)(NSError *))failure;


/** 获取房产楼栋信息接口
  //必填参数：
 //描述：小区ID 类型：String
 private String estateId;
 */
- (void)searchBuildingWithTNP:(TNPTooncommonSearchBuildingInputForm *)TNP
                   succeed:(void(^)(NSArray *))succeed
                   failure:(void(^)(NSError *))failure;

/** 获取房产单元信息接口
  //必填参数：
 // 描述：楼栋ID 类型：String
 private String buildingId;
 */
- (void)searchUnitWithTNP:(TNPTooncommonSearchUnitInputForm *)TNP
                      succeed:(void(^)(NSArray *))succeed
                      failure:(void(^)(NSError *))failure;

/** 获取房产套房信息接口
  //必填参数：
 //描述：单元ID 类型：String
 private String unitId;
 */
- (void)searchSuiteWithTNP:(TNPTooncommonSearchSuiteInputForm *)TNP
                  succeed:(void(^)(NSArray *))succeed
                  failure:(void(^)(NSError *))failure;

@end
