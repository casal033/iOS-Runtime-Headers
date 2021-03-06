/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITracklistPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUITracklistColumnData *_columnData;
    int _lastNeedsMoreCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUITracklistPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_columnData;
- (void)_enumerateVisibleViewElementsUsingBlock:(id /* block */)arg1;
- (id)_mediaURLWithTrack:(id)arg1;
- (id)_representativeStringForViewElement:(id)arg1;
- (void)_requestCellLayoutWithColumnData:(id)arg1;
- (id)_viewElementForIndex:(int)arg1;
- (float)_widthForButtonElements:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 visibleRange:(struct SKUIIndexPathRange { int x1; int x2; int x3; int x4; })arg2;
- (void)dealloc;
- (id)firstAppearanceIndexPath;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithPageComponent:(id)arg1;
- (int)numberOfCells;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (BOOL)requestLayoutWithReloadReason:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
