/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSDictionary;



@interface ABRingtoneManager : NSObject 
{
    NSDictionary *_nameForIdentifier;
    NSDictionary *_pathForIdentifier;
    NSDictionary *_identifierForPath;
    NSDictionary *_additionalInformation;
    NSDictionary *_iTunesRingtonesByIdentifier;
    id _delegate;
}

+ (id)userRingtoneDirectory;
+ (id)iTunesRingtoneDirectory;
+ (id)deviceITunesRingtoneDirectory;
+ (id)systemRingtoneDirectory;
+ (id)sharedRingtoneManager;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (BOOL)shouldShowRingtones;
- (BOOL)shouldShowAlarmSounds;
- (void)loadITunesInfoPlistAtPath:(id)arg1;
- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;
- (void)_deviceRingtonesChangedNotification;
- (id)defaultRingtonePath;
- (id)localizedRingtoneNameWithIdentifier:(id)arg1;
- (id)pathFromIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)nameFromRingtonePath:(id)arg1;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (id)copyIdentifierForRingtoneAtPath:(id)arg1 isValid:(BOOL*)arg2;
- (BOOL)isRingtonePurchased:(id)arg1;
- (id)defaultRingtoneIdentifier;
- (id)defaultRingtoneName;
- (id)newAVItemWithRingtoneIdentifier:(id)arg1;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1;

@end