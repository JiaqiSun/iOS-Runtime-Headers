/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSMutableIndexSet;

@interface PLFileSystemAssetImporter : NSObject  {
    BOOL _hasProcessedAnyAssets;
    PLPhotoLibrary *_photoLibrary;
    NSMutableIndexSet *_thumbIndexes;
}


- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2 force:(BOOL)arg3;
- (unsigned int)nextThumbnailIndex;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2 duplicateUUIDs:(id)arg3 force:(BOOL)arg4;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (void)createThumbnailForVideoAsset:(id)arg1;
- (BOOL)setupPhotoAsset:(id)arg1 withURL:(id)arg2 thumbnailsInformation:(id)arg3 allowedToResetThumbnails:(BOOL)arg4;
- (id)_addAssetWithURL:(id)arg1;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2 duplicateUUIDs:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)dealloc;

@end