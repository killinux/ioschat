//
//  WCLoginViewController.h
//  ioschat
//
//  Created by haoning on 14-12-01.
//  Copyright (c) 2014年 haoning. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WCUserProfileViewController.h"
@interface WCLoginViewController : UIViewController
{
    IBOutlet UIImageView *_userHead;
    IBOutlet UILabel *_userLoginName;
    IBOutlet UITextField *_userPassword;
    IBOutlet UIButton *_loginButton;
    IBOutlet UIButton *_registerButton;
    IBOutlet UINavigationController *mainTab;
    IBOutlet UITextField *modifiedLoginName;
    IBOutlet WCUserProfileViewController *myProfile;
    
}
- (IBAction)registerAccount:(id)sender;
- (IBAction)shiftAccount:(id)sender;
- (IBAction)startLogin:(id)sender;
@end
