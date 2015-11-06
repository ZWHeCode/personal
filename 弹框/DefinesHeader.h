//
//  Header.h
//
//  Created by chens on 14-10-11.
//  Copyright (c) 2014年   apple_02. All rights reserved.
//

#ifndef Patient_Header_h
#define Patient_Header_h

//versions
#define SYS_Versions    [[UIDevice currentDevice].systemVersion intValue]

//deviceScreen type
#define iPhone4s ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

//size of screen
#define ScreenHeight    [UIScreen mainScreen].bounds.size.height

#define ScreenWidth     [UIScreen mainScreen].bounds.size.width

//ViewController.view Visible Start Y
#define ViewStartY      (SYS_Versions>=7?20:0)

//size seperator
#define CellSeperatorHeight  0.5


#define AlertShow(title,descrition,cancelTitle) {UIAlertView*aler=[[UIAlertView alloc]initWithTitle:title message:descrition delegate:nil cancelButtonTitle:cancelTitle otherButtonTitles:nil, nil];[aler show];}

//color
#define BasicBackGroundColor  [UIColor colorWithRed:101/255.0 green:51/255.0 blue:8/255.0 alpha:1]
#define FanLiBasicColor        [UIColor colorWithRed:254/255.0 green:140/255.0 blue:63/255.0 alpha:1]

#define CommonBackGroundColor [UIColor colorWithRed:245/255.0 green:247/255.0 blue:239/255.0 alpha:1]

#define CellSelectedBackGroundColor

#define TextColorLitterBlack  [UIColor colorWithRed:19/255.0 green:19/255.0 blue:19/255.0 alpha:1]

#define TextColorDeepGray  [UIColor colorWithRed:50/255.0 green:50/255.0 blue:50/255.0 alpha:1]

#define tagLabelColor   [UIColor colorWithRed:168/255.0 green:199/255.0 blue:16/255.0 alpha:1]

#define TextColorGray1  [UIColor colorWithRed:100/255.0 green:100/255.0 blue:100/255.0 alpha:1]

#define ButtonTextColor  [UIColor colorWithRed:253/255.0 green:140/255.0 blue:63/255.0 alpha:1]

#define headViewBGColor  [UIColor colorWithRed:255/255.0 green:143/255.0 blue:8/255.0 alpha:1]

#define BlackTextColor  [UIColor colorWithRed:26/255.0 green:26/255.0 blue:26/255.0 alpha:1]

#define BDTiXianBackGroundColor  [UIColor colorWithRed:242/255.0 green:240/255.0 blue:245/255.0 alpha:1]

#define textcolor [UIColor colorWithRed:150/255.0 green:150/255.0 blue:150/255.0 alpha:1]

#define TextColorGray2  [UIColor colorWithRed:220/255.0 green:220/255.0 blue:220/255.0 alpha:1]

#define SeperatorLineColor  [UIColor colorWithRed:204/255.0 green:204/255.0 blue:204/255.0 alpha:1]

#define TextColorBlue   [UIColor colorWithRed:240/255.0 green:240/255.0 blue:240/255.0 alpha:1]

#define BackGroundColorLitterGray  [UIColor colorWithRed:237/255.0 green:237/255.0 blue:237/255.0 alpha:1]

#define Color(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define SeperatorLineColor  [UIColor colorWithRed:204/255.0 green:204/255.0 blue:204/255.0 alpha:1]

#define ColorWithRGB(r,g,b,p)   [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:p]

//sever
#define TestSever       @"http://test.allpyra.com/"
#define DeveloperSever  @""
#define ReallySever      @"http://m.allpyra.com/"


//#define SeverAddress   

//宏，提示框
#define AlertView(a,b) {UIAlertView*aler=[[UIAlertView alloc]initWithTitle:a message:b delegate:nil cancelButtonTitle:@"取 消" otherButtonTitles:nil, nil];[aler show];}

//font
#define FieldFont [UIFont systemFontOfSize:15]
// 咨询
#define zxDetailBtnColor [UIColor colorWithRed:249/255.0 green:249/255.0 blue:249/255.0 alpha:1]
#define zxTextColor [UIColor colorWithRed:175/255.0 green:175/255.0 blue:175/255.0 alpha:1]
#define DocumentPath [NSString stringWithFormat:@"%@",NSHomeDirectory()]

#define PayNotification @"payNotificationName"

#define ThirdLoginNotification @"ThirdLoginNotificationName"

#define ShareResultNotification @"shareNotification"

#define IOSType @"1"

#define QMXTABLECELL @"Cell"

#define kAppKey         @"3275665185"
#define kRedirectURI    @"http://www.sina.com"
#endif



