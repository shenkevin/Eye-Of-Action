//
//  ViewController.h
//  Ball3
//
//  Created by Marcel Wichmann on 1/24/13.
//  Copyright (c) 2013 Marcel Wichmann. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)buttonPressed:(UIButton *)sender;

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictionArray;




@end
