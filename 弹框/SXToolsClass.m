//
//  SXToolsClass.m
//  Pyramid
//
//  Created by ShaoPro on 15/10/10.
//  Copyright © 2015年 QMX. All rights reserved.
//

#import "SXToolsClass.h"

/**
 *  公共类
 */
@implementation SXToolsClass
+(void)showMessage:(NSString *)message;
{
    UIWindow * window = [UIApplication sharedApplication].keyWindow;
    UIView *showview =  [[UIView alloc]init];
    showview.backgroundColor = [UIColor blackColor];
    showview.frame = CGRectMake(1, 1, 1, 1);
    showview.alpha = 0.6;
    showview.layer.cornerRadius = 5.0f;
    showview.layer.masksToBounds = YES;
    [window addSubview:showview];
    
    UILabel *label = [[UILabel alloc]init];
    
    NSDictionary *attrbute = @{NSFontAttributeName:[UIFont systemFontOfSize:17]};
    
   CGFloat height = [message boundingRectWithSize:CGSizeMake(200, 1000) options:(NSStringDrawingUsesFontLeading | NSStringDrawingUsesLineFragmentOrigin) attributes:attrbute context:nil].size.height;

    label.frame = CGRectMake(10, 5, 200,height);
    label.text = message;
    label.textColor = [UIColor whiteColor];
    label.textAlignment = 1;
    label.numberOfLines = 0;
    label.backgroundColor = [UIColor clearColor];
    label.font = [UIFont boldSystemFontOfSize:15];
    [showview addSubview:label];
    showview.frame = CGRectMake((ScreenWidth - 200- 20)/2, ScreenHeight/2-height/2,200+20, height+10);
    [UIView animateWithDuration:2.0 animations:^{
        showview.alpha = 0;
    } completion:^(BOOL finished) {
        [showview removeFromSuperview];
    }];
}

@end
