//
//  TNPCardBusinessArea.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/3/7.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardBusinessArea : NSObject

@property (nonatomic,copy) NSString * feedId;
@property (nonatomic,strong) NSArray * addAreas;//新增的数据
@property (nonatomic,strong) NSArray * delAreas;//删除的数据


@end
