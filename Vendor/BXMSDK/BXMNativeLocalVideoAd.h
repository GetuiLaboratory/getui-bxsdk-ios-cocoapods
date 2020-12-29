//
//  BXMNativeLocaVideoAd.h
//  BXMSDK
//
//  Created by weicai on 2020/8/24.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class BXMNativeLocalVideoAd;

/**
    建议使用视频平台
 */
typedef NS_ENUM(NSInteger,BXMLocalVideoType) {
    BXMLocalVideoTypeCSJ,//穿山甲
    BXMLocalVideoTypeGDT,//广点通
};

NS_ASSUME_NONNULL_BEGIN

@protocol BXMNativeLocaVideoAdDelegate <NSObject>

/**
     加载视频
     入口素材
    建议使用视频平台
 */
-(void)bxm_loadNativeVideoWithAdId:(NSString *)adId  loadVideoType:(BXMLocalVideoType)videoType  localVideoAd:(BXMNativeLocalVideoAd *)localVideoAd;

/**
        展示视频
 */
-(void)bxm_showVideoFromController:(UIViewController *)controller localVideoAd:(BXMNativeLocalVideoAd *)localVideoAd;

@end
@interface BXMNativeLocalVideoAd : NSObject

@property(nonatomic,weak)id <BXMNativeLocaVideoAdDelegate> delegate;

/**
        加载视频成功
 */
-(void)bxm_NativeVideoDidSucess;

/**
        加载视频失败
 */
-(void)bxm_NativeVideoDidFaliure:(NSError *)error;

/**
       视频展示成功
 */
-(void)bxm_NativeVideoVisiable;

/**
       视频点击
 */
-(void)bxm_NativeVideoClick;
/**
        是否满足奖励条件
 */
-(void)bxm_NativeVideoFinishVerify:(BOOL)Verify;
/**
       视频未播放完
 */
-(void)bxm_NativeVideoUnFinish;
/**
       视频播放完成
 */
-(void)bxm_NativeVideoFinish;
/**
       视频关闭
 */
-(void)bxm_NativeVideoClose;

@end

NS_ASSUME_NONNULL_END
