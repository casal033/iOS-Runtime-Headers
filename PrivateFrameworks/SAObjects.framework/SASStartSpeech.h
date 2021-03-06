/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *audioSource;
@property (nonatomic) BOOL clearContext;
@property (nonatomic) int codec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic) BOOL disableAutoEndpointing;
@property (nonatomic, copy) NSString *dspStatus;
@property (nonatomic) BOOL enablePartialResults;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *headsetAddress;
@property (nonatomic, copy) NSString *headsetId;
@property (nonatomic, copy) NSString *headsetName;
@property (nonatomic, copy) NSNumber *isCarryDevice;
@property (nonatomic, copy) NSString *motionActivity;
@property (nonatomic, copy) NSNumber *motionConfidence;
@property (nonatomic, copy) NSNumber *noiseReductionLevel;
@property (nonatomic, copy) NSString *origin;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)startSpeech;
+ (id)startSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioSource;
- (BOOL)clearContext;
- (int)codec;
- (id)deviceIdentifier;
- (id)deviceModel;
- (BOOL)disableAutoEndpointing;
- (id)dspStatus;
- (BOOL)enablePartialResults;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headsetAddress;
- (id)headsetId;
- (id)headsetName;
- (id)isCarryDevice;
- (id)motionActivity;
- (id)motionConfidence;
- (id)noiseReductionLevel;
- (id)origin;
- (void)setAudioSource:(id)arg1;
- (void)setClearContext:(BOOL)arg1;
- (void)setCodec:(int)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDisableAutoEndpointing:(BOOL)arg1;
- (void)setDspStatus:(id)arg1;
- (void)setEnablePartialResults:(BOOL)arg1;
- (void)setHeadsetAddress:(id)arg1;
- (void)setHeadsetId:(id)arg1;
- (void)setHeadsetName:(id)arg1;
- (void)setIsCarryDevice:(id)arg1;
- (void)setMotionActivity:(id)arg1;
- (void)setMotionConfidence:(id)arg1;
- (void)setNoiseReductionLevel:(id)arg1;
- (void)setOrigin:(id)arg1;

@end
