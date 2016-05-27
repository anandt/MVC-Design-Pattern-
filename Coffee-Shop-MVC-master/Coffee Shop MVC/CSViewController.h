//
//  CSViewController.h
//  Coffee Shop MVC
//


#import <UIKit/UIKit.h>

@interface CSViewController : UITableViewController

@property (nonatomic, weak) IBOutlet UILabel *shotCountLabel;
@property (nonatomic, weak) IBOutlet UITextView *drinkSummaryTextView;

- (IBAction)orderButtonTapped:(id)sender;
- (IBAction)modifyShots:(id)sender;
- (IBAction)changeDrinkOptions:(id)sender;

@end
