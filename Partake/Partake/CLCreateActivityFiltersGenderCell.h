//
//  CLCreateActivityFiltersGenderCell.h
//  Partake
//
//  Created by Pablo Episcopo on 4/10/15.
//  Copyright (c) 2015 SCF Ventures LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CLTableViewCell.h"
#import "CLCellConfigurationProtocol.h"

@interface CLCreateActivityFiltersGenderCell : CLTableViewCell <CLCellConfigurationProtocol>

@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentedViewableControl;

- (void)getSegmentedControlValueWithCompletion:(void (^)(NSString *gender))completion;

@end
