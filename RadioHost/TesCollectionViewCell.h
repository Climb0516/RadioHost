//
//  TesCollectionViewCell.h
//  RadioHost
//
//  Created by 王攀登 on 15/4/15.
//  Copyright (c) 2015年 国广高通（北京）传媒科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TesCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *TesImg;
@property (weak, nonatomic) IBOutlet UIImageView *smaImage;
@property (weak, nonatomic) IBOutlet UILabel *Title;
@property (weak, nonatomic) IBOutlet UILabel *smallTitle;

@end
