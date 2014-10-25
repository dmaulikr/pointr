//
//  LoginRegister2ViewController.h
//  Pointr
//
//  Created by Adam Gleichsner on 7/26/14.
//  Copyright (c) 2014 Brushfire Inc. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface LoginRegisterViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *usernameTextField;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;
@property (strong, nonatomic) IBOutlet UITapGestureRecognizer *tap;
@property (weak, nonatomic) IBOutlet UILabel *errorMessage;

@property (weak, nonatomic) IBOutlet UIButton *loginButton;
@property (weak, nonatomic) IBOutlet UIButton *registerButton;
@end
