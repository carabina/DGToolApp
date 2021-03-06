//
//  Tool_App.h
//  May31_Noon
//
//  Created by Kyungwoo Park on 2016. 4. 23..
//  Copyright © 2016년 Kyungwoo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Tool_Prefix.h"
#import "Tool_GAnalytics.h"

@interface Tool_App : NSObject

@end

@interface NSString (Size)
- (CGSize)sizewithfont:(UIFont*)font;
- (CGSize)sizeWithFont:(UIFont*)font constrainedToSize:(CGSize)size;
@end

@interface NSAttributedString (Size)
- (CGSize)sizeWithConstrainedToSize:(CGSize)size;
@end

@interface UIFont (Custom)
+ (UIFont *)appleSDGothicNeo_BoldSystemFontOfSize:(CGFloat)fontSize;
+ (UIFont *)appleSDGothicNeo_SemiBoldSystemFontOfSize:(CGFloat)fontSize;
+ (UIFont *)appleSDGothicNeo_LightSystemFontOfSize:(CGFloat)fontSize;
+ (UIFont *)appleSDGothicNeo_RegularSystemFontOfSize:(CGFloat)fontSize;
+ (UIFont *)appleSDGothicNeo_MediumSystemFontOfSize:(CGFloat)fontSize;
@end

@interface UIImage (Color)
+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithHexString:(NSString *)hexString;
+ (UIImage *)imageWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;
- (UIColor *)averageColor;//이미지의 평균 색상
@end

@interface UIColor (HexColorAddition)
+ (UIColor *)hx_colorWithHexString:(NSString *)hexString;
+ (UIColor *)hx_colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;
@end

@interface NSString (hx_StringTansformer)
- (NSString *)hx_hexStringTransformFromThreeCharacters;
@end

@interface UIDevice (Info)
+ (NSString *)platformString;
+ (NSString *)platformStringSimple;
+ (NSString *)country;
+ (NSString *)countryShort;
+ (NSString*)language;
+ (NSString*)languageShort;
+ (void)setDebugCountry:(NSString*)country;
+ (void)setDebugLanguage:(NSString*)language;
@end

@interface DGLocalizationHandler : NSObject
+ (NSString *)localizedString:(NSString *)key comment:(NSString *)comment;
@end
