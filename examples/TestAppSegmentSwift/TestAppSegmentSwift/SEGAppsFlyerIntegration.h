//
//  SEGAppsFlyerIntegration.h
//  AppsFlyerSegmentiOS
//
//  Created by Golan on 5/17/16.
//  Copyright © 2016 AppsFlyer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Analytics/SEGAnalytics.h>
#import <AppsFlyerLib/AppsFlyerTracker.h>

@protocol SEGAppsFlyerDelegate <AppsFlyerTrackerDelegate>

@end

@interface SEGAppsFlyerIntegration : NSObject <SEGIntegration, AppsFlyerTrackerDelegate>

@property (nonatomic, strong) NSDictionary *settings;
@property (nonatomic, strong) AppsFlyerTracker *appsflyer;
@property (nonatomic, strong) SEGAnalytics *analytics;


- (instancetype)initWithSettings:(NSDictionary *)settings withAnalytics:(SEGAnalytics *) analytics;
- (void) trackLaunch;
@end