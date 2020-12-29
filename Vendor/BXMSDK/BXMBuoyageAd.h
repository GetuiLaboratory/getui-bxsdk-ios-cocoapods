//
//  BXMBuoyageAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/5/19.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMNativeLocalVideoAd.h"
@class BXMBuoyageAd;

NS_ASSUME_NONNULL_BEGIN


@protocol BXMBuoyageAdDelagate <NSObject>
@optional
/**
        浮标加载数据成功
 */
-(void)bxmBuoyageLoadDataSuccess:(BXMBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView  ;
/**
 浮标展示成功
 */
-(void)bxmBuoyageShowSuccess:(BXMBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView ;

/**
          浮标加载失败
 */
-(void)bxmBuoyageloadFailure:(NSError *)error buoyageAd:(BXMBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView ;

/**
          浮标点点击
 */
-(void)bxmBuoyageClick:(BXMBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView;


/**
         关闭详情页
 */
-(void)bxmBuoyageCloseDetail:(BXMBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView;

@end


@interface BXMBuoyageAd : NSObject

@property(nonatomic,weak)id <BXMBuoyageAdDelagate> delegate;


/**
        初始化浮标j
 */
- (instancetype)initWithAdId:(NSString *)adId
                       frame:(CGRect)frame
                  controller:(UIViewController *)controller;

/**
        加载浮标
 */
-(void)bxm_loadBuoyage;

/***
    展示浮标
 */
-(void)bxm_buoyageShowView:(UIView *)buoyageView;

/**
        配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(BXMNativeLocalVideoAd *)localVideoAd;
@end

NS_ASSUME_NONNULL_END
