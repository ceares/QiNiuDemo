//
//  TNPGroupFeedInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/1.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupFeedInputForm : NSObject

//描述：拥有者用户id  类型：Long  取值范围：> 0
@property (nonatomic, copy) NSString *userId;

//描述：名片时间戳  类型：Long  取值范围：>= 0
@property (nonatomic, copy) NSString *version;

//列表类型  1、我发起的群组  3、我参加不包括我发布的群组 4、我参加且公开成员名单的群组，不包括我发布的群组
@property (nonatomic, copy) NSString *type;

@end
