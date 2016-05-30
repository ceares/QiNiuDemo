//
//  TNPSearchInputForm.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPSearchInputForm : NSObject
@property (nonatomic,copy) NSString * userId;

//描述：页数
//类型：int
@property (nonatomic,copy) NSString * pageNumber;

//描述: 坐标，横竖坐标以逗号分隔
//类型：String
@property (nonatomic,copy) NSString * latilongitude;

//描述：类型
//类型：int
//取值:  1-个人名片，2-组织名片，3-员工名片，4-活动，5-群组等
@property (nonatomic,copy) NSString * objectType;

//描述：搜索范围
//类型：Double类型的数据
@property (nonatomic,copy) NSString * range;

//描述: 大分类
//类型：String
@property (nonatomic,copy) NSString * basicCategory;

//描述：小分类 格式为100,101，转换成 List<String> 数据类型
//类型：String
@property (nonatomic,copy) NSString * basicSubCategoryString;

//描述：开始时间超过现在的活动就不查询了  格式"yyyy-MM-dd"
//类型：String
@property (nonatomic,copy) NSString * activityBeginDateString;


//描述: 根据搜索条件的key值
//类型：String
@property (nonatomic,copy) NSString * searchKey;

//描述：搜索的值
//类型：String
@property (nonatomic,copy) NSString * searchValue;
//搜索规则
@property (nonatomic,copy) NSString * searchCode;
//性别 0男 1女
@property (nonatomic,copy) NSString * sex;
// 公司名称
@property (nonatomic,copy) NSString * companyName;
//文本检索
@property (nonatomic,copy) NSString * text;
//描述：名片活动昵称等
//类型：String
@property (nonatomic,copy) NSString * objectTitle;

//描述：名片号
//类型：String
@property (nonatomic,copy) NSString * objectNo;

// 星座
@property (nonatomic,copy) NSString * constellation;
//血型
@property (nonatomic,copy) NSString * bloodGroup;
//故乡
@property (nonatomic,copy) NSString * hometown;
//年龄区间   如 20-30    @[@{@"begin":@"20",@"end":@"30" }]
@property (nonatomic,strong) NSArray * ages;

// 加入方法(群组)
@property (nonatomic,copy) NSString * joinType;
// 群组分类
@property (nonatomic,copy) NSString * groupType;
// 成员人数(区间)   如 0-99 @[@{@"begin":@"0",@"end":@"99" }]
@property (nonatomic,strong) NSArray * memberNums;
//每页信息数量
@property (nonatomic,copy) NSString * pageSize;
//caedType 升级
@property (nonatomic,strong) NSArray * typeTag;
@property (nonatomic,strong) NSArray * objectTypes;

@end
