//
//  BXMSplshAd.h
//  BXMSDK
//
//  Created by Mac on 2020/1/2.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol BXMSplshAdDelegate <NSObject>

@optional

/**
 *  开屏加载成功
 */
-(void)bxmSplashAdLoadSuccess;


/**
 *  开屏 加载失败
 */
-(void)bxmSplashAdloadFailure:(NSError *)error;


/**
 *  开屏广告点击
 */
- (void)bxmSplashAdClick;

/**
 *        关闭开屏广告
 */
- (void)bxmSplashAdClose;

@end


@interface BXMSplashAd : NSObject

@property(nonatomic,weak)id <BXMSplshAdDelegate> delegate;

/**
  初始化
 @param adId 广告位Id
 @param vc  用于逻辑跳转
 */
- (instancetype)initWithAdId:(NSString *)adId
          rootViewController:(UIViewController *)vc;


/**
 
    开屏显示
 @param window   用于展示开屏
 */
-(void)bxm_splashShowWindow:(UIWindow *)window;

/**
 
    开屏显示
    @param window   用于展示开屏
    @param bottomView   用于展示用户自定底部View 请使用全局声明，局部会被释放掉  可设置最大高度 120 
 */
-(void)bxm_splashShowWindow:(UIWindow *)window bottomView:(UIView *)bottomView;

@end


