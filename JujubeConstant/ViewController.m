//
//  ViewController.m
//  JujubeConstant
//
//  Created by meo mun on 5/17/15.
//  Copyright (c) 2015 meo mun. All rights reserved.
//

#import "ViewController.h"
#import "Constant.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    //font
    UILabel *label_ = [[UILabel alloc] init];
    label_.text = @"I love ObjC";
    label_.font = FONT_WITH_NAME_SIZE(@"Zapfino", 17);
    label_.frame = CGRectInset(self.view.bounds, 100, 200);
    [self.view addSubview:label_];
    
    //log
    JLogObject(label_);
    
    //version
    JLogObject(CURRENT_VERSION);
    if (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(SYSTEM_VERSION_8))
    {
        JLog(@"Good");
    }
    
    //device
    if (Is_IPhone4)
    {
        JLog(@"This is Iphone 4/4S");
    }
    else if (Is_IPhone5)
    {
        JLog(@"This is Iphone 5/5S");
    }
    else if (Is_iPhone6)
    {
        JLog(@"This is Iphone 6");
    }
    else if (Is_iPhone6Plus)
    {
        JLog(@"This is Iphone 5/5S");
    }
    else if (Is_IPad)
    {
        JLog(@"This is Ipad");
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
