//
//  favSeriesViewController.h
//  启迪学堂
//
//  Created by 梁伟 on 15/4/16.
//  Copyright (c) 2015年 蒲石. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SuperViewController.h"
@interface favSeriesViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
@property(nonatomic,strong) UITableView *tableView;

@end
