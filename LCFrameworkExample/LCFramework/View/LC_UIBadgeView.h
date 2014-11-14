//
//  LC_UIBadgeView.h
//  LCFramework

//  Created by Licheng Guo . ( SUGGESTIONS & BUG titm@tom.com ) on 13-9-21.
//  Copyright (c) 2014年 Licheng Guo iOS developer ( http://nsobject.me ).All rights reserved.
//  Also see the copyright page ( http://nsobject.me/copyright.rtf ).
//
//

#import <UIKit/UIKit.h>

@interface LC_UIBadgeView : UIView

@property(nonatomic,retain) UIView * badgeView;
@property(nonatomic,retain) NSString * valueString;

@property(nonatomic,assign) BOOL hideWhenEmpty;
@property(nonatomic,assign) BOOL kawaiiBubble;

- (id)initWithFrame:(CGRect)frame valueString:(NSString *)valueString;

@end
