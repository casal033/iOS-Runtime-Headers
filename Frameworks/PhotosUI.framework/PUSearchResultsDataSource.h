/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsDataSource : NSObject <PUSearchResultsValueDelegate> {
    NSSet *_albumUUIDs;
    PLSearchIndexDateFormatter *_dateFormatter;
    <PUSearchResultsDelegate> *_delegate;
    BOOL _ignorePastResults;
    unsigned int _maxGroupedResultsCount;
    PLPhotoLibrary *_photoLibrary;
    PSIQuery *_query;
    unsigned int _queryTag;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_results;
    PSIDatabase *_searchIndex;
    unsigned int _uncommittedMaxGroupedResultsCount;
    NSArray *_uncommittedResults;
    unsigned int _unprocessedSearchResultsCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSearchResultsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PSIDatabase *searchIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchAlbumsWithUUIDs:(id)arg1;
- (id)_fetchAssetsWithUUIDs:(id)arg1;
- (void)_inqBackgroundProcessSearchResults:(id)arg1 withTag:(unsigned int)arg2 searchString:(id)arg3;
- (void)_inqCancel;
- (BOOL)_shouldCancel:(unsigned int)arg1;
- (void)cancel;
- (id)dateFormatter;
- (id)delegate;
- (BOOL)hasPendingChanges;
- (id)initWithSearchIndex:(id)arg1;
- (void)mergePendingChanges;
- (unsigned int)numberOfSearchResults;
- (id)searchIndex;
- (BOOL)searchIsFinished:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSearchString:(id)arg1;
- (id)valueAtIndex:(unsigned int)arg1;

@end
