//
//  DetailViewController.h
//  MDTest
//
//  Created by Daniel Mathews on 2015-01-07.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

