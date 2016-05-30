//
//  TNPUploadReqInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/13.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUploadReqInputForm : NSObject
@property (nonatomic,copy) NSString * clientIp;  //最终用户IP
@property (nonatomic,copy) NSString * location;   //用户位置信息
@property (nonatomic,copy) NSString * functionCode;  //功能编码
@property (nonatomic,copy) NSString * ownerCode;
@property (nonatomic,copy) NSString * mimeType;
@property (nonatomic,copy) NSString * postfix;
@property (nonatomic,copy) NSString * video;
@property (nonatomic,copy) NSString * type;   //上传协议类型
@property (nonatomic,copy) NSString * sha1;   //需要传递文件的sha1值
@property (nonatomic,copy) NSString * md5;   //需要传递文件的md5值
@property (nonatomic,copy) NSString * length;  //需要传递文件的长度
@property (nonatomic,copy) NSString * blockInfos;  //文件块信息
@property (nonatomic,copy) NSString * suffix; //文件后缀名（必传  举例：.jpg/.png）

@end
