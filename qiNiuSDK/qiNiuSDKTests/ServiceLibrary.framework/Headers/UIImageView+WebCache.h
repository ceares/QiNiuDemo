//
//  UIImageView+SDWebCache.h
//  SDWebData
//
//  Created by stm on 11-7-13.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN
@interface UIImageView(SDWebCacheCategory)

#pragma mark-图片下载

- (void)setImageWithURL:(NSURL *)url;

//refreshCache
- (void)setImageWithURL:(NSURL *)url refreshCache:(BOOL)refreshCache;

//placeholder  默认图片
- (void)setImageWithURL:(NSURL *)url refreshCache:(BOOL)refreshCache placeholderImage:(nullable UIImage *)placeholder;

//返回下载地址、图片（此时需要在返回的block中将返回的图片赋值给本对象）
- (void)setImageWithURL:(NSURL *)url
           refreshCache:(BOOL)refreshCache
       placeholderImage:(nullable UIImage *)placeholder
                success:(nullable void (^)(NSURL *url, UIImage *image))success
                failure:(nullable void (^)(NSURL *url, NSError *error))failure;

#pragma mark-取消图片下载

//取消本对象的图片下载（本对象重复下载时不需要调用该方法，在第二次调用下载时自动调用该方法取消上一次的下载）
- (void)cancelImageDownloadTask;

#pragma mark-删除图片缓存

//根据URL删除图片缓存
+(BOOL)removeImageWithUrl:(NSURL *)url;

@end

NS_ASSUME_NONNULL_END