//
//  UploadImageTool.h
//  qiniuDemo
//
//  Created by 程国帅 on 16/5/25.
//  Copyright © 2016年 chengs. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import <QiniuSDK>

#import <UIKit/UIKit.h>
@interface UploadImageTool : NSObject

//获取七牛上传token

+ (void)getQiniuUploadToken:(void(^)(NSString*token))success failure:(void(^)())failure;

/**

 *上传图片

 *

 *@param image需要上传的image

 *@param progress上传进度block

 *@param success成功block返回url地址

 *@param failure失败block

 */

//+ (void)uploadImage:(UIImage*)image progress:(QNUpProgressHandler)progress success:(void(^)(NSString*url))success failure:(void(^)())failure;
//
////上传多张图片,按队列依次上传
//
//+ (void)uploadImages:(NSArray*)imageArray progress:(void(^)(CGFloat))progress success:(void(^)(NSArray*))success failure:(void(^)())failure;

@end
