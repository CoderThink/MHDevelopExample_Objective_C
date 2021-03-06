//
//  SUReactiveView.h
//  SenbaUsed
//
//  Created by senba on 2017/4/10.
//  Copyright © 2017年 CoderMikeHe. All rights reserved.
//  MVVM With RAC 和 MVVM Without RAC 开发模式中 控制器保证 View bind viewModel
//  
#import <Foundation/Foundation.h>
/// A protocol which is adopted by views which are backed by view models.
@protocol SUReactiveView <NSObject>

/// Binds the given view model to the view.
///
/// viewModel - The view model
- (void)bindViewModel:(id)viewModel;

@end
