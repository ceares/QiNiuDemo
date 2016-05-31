//
//  QiniuAuthPolicy.h
//  qiNiuDemo
//
//  Created by 程国帅 on 16/5/31.
//  Copyright © 2016年 chengs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QiniuAuthPolicy : NSObject

@property(nonatomic, strong) NSString* scope;
@property(nonatomic, strong) NSString* callbackUrl;
@property(nonatomic, strong) NSString* callbackBodyType;
@property(nonatomic, strong) NSString* customer;
@property(nonatomic, assign) NSInteger* expires;
@property(nonatomic, assign) NSInteger* escape;

+ (NSString *)token;
@end
