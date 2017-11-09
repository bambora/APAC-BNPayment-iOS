//
//  BNErrorResponse.h
//  Copyright (c) 2016 Bambora ( http://bambora.com/ )
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import "BNBaseModel.h"

@interface BNSubmitSinglePaymentCardGuiSetting : BNBaseModel




typedef enum
{
    payTitleText,
    payCardHolderWatermark,
    payCardNumberWatermark,
    payExpiryDateWatermark,
    paySecurityCodeWatermark,
    payButtonText,
    payButtonColor,
    switchButtonColor
} submitSinglePaymentCardGuiEnum;


@property (nonatomic, strong) NSString *titleText;
@property (nonatomic, strong) NSString *cardHolderWatermark;
@property (nonatomic, strong) NSString *cardNumberWatermark;
@property (nonatomic, strong) NSString *expiryDateWatermark;
@property (nonatomic, strong) NSString *securityCodeWatermark;
@property (nonatomic, strong) NSString *payButtonText;
//Color Hex Code ie. #00ff00@property (nonatomic, strong) NSString *payButtonColor;
@property (nonatomic, strong) NSString *switchButtonColor;
@property (nonatomic, strong) NSString *payButtonColor;

+(NSString *)GetGuiKey:(submitSinglePaymentCardGuiEnum)guiEnum;


@end


