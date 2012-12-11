//
//  MPRssAppDelegate.h
//  rss
//
//  Created by Martin on 12/11/12.
//  Copyright (c) 2012 Martin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPRssAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
