//
//  CLCreateActivityPendingCell.h
//  Partake
//
//  Created by Pablo Episcopo on 4/24/15.
//  Copyright (c) 2015 SCF Ventures LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CLTableViewCell.h"
#import "CLCellConfigurationProtocol.h"

@interface CLActivityDetailsPendingCell : CLTableViewCell <CLCellConfigurationProtocol>

@property (weak, nonatomic) IBOutlet UIButton *cancelRequestButton;

@end
