//
//  TNPGroupRecommendFeedInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/26.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupRecommendFeedInputForm : NSObject

//群组feedId 类型:String
@property (nonatomic,copy) NSString * feedId;
//验证推荐关系方的feedId   如 群组feedID 或者 名片feedId  类型 String
@property (nonatomic,copy) NSString * recomFeedId;

@end
