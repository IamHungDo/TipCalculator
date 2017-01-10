//
//  SettingsViewController.h
//  Tipster
//
//  Created by Hung Do on 1/9/17.
//  Copyright © 2017 Hung Do. All rights reserved.
//

#ifndef SettingsViewController_h
#define SettingsViewController_h


@class SettingsViewController;

@protocol SettingsViewControllerDelegate <NSObject>
- (void)addItemViewController:(SettingsViewController *)controller didFinishEnteringItem:(NSString *)item;
@end


@property (nonatomic, weak) id <SettingsViewControllerDelegate> delegate;
#endif /* SettingsViewController_h */
