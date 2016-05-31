//
//  QiniuAuthPolicy.m
//  qiNiuDemo
//
//  Created by 程国帅 on 16/5/31.
//  Copyright © 2016年 chengs. All rights reserved.
//

#import "QiniuAuthPolicy.h"
#import <CommonCrypto/CommonDigest.h>
#include <CommonCrypto/CommonHMAC.h>
#import "QNUrlSafeBase64.h"
#import "QN_GTM_Base64.h"

@implementation QiniuAuthPolicy

+ (NSString*)dictionryToJSONString:(NSMutableDictionary *)dictionary
{
    NSError *parseError = nil;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dictionary options:NSJSONWritingPrettyPrinted error:&parseError];

    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

+ (NSString *)token{

    return [QiniuAuthPolicy makeToken:@"0E7b15eWUOy70z0xMyZzI4tJavS9dnb2b9mrqszY" secretKey:@"9zyzOj-B-gCca-D81MiOVdctmYFM3Q1YVXcD48wZ"];

}

+ (NSString *) hmacSha1Key:(NSString*)key textData:(NSString*)text
 {
     const char *cData  = [text cStringUsingEncoding:NSUTF8StringEncoding];
     const char *cKey = [key cStringUsingEncoding:NSUTF8StringEncoding];

     uint8_t cHMAC[CC_SHA1_DIGEST_LENGTH];

     CCHmac(kCCHmacAlgSHA1, cKey, strlen(cKey), cData, strlen(cData), cHMAC);

     NSData *HMAC = [[NSData alloc] initWithBytes:cHMAC length:CC_SHA1_DIGEST_LENGTH];

     NSString *hash = [QNUrlSafeBase64 encodeData:HMAC];
     
     
     return hash;
 }

+ (NSString *)makeToken:(NSString *)accessKey secretKey:(NSString *)secretKey
{

    //名字
    NSString *baseName = [self marshal];
    baseName = [baseName stringByReplacingOccurrencesOfString:@" " withString:@""];
    baseName = [baseName stringByReplacingOccurrencesOfString:@"\n" withString:@""];
    NSData   *baseNameData = [baseName dataUsingEncoding:NSUTF8StringEncoding];
    NSString *baseNameBase64 = [QNUrlSafeBase64 encodeData:baseNameData];

    NSString *secretKeyBase64 =  [QiniuAuthPolicy hmacSha1Key:secretKey textData:baseNameBase64];

    NSString *token = [NSString stringWithFormat:@"%@:%@:%@",  accessKey, secretKeyBase64, baseNameBase64];

    return token;
}

+ (NSString *)marshal
{
    time_t deadline;
    time(&deadline);

    NSMutableDictionary *dic = [NSMutableDictionary dictionary];

    [dic setObject:@"ceshi" forKey:@"scope"];

    NSNumber *escapeNumber = [NSNumber numberWithLongLong:3464706673];
    [dic setObject:escapeNumber forKey:@"deadline"];

    NSString *json = [QiniuAuthPolicy dictionryToJSONString:dic];
    
    return json;
}


@end
