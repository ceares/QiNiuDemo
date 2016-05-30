//
//  TNPDownloadInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/13.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPDownloadInputForm : NSObject
@property (nonatomic,copy) NSString * clientIp;    //最终用户IP,必填
@property (nonatomic,copy) NSString * location;  //用户位置信息，可选参数
@property (nonatomic,copy) NSString * stoid;     //文件存储id
@property (nonatomic,copy) NSString * thumbnail;   //缩略图信息
@property (nonatomic,copy) NSString * type;        //展示的类型
@property (nonatomic,copy) NSString * returnType;  //返回类型：
@property (nonatomic,copy) NSString *  returnMimeType;   //强制指定mimetype
@end
