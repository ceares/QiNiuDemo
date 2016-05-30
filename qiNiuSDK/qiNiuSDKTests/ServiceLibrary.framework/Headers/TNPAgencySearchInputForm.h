//
//  TNPAgencySearchInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/30.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAgencySearchInputForm : NSObject

//输入的搜索字符串 String 否必传
@property (nonatomic,copy) NSString * searchString;
//一级分类名称（如家教）(筛选时传) String 否必传
@property (nonatomic,copy) NSString * category;
//服务项二级分类（入小学英语）（筛选时传） 	 string	 否必传
@property (nonatomic,copy) NSString * keyword;
//当前经纬度（如39.995005,116.451891）	String 	是必传
@property (nonatomic,copy) NSString * latilongitude;
//当前页数（如1）	Integer 	是必传
@property (nonatomic,copy) NSString * currentPageNumber;
//每页条数	Integer 	是必传
@property (nonatomic,copy) NSString * eachPageItems;
//需要过滤的feedId（逗号分隔）	String 	是必传
@property (nonatomic,copy) NSString * excludeFeedIds;
//性别（0：男，1：女）
@property (nonatomic,copy) NSString * sex;
//排序（1：价格从低到高，2：价格从高到低）
@property (nonatomic,copy) NSString * sort;

@end
