//
//  BXMPopInserAd.h
//  BXMSDKDemo
//
//  Created by Mac on 2020/1/2.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMNativeLocalVideoAd.h"


@protocol BXMInterstitialAdDelagate <NSObject>

@optional

/**
       广告加载成功
 */
-(void)bxmInterstitialAdLoadSucess;

/**
       广告加载失败
 */
-(void)bxmInterstitialAdLoadfailure:(NSError *_Nullable)error;

/**
      广告视图显示成功
 */
-(void)bxmInterstitialAdShowScreenSucess;

/**
       广告视图点击
 */
-(void)bxmInterstitialAdClick;

/**
           广告视图关闭
 */
-(void)bxmInterstitialAdClosed;


@end

NS_ASSUME_NONNULL_BEGIN

@interface BXMInterstitialAd : NSObject

@property(nonatomic,weak)id <BXMInterstitialAdDelagate> delegate;
/// 设置 图片展示的高度 ，请在试图展示之前设置，之后设置无效
@property(nonatomic,assign)CGFloat imageHeight;

/// 初始化
/// @param adId  // 广告位Id
- (instancetype)initInterstitialAdWithAdId:(NSString *)adId;


/**
        配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(BXMNativeLocalVideoAd *)localVideoAd;

/**
      展示开屏广告
     controller ：当前控制器
 */
-(void)presentFromRootController:(UIViewController *)controller;



@end

NS_ASSUME_NONNULL_END
