//
//  BXMH5BridgeConfig.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/9/27.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BXMH5BridgeConfig : NSObject
/**
    初始化
 */
-(void)H5BridgeConfig;

/**
 实现交互逻辑
 @param viewController 当前控制器
 @param webView 当前使用WebView
 @param request 当前 Web request
 */
-(BOOL)h5BridgeController:(UIViewController *)viewController
                  webView:(WKWebView *)webView
            handleRequest:(NSURLRequest *)request;

@end

NS_ASSUME_NONNULL_END
