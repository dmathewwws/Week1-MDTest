//
//  Song.h
//  MDTest
//
//  Created by Daniel Mathews on 2015-01-07.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Song : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *artist;
@property (strong, nonatomic) UIImage *image;

- (instancetype)initWithTitleAndImage:(NSString*) title artist:(NSString*) artist image:(UIImage*) image;

@end