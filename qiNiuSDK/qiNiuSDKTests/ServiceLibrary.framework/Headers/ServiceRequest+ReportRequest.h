//
//  ServiceRequest+ReportRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/16.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (ReportRequest)

/** 获得举报原因的列表
 
 字段名	说明	类型	是否必填
 type	类型（0朋友圈 1名片 2群组 3单聊 4群聊）	int	是
 ts	当前时间的时间戳。	long	否

 */
- (void)getReportReasonsWithTNP:(TNPReportGetReportReasonsInputForm *)TNP
                           succeed:(void(^)(NSArray *))succeed
                           failure:(void(^)(NSError *))failure;

/** 获得举报处理的列表
 
 字段名	说明	类型	是否必填
 type	类型（0朋友圈 1名片 2群组 3单聊 4群聊）	int	是
 ts	当前时间的时间戳。	long	否
 
 */
- (void)getHandleActionsWithTNP:(TNPReportGetHandleActionsInputForm *)TNP
                        succeed:(void(^)(NSArray *))succeed
                        failure:(void(^)(NSError *))failure;

/** 提交举报
 
 字段	名称	类型	是否必填
 userId
 用户id	string	是
 reportFeedId
 被举报者feedid	string	是
 type
 类型（0朋友圈 1名片 2群组 3单聊 4群聊）	int
 是
 reasonId
 举报原因编码	string	是
 reportDesc
 举报描述	string
 reportContents
 举报内容的json数据。type不同则举报内容不同，格式参见下表	string	是
 
 */
- (void)submitReportWithTNP:(TNPReportSubmitReportInputForm *)TNP
                        succeed:(void(^)( ))succeed
                        failure:(void(^)(NSError *))failure;
@end
