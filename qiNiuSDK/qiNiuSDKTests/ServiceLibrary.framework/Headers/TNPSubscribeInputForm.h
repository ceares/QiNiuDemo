//
//  TNPSubscribeInputForm.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPSubscribeInputForm : NSObject

//描述： 用户id
//类型: Long
@property (nonatomic,copy) NSString * userId;
//描述： 订阅类型
//类型: int
//取值: 1 集锦 2 频道
@property (nonatomic,copy) NSString * type;
//描述： 对应集锦或者频道的id
//类型: Long
@property (nonatomic,copy) NSString * objId;
//描述： 批量添加，以逗号分隔的objId
//类型: String
@property (nonatomic,copy) NSString * objIdStr;
//描述： 删除订阅的参数 组件id 主键 自增长
//类型: Long
@property (nonatomic,copy) NSString * subscribeId;
//描述： 查询订阅 Long类型的长串 如果updateTime不为空则为增量查询
//类型: String
@property (nonatomic,copy) NSString * updateTime;
//描述： 搜索数据的参数  格式为100,101，转换成 List<String> 数据类型
//类型: String
@property (nonatomic,copy) NSString * basicSubCategoryString;
//描述： 开始时间超过现在的活动就不查询了 格式"yyyy-MM-dd"
//类型: String
@property (nonatomic,copy) NSString * activityBeginDateString;
//描述： 搜索的分页
//类型: int
@property (nonatomic,copy) NSString * pageNumber;


@end
