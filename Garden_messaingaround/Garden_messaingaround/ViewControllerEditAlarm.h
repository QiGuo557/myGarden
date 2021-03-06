//
//  ViewControllerEditAlarm.h
//  
//
//  Created by Qi Guo on 2016-03-21.
//
//

#import <UIKit/UIKit.h>
#import "PlantObject.h"

@interface ViewControllerEditAlarm : UIViewController
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) IBOutlet UIDatePicker *timeToSetOff;
@property (nonatomic, strong) IBOutlet UISwitch *weedSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *waterSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *harvestSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *repeatSwitch;
@property (nonatomic, strong) IBOutlet UILabel *repeatLable;
@property (nonatomic, strong) IBOutlet UILabel *startDateLabel;
@property (nonatomic, strong) IBOutlet UILabel *harvest1Label;
@property (nonatomic, strong) IBOutlet UILabel *harvest2Label;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *savebtn;

@property (strong, nonatomic) PlantObject * plant ;
@property ViewControllerEditAlarm * reminders;
@property NSString * selectedPlant;
@property NSInteger plantid;
@property BOOL repeat;

@end
