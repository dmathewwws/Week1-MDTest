//
//  Song.m
//  MDTest
//
//  Created by Daniel Mathews on 2015-01-07.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#import "Song.h"

@implementation Song

- (instancetype)initWithTitleAndImage:(NSString*) title artist:(NSString*) artist image:(UIImage*) image
{
    self = [super init];
    if (self) {
        self.title = title;
        self.artist = artist;
        self.image = image;
    }
    return self;
}

@end
