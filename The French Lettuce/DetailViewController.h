//
//  DetailViewController.h
//  The French Lettuce
//
//  Created by Scott Boyd on 16/03/2015.
//  Copyright (c) 2015 Scott Boyd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

