//
//  AppDelegate.h
//  Workout Tracker
//
//  Created by John Jakic on 6/12/18.
//  Copyright © 2018 Big Red Dragon Software LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;


@end

