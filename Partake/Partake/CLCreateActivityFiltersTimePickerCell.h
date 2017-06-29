//
//  CLCreateActivityFiltersTimePickerCell.h
//  Partake
//
//  Created by Pablo Episcopo on 4/10/15.
//  Copyright (c) 2015 SCF Ventures LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CLTableViewCell.h"
#import "CLCellConfigurationProtocol.h"

@interface CLCreateActivityFiltersTimePickerCell : CLTableViewCell <CLCellConfigurationProtocol>

@property (weak, nonatomic) IBOutlet UIDatePicker *timePicker;

- (void)getTimeValueWithCompletion:(void (^)(NSDate *date, NSString *stringTime))completion;

@end
