/*
 The MIT License (MIT)
 
 Copyright (C) 2014 Carlos Vidal
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 documentation files (the "Software"), to deal in the Software without restriction, including without
 limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 the Software, and to permit persons to whom the Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial
 portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO
 EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
 OR OTHER DEALINGS IN THE SOFTWARE LICENSE
 */

//
//  NKOColorPickerView.h
//  ColorPicker
//
//  Created by Carlos Vidal
//  Based on work by Fabián Cañas and Gilly Dekel
//

#import <UIKit/UIKit.h>

@protocol NKOColorPickerViewDelegate
- (void)colorDidChange:(UIColor *)color identifier:(NSString *)identifier;
@end


@interface NKOColorPickerView : UIView

@property (nonatomic, strong) UIColor *color;
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, strong) id delegate;

- (id)initWithFrame:(CGRect)frame color:(UIColor*)color identifier:(NSString *)identifier delegate:(id)delegate;

@end

