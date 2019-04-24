//
//  VisaCheckoutButtonDelegate.h
//  BNPayment
//
//  Created by Igor Nabokov on 24/04/2019.
//  Copyright © 2019 Bambora. All rights reserved.
//

#ifndef VisaCheckoutButtonDelegate_h
#define VisaCheckoutButtonDelegate_h

@protocol VisaCheckOutButtonDelegate <NSObject>

-(void)VisaCheckoutSuccess:(NSDictionary *)VisaCheckoutPayment;

-(void)VisaCheckoutFail:(NSString *)info;

-(void)VisaCheckoutSetupComplete;

@end

#endif /* VisaCheckoutButtonDelegate_h */
