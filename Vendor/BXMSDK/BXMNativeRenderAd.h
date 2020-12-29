//
//  BXMNativeRenderAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/9/11.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMNativeAdDataObject.h"
#import "BXMNativeLocalVideoAd.h"

@class BXMNativeRenderAd;
NS_ASSUME_NONNULL_BEGIN

@protocol BXMNativeRenderAdDelegate <NSObject>

@optional

/// 广告加载成功
/// @param nativeAdDataArray 广告数据集合
- (void)nativeRendAdsSuccessToLoad:(NSArray<BXMNativeAdDataObject *> *_Nullable)nativeAdDataArray   nativeAd:(BXMNativeRenderAd *)nativeAd;

/// 广告加载失败
/// @param error 失败原因
- (void)nativeRendAdsLoadFailWithError:(NSError *_Nullable)error    nativeAd:(BXMNativeRenderAd *)nativeAd;

@end


/// 信息流自渲染广告
@interface BXMNativeRenderAd : NSObject


/// 代理
@property (nonatomic, weak) id<BXMNativeRenderAdDelegate> delegate;


/// 初始化广告位
/// @param adId  广告位id
/// @param imageSize  广告图片尺寸
- (instancetype)initWithAdId:(NSString *)adId
                   imageSize:(BXMAdImageSize)imageSize;


/// 加载广告
/// @param count  广告个数（建议不超过3，最大值为10）
- (void)loadRendAdWithCount:(NSInteger)count;


/**
    配置加载本地视频
    使用该功能请确保先跟相关业务人员沟通
 */
-(void)configNativeLocalVideoAd:(BXMNativeLocalVideoAd *)localVideoAd;

@end

NS_ASSUME_NONNULL_END


