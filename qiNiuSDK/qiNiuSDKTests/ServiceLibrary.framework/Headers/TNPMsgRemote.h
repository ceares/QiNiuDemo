//
//  TNPMsgRemote.h
//  ServiceLibrary
//
//  Created by syswin on 15/10/15.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPMsgRemote : NSObject
/**
 * 主键ID
 */
@property (nonatomic,copy) NSString * msgRemote_Id;

@property (nonatomic,copy) NSString * userId;
@property (nonatomic,copy) NSString * sendBy;
@property (nonatomic,copy) NSString * msgId;
@property (nonatomic,copy) NSString * catalog_id;
@property (nonatomic,copy) NSString * catalog;
@property (nonatomic,copy) NSString * session_id;
@property (nonatomic,copy) NSString * fromId;
@property (nonatomic,copy) NSString * toId;
@property (nonatomic,copy) NSString * sub_catalog;
@property (nonatomic,copy) NSString * content;
@property (nonatomic,copy) NSString * content_type;
@property (nonatomic,copy) NSString * summary;
@property (nonatomic,copy) NSString * action_type;
@property (nonatomic,copy) NSString * important;
@property (nonatomic,copy) NSString * biz_no;
@property (nonatomic,copy) NSString * is_unread;
@property (nonatomic,copy) NSString * complete_flag;
@property (nonatomic,copy) NSString * complete_time;
@property (nonatomic,copy) NSString * time_stamp;
@property (nonatomic,copy) NSString * show_flag;
@property (nonatomic,copy) NSString * kaiTime;
@property (nonatomic,copy) NSString * expireTime;
@property (nonatomic,copy) NSString * isHide;
@end
