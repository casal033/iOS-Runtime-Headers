/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSString, NSURL, SSNetworkConstraints;

@interface MPItemDownloadProperties : NSObject <NSCopying> {
    long long _assetFileSize;
    NSURL *_destinationURL;
    NSString *_downloadIdentifier;
    SSNetworkConstraints *_networkConstraints;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(readonly) long long assetFileSize;
@property(readonly) NSURL * destinationURL;
@property(readonly) NSString * downloadIdentifier;
@property(readonly) SSNetworkConstraints * networkConstraints;
@property(readonly) NSURL * sourceURL;

- (void)_reloadNetworkConstraints;
- (long long)assetFileSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationURL;
- (id)downloadIdentifier;
- (unsigned int)hash;
- (id)initWithDownload:(id)arg1;
- (id)initWithDownloadIdentifier:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)networkConstraints;
- (id)newAVAssetOptionsWithDownloadStyle:(int)arg1;
- (id)sourceURL;

@end