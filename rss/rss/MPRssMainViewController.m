//
//  MPRssMainViewController.m
//  rss
//
//  Created by Martin on 12/11/12.
//  Copyright (c) 2012 Martin. All rights reserved.
//

#import "MPRssMainViewController.h"
#import "MPRssAppDelegate.h"

@interface MPRssMainViewController ()

@end

@implementation MPRssMainViewController
@synthesize label;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)amIiPhone5:(id)sender
{
    if(IS_IPHONE_5) {
        [[self label] setText:@"This is iPhone 5."];
    } else {
        [[self label] setText:@"This is not iPhone 5!"];
    }
}
@end
