//
//  WCRegisterViewController.h
//  ioschat
//
//  Created by haoning on 14-12-01.
//  Copyright (c) 2014年 haoning. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WCRegisterViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate,UIActionSheetDelegate>
{
    IBOutlet UIView *loginNumber;
    IBOutlet UIView *loginPass;
    IBOutlet UITextField *userLoginName;
    IBOutlet UITextField *userPassword;
    IBOutlet UITextField *userNickName;
    IBOutlet UITextField *userDesc;
    IBOutlet UIButton *userHead;
    
}
- (IBAction)changeUserHead:(id)sender;

@end
