//
//  ServiceRequest+MsgbusinessRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/11.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (MsgbusinessRequest)

/*
 详见wiki--http://devwiki.syswin.com/pages/viewpage.action?pageId=12845406
 */

/** 消息类别增量获取接口
 
传入字段：
	//最后一次更新时间
	private long lastupdate_time;
 
 */
- (void)obtainNoticeCatalogWithTNP:(TNPNoticeType *)TNP
             succeed:(void(^)(NSDictionary *))succeed
             failure:(void(^)(NSError *))failure;
@end
