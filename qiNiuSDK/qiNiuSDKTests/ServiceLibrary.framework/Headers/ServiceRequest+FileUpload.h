//
//  ServiceRequest+FileUpload.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/6/2.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import "ServiceRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface ServiceRequest (FileUpload)


/**
 *  上传文件  😭😭😭😭😭 新方法 😭😭😭😭😭
 *  @param data          文件data
 *  @functionCode        功能编码,前端应用模块对应的编码(tnp参数)
 *  @param suffix        文件后缀名（必传  举例：.jpg/.png）(tnp参数)
 *  @param sucess        成功
 *  @param failed        失败
 */
- (void)fileUploadWithData:(NSData *)data
                    uploadTNP:(TNPUploadReqInputForm *)tnp
                   succeed:(void (^)(NSString *))succeed
                   failure:(void (^)(NSError *))failure;


/**
 *  上传文件  😭😭😭😭😭 新方法 😭😭😭😭😭
 *  @param data          文件data
 *  @functionCode        功能编码,前端应用模块对应的编码(tnp参数)
 *  @param suffix        文件后缀名（必传  举例：.jpg/.png）(tnp参数)
 *  @param block         上传进度
 *  @param sucess        成功
 *  @param failed        失败
 */
- (void)fileUploadWithData:(NSData *)data
                uploadTNP:(TNPUploadReqInputForm *)tnp
                  progress:(nullable void (^)(NSURLSession *session, NSURLSessionTask *task, int64_t bytesSent, int64_t totalBytesSent, int64_t totalBytesExpectedToSend))progress
                   succeed:(void (^)(NSString *))succeed
                   failure:(void (^)(NSError *))failure;

/**
 *  上传文件  😭😭😭😭😭 新方法 😭😭😭😭😭
 *  @param data          文件data
 *  @functionCode        功能编码,前端应用模块对应的编码(tnp参数)
 *  @param suffix        文件后缀名（必传  举例：.jpg/.png）(tnp参数)
 *  @param refreshCache  是否保存到本地
 *  @param block         上传进度
 *  @param sucess        成功
 *  @param failed        失败
 */
- (void)fileUploadWithData:(NSData *)data
                 uploadTNP:(TNPUploadReqInputForm *)tnp
                refreshCache:(BOOL)cache
                  progress:(nullable void (^)(NSURLSession *session, NSURLSessionTask *task, int64_t bytesSent, int64_t totalBytesSent, int64_t totalBytesExpectedToSend))progress
                   succeed:(void (^)(NSString *))succeed
                   failure:(void (^)(NSError *))failure;


/**
 *  上传图片(仅支持 JPG 格式)
 *  @param image         图片对象
 *  @functionCode        功能编码,前端应用模块对应的编码(tnp参数)
 *  @param suffix        .jpg(tnp参数)
 *  @param sucess        成功
 *  @param failed        失败
 */
- (void)fileUploadWithImage:(UIImage *)image
                    uploadTNP:(TNPUploadReqInputForm *)tnp
                    succeed:(void (^)(NSString *))succeed
                    failure:(void (^)(NSError*))failure;

/**
 *  路径上传文件
 *  @param path          文件在本地的绝对路径
 *  @functionCode        功能编码,前端应用模块对应的编码(tnp参数)
 *  @param suffix        文件后缀名（必传  举例：.jpg/.png）(tnp参数)
 *  @param sucess        成功
 *  @param failed        失败
 */
- (void)fileUploadWithPath:(NSString *)path
                 uploadTNP:(TNPUploadReqInputForm *)tnp
                   succeed:(void (^)(NSString *))succeed
                   failure:(void (^)(NSError *))failure;




/**
 *  上传文件                         新方法 (H5调用 MWAP 上传图片专用)
 *  @param data                     文件data
 *  @domainIP                       路由域名(tnp参数)
 *  @param certificateType          证件类型  32身份证、16学生证、8营业执照、4房产证2、经营用房证 1场所证（必传  举例：.jpg/.png）(tnp参数)
 *  @param block                    上传进度
 *  @param sucess                   成功
 *  @param failed                   失败
 */


- (void)mWAPFileUploadWithData:(NSData *)data
                     uploadTNP:(TNPMWAPUploadReqInputForm *)tnp
                      progress:(nullable void (^)(NSURLSession *session, NSURLSessionTask *task, int64_t bytesSent, int64_t totalBytesSent, int64_t totalBytesExpectedToSend))progress
                       succeed:(void (^)(NSString *))succeed
                       failure:(void (^)(NSError *))failure;

#pragma mark -业委会接口
/*
 提交业委会审核申请 接口
*/
- (void)uploadImageFileWithData:(NSData *)data
                  progress:(nullable void (^)(NSURLSession *session, NSURLSessionTask *task, int64_t bytesSent, int64_t totalBytesSent, int64_t totalBytesExpectedToSend))progress
                   succeed:(void (^)(NSString *))succeed
                   failure:(void (^)(NSError *))failure;

@end

NS_ASSUME_NONNULL_END

