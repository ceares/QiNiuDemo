//
//  QiniuAuthPolicy.h
//  qiNiuDemo
//
//  Created by 程国帅 on 16/5/31.
//  Copyright © 2016年 chengs. All rights reserved.
//

#import <Foundation/Foundation.h>

#define QiNiu_URL @"http://ofca1latq.bkt.clouddn.com"


@interface QiniuAuthPolicy : NSObject

+ (NSString *)token_ceshi1;


#pragma mark - 私有空间
+ (NSString *)privateRealDownloadUrlWithUrl:(NSString *)url;
@end
