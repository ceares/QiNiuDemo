//
//  TNPGetProfitRankingInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/13.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGetProfitRankingInputForm : NSObject
//描述：统计维度 1:实时维度；2：季度维度；3：年度维度；0：以上所有
//类型: int
@property (nonatomic,copy) NSString * dimension;
@end
