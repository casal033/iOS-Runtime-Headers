/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSettings : NSObject <NSCopying, NSMutableCopying> {
    BOOL _backgrounded;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    NSSet *_ignoreOcclusionReasons;
    int _interfaceOrientation;
    float _level;
    BOOL _occluded;
    BOOL _occludedHasBeenCalculated;
    NSArray *_occlusions;
    BSSettings *_otherSettings;
    BSSettings *_transientLocalSettings;
}

@property (getter=isBackgrounded, nonatomic, readonly) BOOL backgrounded;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } contentOffset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) int interfaceOrientation;
@property (nonatomic, readonly) float level;
@property (nonatomic, readonly, copy) NSArray *occlusions;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (BOOL)_isMutable;
+ (id)settings;

- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (unsigned int)hash;
- (id)ignoreOcclusionReasons;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (int)interfaceOrientation;
- (BOOL)isBackgrounded;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIgnoringOcclusions;
- (BOOL)isOccluded;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (float)level;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)occlusions;
- (id)otherSettings;
- (id)transientLocalSettings;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (BOOL)isUISubclass;

@end
