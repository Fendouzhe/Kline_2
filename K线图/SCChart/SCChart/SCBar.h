//
//  PNBar.h
//  PNChartDemo
//
//  Created by leilurong on 15/3/12.
//  Copyright (c) 2015年 leilurong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCBar : UIView

@property (nonatomic) float grade;

@property (nonatomic,strong) CAShapeLayer * chartLine;

@property (nonatomic, strong) UIColor * barColor;

@end
