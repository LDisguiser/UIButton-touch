//
//  UIButton+touch.h
//  demo
//
//  Created by 李贺 on 2019/11/1.
//  Copyright © 2019 李贺. All rights reserved.
//

#import <UIKit/UIKit.h>

#define defaultInterval .5  // 默认时间间隔

@interface UIButton (touch)

/// 设置点击时间间隔
@property (nonatomic, assign) NSTimeInterval timeInterval;
/// 用于设置单个按钮不需要被hook
@property (nonatomic, assign) BOOL isIgnore;

@end
