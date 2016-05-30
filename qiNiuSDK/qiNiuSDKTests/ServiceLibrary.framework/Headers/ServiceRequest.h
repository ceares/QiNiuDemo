//
//  ServiceRequest.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/7.
//  Copyright (c) 2015年 wangdong. All rights reserved.

#import "MJExtension.h"
#import "TNP_Header.h"
#import <UIKit/UIKit.h>


#define ASSERT_BLOCK_IS_EMPTY(block) if(!block) do{ NSLog(@"E:回调block不能为空，在方法%s!",__func__);return;}while(0)

@interface ServiceRequest : NSObject

@property (nonatomic, assign) BOOL isAPPTEST;
@property (nonatomic, strong) NSMutableDictionary *authDict;

+ (instancetype)sharedInstance;

// 初始化
- (void)routerLoadWithVerfiyInfo:(TNPUserVerfiyInfo *)verfiy finish:(void(^)(BOOL flag, NSError *error))finish;

//重新加载路由(仅本地,不拉去网络,仅为了适配新接口规则从 ServicSLibrary.framework 中读取已经请求的路由数据)
- (void)resetRouterAPIAddress;

//重新设置超时时间，默认35秒
- (void)timeoutIntervalWithSecond:(double)second;

// 获取路由地址
- (NSString *)routerToAddressWithDomain:(NSString *)domain;

// 重新策略域名指向的ip地址，调用谨慎，会将当前域名对应的ip拉入黑名单，当无ip可用时返回NO
- (BOOL)againStrategyWithDomain:(NSString *)domain;

//重置基础信息
- (void)resetConfigurationWithDictionary:(NSDictionary *)dictionary;
// 重置验证信息
- (void)resetVerfiyWithDictionary:(NSDictionary *)dictionary;

// 获取一个由参数决定的Map请求结构
- (NSDictionary *)combinationPostParamsWithDict:(NSDictionary *)bizDict;

// 获取im服务器连接地址
- (NSArray *)imServiceAddress;

//图片本地存储
+ (NSString *)saveImage:(NSData *)imageData;

#pragma mark -URL下载
// 下载图片(本地缓存）
+ (void)downloadImageWithUrl:(NSURL *)url
                     succeed:(void(^)(UIImage *image))succeed
                     failure:(void(^)(NSString *error))failure;
// 下载文件(本地缓存)
+ (void)downloadDataWithUrl:(NSURL *)url
                    succeed:(void (^)(NSData *data))succeed
                    failure:(void (^)(NSString *error))failure;

// 下载文件（返回下载URL,本地缓存）
+ (void)downloadDataWithCacheWithURL:(NSURL *)url
                             succeed:(void (^)(NSURL *url ,NSData *data))succeed
                             failure:(void (^)(NSURL *url ,NSString *error))failure;

// 下载文件（返回下载URL,本地不缓存）
+ (void)downloadDataWithURL:(NSURL *)url
                    succeed:(void (^)(NSURL *url ,NSData *data))succeed
                    failure:(void (^)(NSURL *url ,NSString *error))failure;

// 下载文件（block 下载进度,本地不缓存）
+ (void)downloadDataWithURL:(NSURL *)url
                    progressBlock:(void (^)(NSUInteger bytesRead, long long totalBytesRead, long long longtotalBytesExpectedToRead))block
                    succeed:(void (^)(NSURL *url ,NSData *data))succeed
                    failure:(void (^)(NSURL *url ,NSString *error))failure;

// 下载文件（block 下载 URL,下载进度,本地不缓存）
+ (void)downloadDataWithURL:(NSURL *)url
                    progressWithURLBlock:(void (^)(NSURL *url ,NSUInteger bytesRead, long long totalBytesRead, long long longtotalBytesExpectedToRead))block
                    succeed:(void (^)(NSURL *url ,NSData *data))succeed
                    failure:(void (^)(NSURL *url ,NSString *error))failure;



// 获取uuidxx
- (NSString *)getUUID;

//是否网络日志打印
- (void)printNetworkRequestLogIsOpen:(BOOL)flag;

//取消所有网络请求
-(void)cancelAllOperations;


//表情包存贮路径(zip 方式存贮)
- (NSString *)faceBagFilePath;


@end
