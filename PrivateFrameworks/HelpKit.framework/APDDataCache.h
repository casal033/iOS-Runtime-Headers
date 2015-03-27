/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class NSDate, NSString;

@interface APDDataCache : NSObject <NSCopying, NSCoding> {
    unsigned int _cacheType;
    unsigned int _fileSize;
    NSString *_identifier;
    NSString *_lastModified;
    NSString *_locale;
    int _maxAge;
    NSDate *_updatedDate;
}

@property unsigned int cacheType;
@property(readonly) BOOL expired;
@property unsigned int fileSize;
@property(retain) NSString * identifier;
@property(retain) NSString * lastModified;
@property(retain) NSString * locale;
@property int maxAge;
@property(retain) NSDate * updatedDate;

- (void).cxx_destruct;
- (unsigned int)cacheType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)expired;
- (unsigned int)fileSize;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)lastModified;
- (id)locale;
- (int)maxAge;
- (void)setCacheType:(unsigned int)arg1;
- (void)setFileSize:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastModified:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaxAge:(int)arg1;
- (void)setUpdatedDate:(id)arg1;
- (id)updatedDate;

@end