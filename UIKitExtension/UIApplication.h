//
//  UIApplication.h
//  FoundationExtension
//
//  Created by Jeong YunWon on 10. 3. 27..
//  Copyright 2010 youknowone.org All rights reserved.
//

/*!
 *  @file
 *  @brief [UIApplication][0] category extension collections.
 *      [0]: http://developer.apple.com/library/ios/#DOCUMENTATION/UIKit/Reference/UIApplication_Class/Reference/Reference.html
 */

#import <UIKit/UIKit.h>

#if TARGET_OS_IOS

/*!
 *  @brief [UIApplication][0] shortcuts.
 *      [0]: http://developer.apple.com/library/ios/#DOCUMENTATION/UIKit/Reference/UIApplication_Class/Reference/Reference.html
 */
@interface UIApplication (Shortcuts)

/*!
 *  @brief statusbar size calculated for current orientation.
 */
@property(nonatomic, readonly) CGRect statusBarFrameForCurrentOrientation;

@end


/*!
 *  @brief Safe private methods of [UIApplication][0]
 *      [0]: http://developer.apple.com/library/ios/#DOCUMENTATION/UIKit/Reference/UIApplication_Class/Reference/Reference.html
 */
@interface UIApplication (Private)

/*!
 *  @brief statusbar size calculated for given orientation.
 *  @param orientation The orientation to calculate status bar frame.
 */
- (CGRect)statusBarFrameForOrientation:(UIInterfaceOrientation)orientation;

@end


@interface UIApplication (Deprecated)

//! @deprecated Use statusBarFrameForCurrentOrientation
- (CGSize)statusBarOrientationReducedSize __deprecated;
//! @deprecated Use statusBarFrameForOrientation:
- (CGSize)statusBarSizeForOrientation:(UIInterfaceOrientation)orientation __deprecated;

@end

#endif
