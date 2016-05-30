//
//  TNPReportSubmitReportInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/16.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPReportSubmitReportInputForm : NSObject

//用户id	string	必填
@property (nonatomic,copy) NSString * userId;
//被举报者feedid	string	必填
@property (nonatomic,copy) NSString * reportFeedId;
//类型（0朋友圈 1名片 2群组 3单聊 4群聊）	int 必填
@property (nonatomic,copy) NSString * type;
//举报原因编码	string	必填
@property (nonatomic,copy) NSString * reasonId;
//举报描述	string
@property (nonatomic,copy) NSString * reportDesc;
//举报内容的json数据。type不同则举报内容不同，格式参见下表	string	必填
@property (nonatomic,copy) NSString * reportContents;


@end
