//
//  ImageViewCacheVC.m
//  WTRequestCenter
//
//  Created by SongWentong on 10/29/15.
//  Copyright © 2015 song. All rights reserved.
//

#import "ImageViewCacheVC.h"

#import "WTKit.h"
@interface ImageViewCacheVC ()

@property (weak, nonatomic) IBOutlet UILabel *statusLabel;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activity;
@property (weak, nonatomic) IBOutlet UITextField *myTextField;
@property (weak, nonatomic) IBOutlet UIImageView *myImageView;
@end

@implementation ImageViewCacheVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    _statusLabel.text = @"";
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)requestUseDefaultURL:(id)sender {
    _myTextField.text = @"http://img0.bdstatic.com/img/image/c9e2596284f50ce95cbed0d756fdd22b1409207983.jpg";
    [self requestWithURL:_myTextField.text];
}


-(void)requestWithURL:(NSString*)url
{
    [_activity startAnimating];
    [_myTextField resignFirstResponder];
    _statusLabel.text = @"请求中";
    [_myImageView setImageWithURL:url placeholderImage:nil finished:^{
        [_activity stopAnimating];
        _statusLabel.text = @"请求成功";
    } failed:^(NSError *error) {
        [_activity stopAnimating];
        _statusLabel.text = [NSString stringWithFormat:@"请求失败:%@",error.localizedDescription];
    }];
}

- (IBAction)requestImage:(id)sender {
    
    [self requestUseDefaultURL:_myTextField.text];
}
- (IBAction)cleanImage:(id)sender {
    [[WTNetWorkManager sharedURLcache] removeAllCachedResponses];
    _myImageView.image = nil;
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
