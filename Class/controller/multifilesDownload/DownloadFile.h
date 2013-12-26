//
//  CTZMultiDownloadFile.h
//  LeishiDownload
//
//  Created by Iwinad_CTZ on 11/21/13.
//  Copyright (c) 2013 Iwinad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"

@interface DownloadFile : NSObject
//标记
@property(nonatomic) NSUInteger tag;
//下载的优先级
@property(nonatomic) NSOperationQueuePriority downloadPriority;
//文件下载地址
@property(nonatomic,strong) NSString *downloadPath;
//文件保存目录
@property(nonatomic,strong) NSString *savePath;
//文件下载临时目录
@property(nonatomic,strong) NSString *tempSavePath;

@property(nonatomic,weak) ASIHTTPRequest *downloadRequest;
@end
