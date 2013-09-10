//
//  ViewController.h
//  GLKViewSnapshot
//
//  Created by Nishiyama Nobuyuki on 2013/09/10.
//  Copyright (c) 2013年 Nishiyama Nobuyuki. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface ViewController : GLKViewController

@property (nonatomic, strong) IBOutlet UIButton* snapshot;
@property (nonatomic, strong) IBOutlet UIImageView* image_view;


- (IBAction)doSnapshot;

@end
