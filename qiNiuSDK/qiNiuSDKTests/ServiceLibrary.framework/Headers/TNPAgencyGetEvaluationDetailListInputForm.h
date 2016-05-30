//
//  TNPAgencyGetEvaluationDetailListInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/23.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAgencyGetEvaluationDetailListInputForm : NSObject

@property (nonatomic,copy) NSString * feedId;//	服务者id	String	是
@property (nonatomic,copy) NSString * state;//	评论信息状态	String	否
@property (nonatomic,copy) NSString * evaluationRank;//	评论级别	String	是
@property (nonatomic,copy) NSString * isHavePicture;//	是否有图	String	否
@property (nonatomic,copy) NSString * currentPageNumber;//	当前页数	Integer	是
@property (nonatomic,copy) NSString * eachPageItems;//	每页记录数 Integer	是

@end
