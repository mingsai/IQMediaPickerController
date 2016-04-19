//
//  IQMediaPickerController.h
//  IQMediaPickerController
//
//  Created by Tommie N. Carter, Jr., MBA on 4/18/16.
//  Copyright © 2016 Iftekhar. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for IQMediaPickerController.
FOUNDATION_EXPORT double IQMediaPickerControllerVersionNumber;

//! Project version string for IQMediaPickerController.
FOUNDATION_EXPORT const unsigned char IQMediaPickerControllerVersionString[];
#import "IQMediaPickerControllerConstants.h"

typedef NS_ENUM(NSInteger, IQMediaPickerControllerMediaType) {
    IQMediaPickerControllerMediaTypePhotoLibrary,
    IQMediaPickerControllerMediaTypeVideoLibrary,
    IQMediaPickerControllerMediaTypeAudioLibrary,
    IQMediaPickerControllerMediaTypePhoto,
    IQMediaPickerControllerMediaTypeVideo,
    IQMediaPickerControllerMediaTypeAudio,
};

@protocol IQMediaPickerControllerDelegate;

@interface IQMediaPickerController : UINavigationController

@property(nonatomic, assign) id<IQMediaPickerControllerDelegate,UINavigationControllerDelegate> delegate;
@property (nonatomic, assign) BOOL allowsPickingMultipleItems; // default is NO. Currently only applicable for IQMediaPickerControllerMediaTypePhotoLibrary, IQMediaPickerControllerMediaTypeVideoLibrary, IQMediaPickerControllerMediaTypeAudioLibrary;
@property(nonatomic, assign) IQMediaPickerControllerMediaType mediaType;

@end

@protocol IQMediaPickerControllerDelegate <NSObject>

- (void)mediaPickerController:(IQMediaPickerController*)controller didFinishMediaWithInfo:(NSDictionary *)info;
- (void)mediaPickerControllerDidCancel:(IQMediaPickerController *)controller;

@end


