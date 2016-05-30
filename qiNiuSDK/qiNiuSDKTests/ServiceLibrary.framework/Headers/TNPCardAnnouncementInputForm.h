//
//  TNPCardAnnouncementInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/9/22.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardAnnouncementInputForm : NSObject
//描述：发送公告方feedId
//类型：String
@property (nonatomic,copy) NSString * fromFeedId;

//描述：接收公告方feedId，多个以英文逗号隔开
//类型：String
@property (nonatomic,copy) NSString * toFeedIds;

//描述：发送内容
//类型：String
@property (nonatomic,copy) NSString * content;

//描述：标题
//类型：String
@property (nonatomic,copy) NSString * title;
@end
