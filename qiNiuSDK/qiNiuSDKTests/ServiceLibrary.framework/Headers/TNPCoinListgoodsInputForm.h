//
//  TNPCoinListgoodsInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinListgoodsInputForm : NSObject

/*
 商品分类
 String 	 	不可为空
 */
@property (nonatomic,copy) NSString * category;
/*
 页码
 String(int)	 	可为空
 */
@property (nonatomic,copy) NSString * page;
//每页大小	String(int)	 	可为空
@property (nonatomic,copy) NSString * paseSize;
@end
