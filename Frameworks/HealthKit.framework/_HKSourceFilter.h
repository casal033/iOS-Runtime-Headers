/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSourceFilter : _HKFilter {
    NSSet *_sources;
}

@property (nonatomic, readonly) NSSet *sources;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_filterForComparisonWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3;
+ (id)_filterForInOperatorWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithSources:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sources;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_sourceIdentifiersWithHealthDaemon:(id)arg1;
- (id)predicateWithHealthDaemon:(id)arg1;

@end
