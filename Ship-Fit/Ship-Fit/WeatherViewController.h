
#import <UIKit/UIKit.h>
#import "ShipFit.h"

@interface WeatherViewController : UIViewController

// Ref to the mothership
@property (weak, nonatomic) ShipFit* shipfit_ref;

// Ref to labels
@property (weak, nonatomic) IBOutlet UILabel *windSpeed;
@property (weak, nonatomic) IBOutlet UILabel *windDirection;
@property (weak, nonatomic) IBOutlet UILabel *time;
@property (weak, nonatomic) IBOutlet UILabel *temperatureCurrent;
@property (weak, nonatomic) IBOutlet UILabel *pressure;
@property (weak, nonatomic) IBOutlet UILabel *cloudCover;
@property (weak, nonatomic) IBOutlet UILabel *precipitation;
@property (weak, nonatomic) IBOutlet UILabel *additionalInfo;
@property (weak, nonatomic) IBOutlet UILabel *visibility;


//images
@property (weak, nonatomic) IBOutlet UIImageView *windImage;
@property (weak, nonatomic) IBOutlet UIImageView *conditionImage;
@property (weak, nonatomic) IBOutlet UIImageView *pressureImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempImage;
@property (weak, nonatomic) IBOutlet UIImageView *popImage;
@property (weak, nonatomic) IBOutlet UIImageView *cloudcoverImage;



@end
