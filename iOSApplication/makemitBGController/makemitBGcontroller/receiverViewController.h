//
//  receiverViewController.h
//  makemitBGcontroller
//
//  Created by Magnus Johnson on 4/15/17.
//  Copyright © 2017 MagMHJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface receiverViewController : UIViewController {
    int testMotorAngle;
    IBOutlet UILabel *currentMotorAngle;
}

- (IBAction)addToMotorAngle:(id)sender;
- (IBAction)subtractFromMotorAngle:(id)sender;
- (IBAction)sendMotorAngle:(id)sender;
- (IBAction)toggleController:(id)sender;

@end
