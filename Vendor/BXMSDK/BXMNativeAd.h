//
//  BXMNativeAd.h
//  BXMSDK
//
//  Created by 侯亚迪 on 2020/1/8.
//  Copyright © 2020 Mac. All rights reserved.
//

//#warning -------------该类只支持老广告位维护，信息广告位已废弃请使用 如需使用自渲染功能 BXMNativeRenderAd 类

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMNativeAdDataObject.h"
#import "BXMNativeLocalVideoAd.h"

@class BXMNativeAd;
NS_ASSUME_NONNULL_BEGIN

@protocol BXMNativeAdDelegate <NSObject>

@optional

/// 广告加载成功
/// @param nativeAdDataArray 广告数据集合
- (void)nativeAdsSuccessToLoad:(NSArray<BXMNativeAdDataObject *> *_Nullable)nativeAdDataArray   nativeAd:(BXMNativeAd *)nativeAd;

/// 广告加载失败
/// @param error 失败原因
- (void)nativeAdsLoadFailWithError:(NSError *_Nullable)error    nativeAd:(BXMNativeAd *)nativeAd;

@end


/// 信息流自渲染广告
@interface BXMNativeAd : NSObject


/// 代理
@property (nonatomic, weak) id<BXMNativeAdDelegate> delegate;


/// 初始化广告位
/// @param adId  广告位id
/// @param imageSize  广告图片尺寸
- (instancetype)initWithAdId:(NSString *)adId
                   imageSize:(BXMAdImageSize)imageSize;


/// 加载广告
/// @param count  广告个数（建议不超过3，最大值为10）
- (void)loadAdWithCount:(NSInteger)count;

/**
    配置加载本地视频
    使用该功能请确保先跟相关业务人员沟通
 */
-(void)configNativeLocalVideoAd:(BXMNativeLocalVideoAd *)localVideoAd;

@end

NS_ASSUME_NONNULL_END
