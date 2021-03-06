//
//  MSSCalendarViewController.h
//  MSSCalendar
//
//  Created by 于威 on 16/4/3.
//  Copyright © 2016年 于威. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MSSCalendarViewControllerDelegate <NSObject>
- (void)calendarViewConfirmClickWithStartDate:(NSInteger)startDate endDate:(NSInteger)endDate;
@end

typedef NS_ENUM(NSInteger, MSSCalendarViewControllerType)
{
    MSSCalendarViewControllerLastType = 0,// 只显示当前月之前
    MSSCalendarViewControllerMiddleType,// 前后各显示一半
    MSSCalendarViewControllerNextType// 只显示当前月之后
};

@interface MSSCalendarViewController : UIViewController<UICollectionViewDelegate,UICollectionViewDataSource>
@property (nonatomic,weak)id<MSSCalendarViewControllerDelegate> delegate;
@property (nonatomic,assign)NSInteger startDate;// 选中开始时间
@property (nonatomic,assign)NSInteger endDate;// 选中结束时间

@property (nonatomic,assign)NSInteger showMonth;// 显示几个月的数据
@property (nonatomic,assign)MSSCalendarViewControllerType type;

@property (nonatomic,assign)BOOL afterTodayCanTouch;// 今天之后的日期是否可以点击
@property (nonatomic,assign)BOOL beforeTodayCanTouch;// 今天之前的日期是否可以点击

@end
