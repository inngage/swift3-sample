//
//  PushNotificationManager.h
//  PushNotificationManager
//
//  Created by Luis on 05/09/16.
//  Copyright © 2016 Inngage. All rights reserved.
//  Version 2.0

#import <Foundation/Foundation.h>
#import <sys/sysctl.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface PushNotificationManager : NSObject<NSURLSessionDataDelegate>

-(void)handlePushRegistration:(NSData *)deviceToken;

-(void)handlePushRegistration:(NSData *)deviceToken identifier:(NSString *)identifier;

-(void)handlePushRegistration:(NSData *)deviceToken customField:(NSDictionary *)customField;

-(void)handlePushRegistration:(NSData *)deviceToken identifier:(NSString *)identifier customField:(NSDictionary *)customField;

-(void)handlePushRegisterForRemoteNotifications:(UIUserNotificationSettings *)notificationSettings;

-(void)handlePushRegistrationFailure:(NSError *)error;

-(void)handlePushReceived:(NSDictionary *)userInfo;

-(void)handleUpdateLocations:(CLLocationManager *)locations;

+ (instancetype)sharedInstance;

@end
