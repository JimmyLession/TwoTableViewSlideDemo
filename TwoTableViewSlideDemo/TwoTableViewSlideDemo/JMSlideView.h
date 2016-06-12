//
//  JMSlideView.h
//  TwoTableViewSlideDemo
//
//  Created by lanren on 16/6/7.
//  Copyright © 2016年 雷建民. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMSlideView : UIView



- (instancetype)initWithFrame:(CGRect)frame
                leftDataArray:(NSMutableArray *)leftDataArray
               rightDataArray:(NSMutableArray *)rightDataArray;

/**
 *   该View对应所在的控制器
 */
@property (nonatomic ,strong)UIViewController *parentVC;

@end
