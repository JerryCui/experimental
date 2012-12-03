//
//  Socket.h
//  Generic
//
//  Created by Michal Mocny on 11/29/12.
//
//

#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface Socket : CDVPlugin

@property (nonatomic, strong) NSMutableDictionary* sockets;
@property (nonatomic, strong) NSMutableDictionary* socketsAddress;
@property (nonatomic, strong) NSMutableDictionary* socketsPort;
@property (nonatomic) NSUInteger nextSocketId;

- (CDVPlugin*)initWithWebView:(UIWebView*)theWebView;

- (void)create:(CDVInvokedUrlCommand*)command;
- (void)connect:(CDVInvokedUrlCommand*)command;
- (void)write:(CDVInvokedUrlCommand*)command;
- (void)disconnect:(CDVInvokedUrlCommand*)command;
- (void)destroy:(CDVInvokedUrlCommand*)command;

@end