//
//  SettingTableViewController.h
//  DevApp
//
//  Created by Yu-Chih on 10/1/17.
//  Copyright © 2017 Yu-Chih. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LibAcousticSensingFramework/AcousticSensingSettingEditorDelegate.h>
#import <LibAcousticSensingFramework/AcousticSensingSetting.h>
#import <LibAcousticSensingFramework/AcousticSensingController.h>
#import <LibAcousticSensingFramework/AcousticSensingControllerCallerDelegate.h>

typedef NS_ENUM(NSInteger, CellTagType) {
    CellTagUndefined,
    CellTagMode,
    CellTagServerAddress,
    CellTagServerPort,
    CellTagMicSource,
    CellTagSpeakerSource,
    CellTagResetToDefault,
    CellTagStart
};

@interface SettingTableViewController : UITableViewController <AcousticSensingSettingEditorDelegate, AcousticSensingControllerCallerDelegate> {
    AcousticSensingSetting *ass;
    AcousticSensingController *asc;
    UISegmentedControl *modeSegmentControl;
}


//@property (retain, nonatomic) IBOutlet UITableView *tableView;

@end
