//
//  MPRssAppDelegate.h
//  rss
//
//  Created by Martin on 12/11/12.
//  Copyright (c) 2012 Martin. All rights reserved.
//
#pragma mark - Macros
#define IS_IPHONE ( [[[UIDevice currentDevice] model] isEqualToString:@"iPhone"] )
#define IS_IPHONE_5_HEIGHT [UIScreen mainScreen].bounds.size.height >= 568.0f
#define IS_IPHONE_5 ( IS_IPHONE && IS_IPHONE_5_HEIGHT )


#import <UIKit/UIKit.h>

@interface MPRssAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
