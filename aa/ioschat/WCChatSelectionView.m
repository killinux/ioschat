//
//  WCChatSelectionView.m
//  ioschat
//
//  Created by haoning on 14-12-01.
//  Copyright (c) 2014年 haoning. All rights reserved.
//

#import "WCChatSelectionView.h"
#define CHAT_BUTTON_SIZE 70
#define INSETS 10


@implementation WCChatSelectionView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        //写死面板的高度
        [self setBackgroundColor:[UIColor whiteColor]];
        
        
        // Initialization code
        _photoButton =[UIButton buttonWithType:UIButtonTypeCustom];
        [_photoButton setFrame:CGRectMake(INSETS, INSETS, CHAT_BUTTON_SIZE , CHAT_BUTTON_SIZE)];
        [_photoButton setImage:[UIImage imageNamed:@"sharemore_pic"] forState:UIControlStateNormal];
        [_photoButton addTarget:self action:@selector(pickPhoto) forControlEvents:UIControlEventTouchUpInside];
        [self addSubview:_photoButton];
        
    }
    return self;
}





/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/

-(void)pickPhoto
{
    [_delegate pickPhoto];
}

//-(UIImage *)imageDidFinishPicking
//{
//    
//}
//-(UIImage *)cameraDidFinishPicking
//{
//    
//}
//-(CLLocation *)locationDidFinishPicking
//{
//    
//}
-(void)dealloc
{
    //[super dealloc];
    
}

@end
