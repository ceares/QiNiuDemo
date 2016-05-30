//
//  TNPCoinDetailgoodsInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinDetailgoodsInputForm : NSObject

//商品分类 String 	 	不可为空
@property (nonatomic,copy) NSString * category;
//商品编码 String	 	不可为空
@property (nonatomic,copy) NSString * goodsNo;
@end
