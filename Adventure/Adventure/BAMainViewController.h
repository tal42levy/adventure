//
//  BAMainViewController.h
//  Adventure
//
//  Created by Aaron Kawalsky on 12/16/12.
//  Copyright (c) 2012 Tal Levy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface BAMainViewController : UIViewController {
    CLLocationManager *locManager;
}
@property (strong, nonatomic) IBOutlet UIButton *locButton;
- (IBAction)getLocation:(id)sender;

@end