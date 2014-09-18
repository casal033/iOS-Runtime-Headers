/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKUnit, NSString, _HKDimension;

@interface HKQuantityType : HKSampleType {
    long long _aggregationStyle;
    HKUnit *_canonicalUnit;
    long long _canonicalUnitToken;
    NSString *_unitString;
}

@property(readonly) long long aggregationStyle;
@property(readonly) HKUnit * canonicalUnit;
@property(readonly) _HKDimension * dimension;

+ (void)_insertCode:(long long)arg1 forIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithDefinition:(struct { long long x1; char *x2; char *x3; long long x4; char *x5; char *x6; }*)arg1;
- (long long)aggregationStyle;
- (id)canonicalUnit;
- (id)dimension;
- (bool)isCompatibleWithUnit:(id)arg1;
- (void)validateUnit:(id)arg1;
- (void)validateUnitFromString:(id)arg1;

@end