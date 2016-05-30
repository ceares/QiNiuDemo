//
//  TPNAgencyItem.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/24.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TPNAgencyItem : NSObject

//feedID	String	是
@property (nonatomic,copy) NSString * feedId;
//是否启用 0-停用,1-启用	String	否
@property (nonatomic,copy) NSString * isAvailable;

@end
