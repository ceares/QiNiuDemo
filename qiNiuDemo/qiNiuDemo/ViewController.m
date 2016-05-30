//
//  ViewController.m
//  QiNiu
//
//  Created by 程国帅 on 16/5/25.
//  Copyright © 2016年 chengs. All rights reserved.
//

#import "ViewController.h"
#import <qiNiuSDK/QiNiuSDK.h>
#import <qiNiuSDK/HappyDNS.h>
#import <qiNiuSDK/QNUploadOption.h>

#import "UIImage+ResizeMagick.h"

@interface ViewController () <UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong) UIImage *pickImage;
@property (nonatomic, strong) QNUploadManager *upManager;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"七牛云上传测试";

    self.token = @"0E7b15eWUOy70z0xMyZzI4tJavS9dnb2b9mrqszY:fJp8vI5nSZrrxctW8rPQhze4IQY=:eyJzY29wZSI6ImNlc2hpIiwiZGVhZGxpbmUiOjE0NjQ2NDM0Nzd9";

    self.upManager = [[QNUploadManager alloc] init];

    //上传token 文档地址
    // http://developer.qiniu.com/docs/v6/api/reference/security/upload-token.html

}
- (IBAction)downAction:(id)sender {




}

- (IBAction)uploadAction:(id)sender {




    [self uploadFileToQNFilePath:@"/Users/chengs/Desktop/510新为空/A8A57E656FFB99F7F4C64006DAFA5B63.mp4"];

    //     [self uploadVedioToQNFilePath:@"/Users/chengs/Desktop/510新为空/A8A57E656FFB99F7F4C64006DAFA5B63.mp4"];

    //    [self uploadImageToQNFilePath:@"/Users/chengs/Desktop/未命名文件夹/IMG_0010.jpg"];


}
- (void)uploadFileToQNFilePath:(NSString *)filePath {

    NSString *fileName = [NSString stringWithFormat:@"%@_%@_%@.mp4", [self getDateTimeString], [self randomStringWithLength:8],[self getDateTimeString]];

    QNUploadOption *uploadOption = [[QNUploadOption alloc] initWithMime:nil progressHandler:^(NSString *key, float percent) {
        NSLog(@"percent == %.2f", percent);
    }
                                                                 params:nil
                                                               checkCrc:NO
                                                     cancellationSignal:nil];

    [self.upManager putFile:filePath
                        key:fileName
                      token:self.token
                   complete: ^(QNResponseInfo *info, NSString *key, NSDictionary *resp) {

                       NSLog(@" --->> Info: %@  ", info);
                       NSLog(@" ---------------------");
                       NSLog(@" --->> Response: %@,  ", resp);
                   }
                     option:uploadOption];



}

- (void)uploadVedioToQNFilePath:(NSString *)filePath {

    NSData* data = [NSData dataWithContentsOfFile:filePath];

    NSString *fileName = [NSString stringWithFormat:@"%@_%@.mp4", [self getDateTimeString], [self randomStringWithLength:8]];

    QNUploadOption *uploadOption = [[QNUploadOption alloc] initWithMime:nil progressHandler:^(NSString *key, float percent) {
        NSLog(@"percent == %.2f", percent);
    }
                                                                 params:nil
                                                               checkCrc:NO
                                                     cancellationSignal:nil];

    [self.upManager putData:data
                        key:fileName
                      token:self.token
                   complete: ^(QNResponseInfo *info, NSString *key, NSDictionary *resp) {

                       NSLog(@" --->> Info: %@  ", info);
                       NSLog(@" ---------------------");
                       NSLog(@" --->> Response: %@,  ", resp);
                   }
                     option:uploadOption];




}

- (void)uploadImageToQNFilePath:(NSString *)filePath {

    NSData* data = [NSData dataWithContentsOfFile:filePath];

    NSString *fileName = [NSString stringWithFormat:@"%@_%@.jpg", [self getDateTimeString], [self randomStringWithLength:8]];

    QNUploadOption *uploadOption = [[QNUploadOption alloc] initWithMime:nil progressHandler:^(NSString *key, float percent) {
        NSLog(@"percent == %.2f", percent);
    }
                                                                 params:nil
                                                               checkCrc:NO
                                                     cancellationSignal:nil];

    [self.upManager putData:data
                        key:fileName
                      token:self.token
                   complete: ^(QNResponseInfo *info, NSString *key, NSDictionary *resp) {

                       NSLog(@" --->> Info: %@  ", info);
                       NSLog(@" ---------------------");
                       NSLog(@" --->> Response: %@,  ", resp);
                   }
                     option:uploadOption];




}


#pragma mark - Helpers

- (NSString *)getDateTimeString
{
    NSDateFormatter *formatter;
    NSString        *dateString;

    formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd_HH:mm:ss"];

    dateString = [formatter stringFromDate:[NSDate date]];

    return dateString;
}


- (NSString *)randomStringWithLength:(int)len
{
    NSString *letters = @"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    NSMutableString *randomString = [NSMutableString stringWithCapacity: len];

    for (int i=0; i<len; i++) {
        [randomString appendFormat: @"%C", [letters characterAtIndex: arc4random_uniform((int)[letters length])]];
    }
    
    return randomString;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end


//@end
