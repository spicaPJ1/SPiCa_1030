//
//  PaletteViewController.h
//  SPiCa
//
//  Created by 島崎　恵美 on 2014/10/27.
//  Copyright (c) 2014年 島崎　恵美. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PaletteViewController : UIViewController
{
    UISegmentedControl *SC;
}

//@property UIImage *backview;


@property(nonatomic, retain) IBOutlet UISegmentedControl *SC;
//@property(weak, nonatomic) IBOutlet UISegmentedControl *sc;

-(IBAction)SegChanged:(id)sender;

@end
