/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle, IMMessageItem, NSArray, NSAttributedString, NSDate, NSError, NSString;

@interface IMMessage : NSObject <NSCopying> {
    NSError *_error;
    NSArray *_fileTransferGUIDs;
    unsigned long long _flags;
    NSString *_guid;
    BOOL _isInvitationMessage;
    long long _messageID;
    NSAttributedString *_messageSubject;
    NSString *_plainBody;
    IMHandle *_sender;
    IMHandle *_subject;
    NSAttributedString *_text;
    NSDate *_time;
    NSDate *_timeDelivered;
    NSDate *_timePlayed;
    NSDate *_timeRead;
}

@property(retain,readonly) IMMessageItem * _imMessageItem;
@property(retain) NSError * error;
@property(copy) NSArray * fileTransferGUIDs;
@property unsigned long long flags;
@property(retain) NSString * guid;
@property(readonly) BOOL hasDataDetectorResults;
@property(readonly) BOOL hasInlineAttachments;
@property(retain,readonly) NSArray * inlineAttachmentAttributesArray;
@property(readonly) BOOL isAddressedToMe;
@property(readonly) BOOL isAlert;
@property(readonly) BOOL isAudioMessage;
@property(readonly) BOOL isAutoReply;
@property(readonly) BOOL isDelayed;
@property(readonly) BOOL isDelivered;
@property(readonly) BOOL isEmote;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isFinished;
@property(readonly) BOOL isFromMe;
@property BOOL isInvitationMessage;
@property(readonly) BOOL isLocatingMessage;
@property(readonly) BOOL isPlayed;
@property(readonly) BOOL isRead;
@property(readonly) BOOL isSent;
@property(readonly) BOOL isSystemMessage;
@property(readonly) BOOL isTypingMessage;
@property long long messageID;
@property(retain,readonly) NSAttributedString * messageSubject;
@property(retain,readonly) NSString * plainBody;
@property(retain) IMHandle * sender;
@property(retain,readonly) NSString * senderName;
@property(retain,readonly) IMHandle * subject;
@property(retain,readonly) NSString * summaryString;
@property(retain) NSAttributedString * text;
@property(retain) NSDate * time;
@property(retain) NSDate * timeDelivered;
@property(retain) NSDate * timePlayed;
@property(retain) NSDate * timeRead;
@property(readonly) BOOL wasDataDetected;
@property(readonly) BOOL wasDowngraded;

+ (id)_vCardDataWithCLLocation:(id)arg1;
+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3;
+ (id)locatingMessageWithGuid:(id)arg1 error:(id)arg2;
+ (id)messageFromIMMessageItem:(id)arg1 sender:(id)arg2 subject:(id)arg3;
+ (id)messageFromIMMessageItemDictionary:(id)arg1 sender:(id)arg2 subject:(id)arg3;
+ (id)messageWithLocation:(id)arg1 flags:(unsigned long long)arg2 error:(id)arg3 guid:(id)arg4;

- (id)__ck_attachmentText:(BOOL)arg1;
- (id)__ck_downgradedMessage;
- (BOOL)__ck_isEqualToMessageUsingGUID:(id)arg1;
- (BOOL)__ck_isSMS;
- (BOOL)__ck_isiMessage;
- (id)__ck_previewText;
- (id)__ck_service;
- (id)__ck_undowngradedMessage;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (id)_imMessageItem;
- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 plainText:(id)arg6 text:(id)arg7 messageSubject:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 error:(id)arg11 guid:(id)arg12 messageID:(long long)arg13 subject:(id)arg14;
- (void)_updateError:(id)arg1;
- (void)_updateFileTransferGUIDs:(id)arg1;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)_updateGUID:(id)arg1;
- (void)_updateMessageID:(long long)arg1;
- (void)_updateSender:(id)arg1;
- (void)_updateText:(id)arg1;
- (void)_updateTime:(id)arg1;
- (void)_updateTimeDelivered:(id)arg1;
- (void)_updateTimePlayed:(id)arg1;
- (void)_updateTimeRead:(id)arg1;
- (int)compare:(id)arg1 comparisonType:(int)arg2;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)fileTransferGUIDs;
- (unsigned long long)flags;
- (id)guid;
- (BOOL)hasDataDetectorResults;
- (BOOL)hasInlineAttachments;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;
- (id)inlineAttachmentAttributesArray;
- (BOOL)isAddressedToMe;
- (BOOL)isAlert;
- (BOOL)isAudioMessage;
- (BOOL)isAutoReply;
- (BOOL)isDelayed;
- (BOOL)isDelivered;
- (BOOL)isEmote;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isFromMe;
- (BOOL)isInvitationMessage;
- (BOOL)isLocatingMessage;
- (BOOL)isPlayed;
- (BOOL)isRead;
- (BOOL)isSent;
- (BOOL)isSystemMessage;
- (BOOL)isTypingMessage;
- (long long)messageID;
- (id)messageSubject;
- (id)plainBody;
- (id)sender;
- (id)senderName;
- (void)setIsAddressedToMe:(BOOL)arg1;
- (void)setIsInvitationMessage:(BOOL)arg1;
- (id)subject;
- (id)summaryString;
- (id)text;
- (id)time;
- (id)timeDelivered;
- (id)timePlayed;
- (id)timeRead;
- (BOOL)wasDataDetected;
- (BOOL)wasDowngraded;

@end
