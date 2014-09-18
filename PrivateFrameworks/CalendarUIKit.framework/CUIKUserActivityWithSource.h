/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    NSString *_sourceHost;
    NSString *_sourceOwner;
    int _sourceType;
}

- (void).cxx_destruct;
- (bool)_isLocalSource;
- (bool)_requiresHostAndOwner;
- (bool)_supportsConsistentExternalIDAcrossDevices:(int)arg1;
- (bool)_supportsConsistentExternalIDAcrossDevices;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)isMatchForSource:(id)arg1;

@end