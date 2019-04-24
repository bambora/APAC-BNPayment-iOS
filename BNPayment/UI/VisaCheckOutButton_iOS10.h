#import <UIKit/UIKit.h>
#import "VisaCheckoutLaunchParams.h"
#import <JavaScriptCore/JavaScriptCore.h>
#import "BNBundleUtils.h"
#import "VisaCheckoutButtonDelegate.h"


@interface VisaCheckOutButton_iOS10 : UIWebView


-(void)loadUIWithViewController:(UIViewController *)viewController andData:(VisaCheckoutLaunchParams *)visaCheckoutLaunchParams andLoadingColor:(UIColor *)color;

@property (nonatomic,weak) id <VisaCheckOutButtonDelegate> resultDelegate;


@end
