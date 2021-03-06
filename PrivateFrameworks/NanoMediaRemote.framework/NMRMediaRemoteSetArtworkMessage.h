/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSData, NSDate, NSString, _NMRMediaRemoteSetArtworkMessage;

@interface NMRMediaRemoteSetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteSetArtworkMessage *_protobuf;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSData * jpegArtwork;
@property(readonly) NSData * originalDigest;
@property(readonly) NSDate * serializationDate;
@property(readonly) Class superclass;

+ (id)messageWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2;
- (id)initWithProtobufData:(id)arg1;
- (id)jpegArtwork;
- (id)originalDigest;
- (id)protobufData;
- (id)serializationDate;

@end
