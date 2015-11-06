//
//  SXScanViewController.h
//  二维码
//
//  Created by ShaoPro on 15/10/8.
//  Copyright © 2015年 ShaoPro. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
//扫描完成
typedef void(^myBlock) (NSString * ScanString);
/**
 * 扫描二维码:
 */
@interface SXScanViewController : UIViewController<AVCaptureMetadataOutputObjectsDelegate>
{
    int num;
    BOOL upOrdown;
    NSTimer * timer;  //定时器
}

@property (strong,nonatomic)AVCaptureDevice * device;

@property (strong,nonatomic)AVCaptureDeviceInput * input;

@property (strong,nonatomic)AVCaptureMetadataOutput * output;

@property (strong,nonatomic)AVCaptureSession * session;

@property (strong,nonatomic)AVCaptureVideoPreviewLayer * preview;

@property (nonatomic, retain) UIImageView * line;


@property (strong,nonatomic) myBlock block;
/**
 *   扫描完成
 */
- (void)ScanBackfromeString: (myBlock)block;

@end
