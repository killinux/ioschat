//
//  WCChatSelectionView.h
//  ioschat
//
//  Created by haoning on 14-12-01.
//  Copyright (c) 2014年 haoning. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WCShareMoreDelegate <NSObject>

@optional
-(void)pickPhoto;
-(UIImage *)imageDidFinishPicking;
-(UIImage *)cameraDidFinishPicking;
-(CLLocation *)locationDidFinishPicking;

@end


@interface WCChatSelectionView : UIView


@property (nonatomic,assign) id<WCShareMoreDelegate> delegate;
@property (nonatomic,retain) UIButton *photoButton;
@property (nonatomic,retain) UIButton *cameraButton;
@property (nonatomic,retain) UIButton *locationButton;
@property (nonatomic,retain) UIButton *vcardButton;
@property (nonatomic,retain) UIButton *voipChatButton;
@property (nonatomic,retain) UIButton *videoChatButton;
@property (nonatomic,retain) UIButton *voidInputButton;
@property (nonatomic,retain) UIButton *moreButton;




@end



