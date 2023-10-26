//
//  ViewController.h
//  SampleApp
//
//  Created by Nikita Amelchenko on 10/26/23.
//

@protocol SampleProtocol;

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property id<SampleProtocol> sampleProperty;

@end
