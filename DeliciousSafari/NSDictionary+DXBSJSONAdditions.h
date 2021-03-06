//
//  BSJSONAdditions
//
//  Created by Blake Seely on 2/1/06.
//  Copyright 2006 Blake Seely - http://www.blakeseely.com  All rights reserved.
//  Permission to use this code:
//
//  Feel free to use this code in your software, either as-is or 
//  in a modified form. Either way, please include a credit in 
//  your software's "About" box or similar, mentioning at least 
//  my name (Blake Seely).
//
//  Permission to redistribute this code:
//
//  You can redistribute this code, as long as you keep these 
//  comments. You can also redistribute modified versions of the 
//  code, as long as you add comments to say that you've made 
//  modifications (keeping these original comments too).
//
//  If you do use or redistribute this code, an email would be 
//  appreciated, just to let me know that people are finding my 
//  code useful. You can reach me at blakeseely@mac.com
//
// --------------------------------
// Updates for DeliciousSafari
// Prefixed (or otherwise modified all symbols) to have a DX in the name to avoid convflict
// with other plug-ins using this package.
//

//#import <Cocoa/Cocoa.h>

extern NSString *dxJsonIndentString;
extern const int dxJsonDoNotIndent;

@interface NSDictionary (DXBSJSONAdditions)

+ (NSDictionary *)dictionaryWithDXJSONString:(NSString *)jsonString;
- (NSString *)dxJsonStringValue;

@end


@interface NSDictionary (PrivateDXBSJSONAdditions)

- (NSString *)dxJsonStringValueWithIndentLevel:(int)level;
- (NSString *)dxJsonStringForValue:(id)value withIndentLevel:(int)level;
- (NSString *)dxJsonStringForArray:(NSArray *)array withIndentLevel:(int)level;
- (NSString *)dxJsonStringForString:(NSString *)string;
- (NSString *)dxJsonIndentStringForLevel:(int)level;

@end