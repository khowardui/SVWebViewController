//
//  SVWebViewController.m
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import "SVWebViewController.h"

@interface SVWebViewController () <UIWebViewDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate>

@property (nonatomic, strong) UIBarButtonItem *backBarButtonItem;
@property (nonatomic, strong) UIBarButtonItem *forwardBarButtonItem;
@property (nonatomic, strong) UIBarButtonItem *refreshBarButtonItem;
@property (nonatomic, strong) UIBarButtonItem *stopBarButtonItem;
@property (nonatomic, strong) UIBarButtonItem *actionBarButtonItem;
@property (nonatomic, strong) UIActionSheet *pageActionSheet;

@property (nonatomic, strong) UIWebView *mainWebView;
@property (nonatomic, strong) NSURL *URL;

@end
