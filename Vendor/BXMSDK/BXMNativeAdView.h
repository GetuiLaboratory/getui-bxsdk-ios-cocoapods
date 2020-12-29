//
//  BXMNativeAdView.h
//  BXMSDK
//
//  Created by 侯亚迪 on 2020/1/8.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BXMNativeAdDataObject.h"
#import "BXMNativeLocalVideoAd.h"


NS_ASSUME_NONNULL_BEGIN

@protocol BXMNativeAdViewDelegate <NSObject>

@optional

/// 广告被点击
- (void)nativeAdDidClick;


/// 广告详情页关闭
- (void)nativeAdDetailViewDidClosed;

@end

@interface BXMNativeAdView : UIView

/// 广告数据
@property (nonatomic, strong, readonly) BXMNativeAdDataObject *dataObject;

/// 视频播放视图，绑定数据后自动生成
@property (nonatomic, strong, readonly) UIView *mediaView;

/// logo视图，绑定数据后自动生成
@property (nonatomic, strong, readonly) UIImageView *logoView;

/// 当前视图控制器
@property (nonatomic, weak) UIViewController *rootViewController;

/// 代理
@property (nonatomic, weak) id<BXMNativeAdViewDelegate> delegate;


/// 注册可点击视图
/// @param dataObject 广告数据
/// @param containerView 容器视图
/// @param clickableViews 可点击的视图数组
- (void)registerDataObject:(BXMNativeAdDataObject *)dataObject
                 container:(__kindof UIView *)containerView
            clickableViews:(NSArray<UIView *> *)clickableViews;

/**
    配置加载本地视频
    使用该功能请确保先跟相关业务人员沟通
 */
-(void)configNativeLocalVideoAd:(BXMNativeLocalVideoAd *)localVideoAd;



/// 注销数据对象，防止重用
- (void)unregisterDataObject;


@end

NS_ASSUME_NONNULL_END
