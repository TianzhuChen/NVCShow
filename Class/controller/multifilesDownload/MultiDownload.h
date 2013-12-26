//
//  MultiDownload.h
//  LeishiDownload
//
//  Created by Iwinad_CTZ on 11/21/13.
//  Copyright (c) 2013 Iwinad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DownloadFile.h"
#import "ASIHTTPRequest.h"
#import "ASINetworkQueue.h"

extern NSString *const NotificationQueueDownloadComplete;
extern NSString *const NotificationFileDownloadComplete;
extern NSString *const NotificationDownloadFailed;

@interface MultiDownload : NSObject
+(MultiDownload *)sharedInstance;
/**
 *add file to download queue
 */
-(void)addDownloadFile:(DownloadFile *)file;
/**
 *add files to download queue
 */
-(void)addDownloadFiles:(NSArray *)files;

/**
 *stop download queue
 */
-(void)cancleDownload;

-(void)addNotification:(NSString *)notificationName
              selector:(SEL)selector
              delegate:(id)delegate;
-(void)removeAllNotifications;
@end
