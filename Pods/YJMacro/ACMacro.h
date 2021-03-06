//
//  ACMacro.h
//  YJACMacro
//
//  Created by ChenEason on 16/9/26.
//  Copyright © 2016年 ChenEason. All rights reserved.
//

#ifndef YJACMacro_h
#define YJACMacro_h


///正常字体
#define H30 [UIFont systemFontOfSize:30]
#define H29 [UIFont systemFontOfSize:29]
#define H28 [UIFont systemFontOfSize:28]
#define H27 [UIFont systemFontOfSize:27]
#define H26 [UIFont systemFontOfSize:26]
#define H25 [UIFont systemFontOfSize:25]
#define H24 [UIFont systemFontOfSize:24]
#define H23 [UIFont systemFontOfSize:23]
#define H22 [UIFont systemFontOfSize:22]
#define H21 [UIFont systemFontOfSize:21]
#define H20 [UIFont systemFontOfSize:20]
#define H19 [UIFont systemFontOfSize:19]
#define H18 [UIFont systemFontOfSize:18]
#define H17 [UIFont systemFontOfSize:17]
#define H16 [UIFont systemFontOfSize:16]
#define H15 [UIFont systemFontOfSize:15]
#define H14 [UIFont systemFontOfSize:14]
#define H13 [UIFont systemFontOfSize:13]
#define H12 [UIFont systemFontOfSize:12]
#define H11 [UIFont systemFontOfSize:11]
#define H10 [UIFont systemFontOfSize:10]
#define H8 [UIFont systemFontOfSize:8]

///粗体
#define HB40 [UIFont boldSystemFontOfSize:40]
#define HB30 [UIFont boldSystemFontOfSize:30]
#define HB29 [UIFont boldSystemFontOfSize:29]
#define HB28 [UIFont boldSystemFontOfSize:28]
#define HB27 [UIFont boldSystemFontOfSize:27]
#define HB26 [UIFont boldSystemFontOfSize:26]
#define HB25 [UIFont boldSystemFontOfSize:25]
#define HB24 [UIFont boldSystemFontOfSize:24]
#define HB23 [UIFont boldSystemFontOfSize:23]
#define HB22 [UIFont boldSystemFontOfSize:22]
#define HB21 [UIFont boldSystemFontOfSize:21]
#define HB20 [UIFont boldSystemFontOfSize:20]
#define HB19 [UIFont boldSystemFontOfSize:19]
#define HB18 [UIFont boldSystemFontOfSize:18]
#define HB17 [UIFont boldSystemFontOfSize:17]
#define HB16 [UIFont boldSystemFontOfSize:16]
#define HB15 [UIFont boldSystemFontOfSize:15]
#define HB14 [UIFont boldSystemFontOfSize:14]
#define HB13 [UIFont boldSystemFontOfSize:13]
#define HB12 [UIFont boldSystemFontOfSize:12]
#define HB11 [UIFont boldSystemFontOfSize:11]
#define HB10 [UIFont boldSystemFontOfSize:10]
#define HB8 [UIFont boldSystemFontOfSize:8]

///常用颜色
#define black_color     [UIColor blackColor]
#define blue_color      [UIColor blueColor]
#define brown_color     [UIColor brownColor]
#define clear_color     [UIColor clearColor]
#define darkGray_color  [UIColor darkGrayColor]
#define darkText_color  [UIColor darkTextColor]
#define white_color     [UIColor whiteColor]
#define yellow_color    [UIColor yellowColor]
#define red_color       [UIColor redColor]
#define orange_color    [UIColor orangeColor]
#define purple_color    [UIColor purpleColor]
#define lightText_color [UIColor lightTextColor]
#define lightGray_color [UIColor lightGrayColor]
#define green_color     [UIColor greenColor]
#define gray_color      [UIColor grayColor]
#define magenta_color   [UIColor magentaColor]

#pragma mark - Funtion Method (宏 方法)

#define V_IMAGE(imgName) [UIImage imageNamed:imgName]

#define URL(url) [NSURL URLWithString:url]
#define string(str1,str2) [NSString stringWithFormat:@"%@%@",str1,str2]
#define s_str(str1) [NSString stringWithFormat:@"%@",str1]
#define s_Num(num1) [NSString stringWithFormat:@"%d",num1]
#define s_Integer(num1) [NSString stringWithFormat:@"%ld",num1]


#endif
