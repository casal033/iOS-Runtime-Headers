/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIStorePageSectionContext, UIColor;

@interface SKUIStorePageSplit : NSObject <NSCopying> {
    UIColor *_dividerColor;
    long long _numberOfPageSections;
    NSArray *_pageComponents;
    SKUIStorePageSectionContext *_sectionContext;
    double _widthFraction;
}

@property(copy) UIColor * dividerColor;
@property long long numberOfPageSections;
@property(copy) NSArray * pageComponents;
@property(retain) SKUIStorePageSectionContext * sectionContext;
@property double widthFraction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dividerColor;
- (long long)numberOfPageSections;
- (id)pageComponents;
- (id)sectionContext;
- (void)setDividerColor:(id)arg1;
- (void)setNumberOfPageSections:(long long)arg1;
- (void)setPageComponents:(id)arg1;
- (void)setSectionContext:(id)arg1;
- (void)setWidthFraction:(double)arg1;
- (double)widthFraction;

@end