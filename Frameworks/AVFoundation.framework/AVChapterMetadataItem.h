/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem  {
    AVChapterMetadataItemInternal *_privChapter;
}


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)key;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)locale;
- (id)value;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (void)release;
- (id)init;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (void)_addFormatReaderLoaderNotifications;
- (void)cancelLoading;
- (id)commonKey;
- (id)extraAttributes;
- (id)_initWithFormatReaderLoader:(struct OpaqueFigFormatReaderLoader { }*)arg1 chapterGroupIndex:(long)arg2 chapterIndex:(long)arg3 chapterType:(id)arg4 locale:(id)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
- (void)_removeFormatReaderLoaderNotifications;
- (id)keySpace;
- (void)_takeValueFrom:(id)arg1;
- (long)_chapterGroupIndex;
- (long)_chapterIndex;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (int)_valueStatus;
- (void)_setValueStatus:(int)arg1 figErrorCode:(long)arg2;
- (void)_ensureValueLoadedSync;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;

@end