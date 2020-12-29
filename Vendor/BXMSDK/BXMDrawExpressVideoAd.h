//
//  BXMDrawExpressVideoAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/11/4.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class BXMDrawExpressVideoAd;

@protocol BXMDrawExpressVideoAdDelagate <NSObject>

@optional


-(void)bxmDrawExpressVideoAdLoadSucessWithViews:(NSArray<__kindof UIView *> *)views  expressAd:(BXMDrawExpressVideoAd *)drawVideoAd;

// 拉取广告失败的回调
/// @param error  错误信息
- (void)bxmDrawExpressVideoAdFailToLoadWithError:(NSError *)error expressAd:(BXMDrawExpressVideoAd *)drawVideoAd;
/**
 视频曝光成功
 @param drawVideoAdView 广告视图
 */
-(void)bxmDrawVideoexposureSuccess:(UIView *)drawVideoAdView expressAd:(BXMDrawExpressVideoAd *)drawVideoAd;
/// 广告被点击的回调
/// @param drawVideoAdView 广告视图
- (void)bxmDrawExpressVideoAdViewDidClicked:(UIView *)drawVideoAdView  expressAd:(BXMDrawExpressVideoAd *)drawVideoAd;


/// 广告播放完成
/// @param drawVideoAdView 广告视图
- (void)bxmrawExpressVideoAdViewPlayFinished:(UIView *)drawVideoAdView  expressAd:(BXMDrawExpressVideoAd *)drawVideoAd;

@end
@interface BXMDrawExpressVideoAd : NSObject


@property(nonatomic,weak)id <BXMDrawExpressVideoAdDelagate > delegate;

@property(nonatomic,strong)UIView *contentView;

/**
 初始化
 @param adId 管高位Id
 @param rootViewController 当前控制器
 */
- (instancetype)initWithAdId:(NSString *)adId
                      adSize:(CGSize)adSize
          rootViewController:(UIViewController *)rootViewController;

/**
 加载广告
 @param count 加载条数
 */
- (void)loadAdWithCount:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
