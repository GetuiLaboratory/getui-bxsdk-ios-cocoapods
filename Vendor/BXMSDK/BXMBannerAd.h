//
//  BXMBannerAd.h
//  BXMSDKDemo
//
//  Created by Mac on 2020/1/6.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMEnumFile.h"
#import "BXMNativeLocalVideoAd.h"

@class BXMBannerAd;
@protocol BXMBannerAdDelegate <NSObject>

@optional

/**
         数据加载成功
 */
-(void)bxmBannerAdDataLoadSucess:(BXMBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView ;
/**
        视图加载成功
 */
-(void)bxmBannerShowSucess:(BXMBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView;
/**
     视图加载失败
 */
-(void)bxmBannerLoadFailure:(NSError *_Nullable)error bannerAd:(BXMBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView;
/**
     视图点击
 */
-(void)bxmBannerClik:(BXMBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView;

/***
     视图关闭
 */
-(void)bxmBannerClose:(BXMBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView;



@end

NS_ASSUME_NONNULL_BEGIN

@interface BXMBannerAd : NSObject
@property(nonatomic,weak)id < BXMBannerAdDelegate > delegate;
/**
        初始化Banner
        adId    广告ID
         imageSize:图片大小
        frame    banner 位置   frame 的 height设置为 建议设置跟imageSize 的大小差不多，系统将自适应大小
       rootController 设置跟控制器
 */
- (instancetype)initWithAdId:(NSString *)adId
                 bannerFrame:(CGRect )frame
               rootContrller:(UIViewController *)rootController;


//显示 BannerView
-(void)bannerShowView:(UIView *)showView;

/**
        配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(BXMNativeLocalVideoAd *)localVideoAd;

              
@end

NS_ASSUME_NONNULL_END
