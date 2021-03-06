/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class HMAccessory, HMMessageDispatcher, NSArray, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface HMService : NSObject <NSSecureCoding> {
    HMAccessory *_accessory;
    NSString *_associatedServiceType;
    NSArray *_characteristics;
    NSNumber *_instanceID;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSString *_serviceType;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly) HMAccessory * accessory;
@property(copy,readonly) NSString * associatedServiceType;
@property(copy) NSArray * characteristics;
@property(readonly) NSNumber * instanceID;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * serviceType;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (id)accessory;
- (void)addCharacteristic:(id)arg1;
- (id)associatedServiceType;
- (id)characteristics;
- (void)configure:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCharacteristic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (id)msgDispatcher;
- (id)name;
- (void)removeCharacteristic:(id)arg1;
- (id)serviceType;
- (id)serviceTypeDescription;
- (void)setCharacteristics:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(id)arg2;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (id)workQueue;

@end
