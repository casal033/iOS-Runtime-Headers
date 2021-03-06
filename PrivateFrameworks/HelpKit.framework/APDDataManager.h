/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDDataManager : NSObject <UIAlertViewDelegate> {
    APDKVOManager *_KVOManager;
    NSString *_appName;
    NSURL *_baseURL;
    UIColor *_cellHighlightedColor;
    NSString *_configServerAppIdentifier;
    APDAsyncURLConnection *_configServerConnection;
    int _configServerDeviceType;
    NSString *_configServerTargetedReleaseVersion;
    NSURL *_configServerURL;
    APDConnectionManager *_connectionManager;
    APDNavigationTopic *_currentTopic;
    BOOL _darkMode;
    <APDDataManagerDelegate> *_delegate;
    NSString *_deviceType;
    BOOL _dismissed;
    int _displayType;
    BOOL _enableContextMenu;
    BOOL _hasRequestedConfig;
    NSString *_helpVersion;
    BOOL _loadingConfigConfig;
    NSURL *_localResourceBundleURL;
    APDLocale *_locale;
    APDLocalizationModel *_localizationModel;
    NSString *_localizedStringTableName;
    APDNavigationModel *_navigationModel;
    NSOperationQueue *_operationQueue;
    NSURL *_remoteHelpURL;
    UIColor *_searchBarBarTintColor;
    APDSearchModel *_searchModel;
    BOOL _searchTermsShouldBeHighlighted;
    NSString *_selectedISOCode;
    NSString *_selectedTopicID;
    NSString *_selectedTopicName;
    BOOL _shouldLog;
    BOOL _showGlossaryLinks;
    BOOL _showingAlert;
    APDLocale *_tempPreviousLocale;
    UIColor *_toolbarBarTintColor;
    float _topContentInset;
    BOOL _translucentBar;
    BOOL _useRemoteAssetsForLocalHelp;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) UIColor *cellHighlightedColor;
@property (nonatomic, retain) NSString *configServerAppIdentifier;
@property (nonatomic) int configServerDeviceType;
@property (nonatomic, retain) NSString *configServerTargetedReleaseVersion;
@property (nonatomic, retain) NSURL *configServerURL;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic, retain) APDConnectionManager *connectionManager;
@property (nonatomic, retain) APDNavigationTopic *currentTopic;
@property (nonatomic) BOOL darkMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIColor *defaultDarkModeBackgroundColor;
@property (nonatomic, retain) UIColor *defaultDarkModeHighlightColor;
@property (nonatomic, retain) UIColor *defaultDarkModeSeparatorColor;
@property (nonatomic, retain) UIColor *defaultDarkModeTextColor;
@property (nonatomic, retain) UIColor *defaultDarkModeViewBackgroundColor;
@property (nonatomic, retain) UIColor *defaultDarkModeViewNavigationSeparatorColor;
@property (nonatomic) <APDDataManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceType;
@property (nonatomic) BOOL dismissed;
@property (nonatomic) int displayType;
@property (nonatomic) BOOL enableContextMenu;
@property (nonatomic, readonly) NSURL *fullBaseURL;
@property (nonatomic, readonly) NSURL *fullLocalizedBaseURL;
@property (nonatomic, readonly) NSURL *fullLocalizedLocalBaseURL;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *helpVersion;
@property (nonatomic, retain) NSURL *localResourceBundleURL;
@property (nonatomic, retain) APDLocale *locale;
@property (nonatomic, retain) APDLocalizationModel *localizationModel;
@property (nonatomic, retain) APDNavigationModel *navigationModel;
@property (getter=isOnline, nonatomic) BOOL online;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSURL *remoteHelpURL;
@property (nonatomic, retain) UIColor *searchBarBarTintColor;
@property (nonatomic, retain) APDSearchModel *searchModel;
@property (nonatomic) BOOL searchTermsShouldBeHighlighted;
@property (nonatomic, retain) NSString *selectedISOCode;
@property (nonatomic, retain) NSString *selectedTopicID;
@property (nonatomic, retain) NSString *selectedTopicName;
@property (nonatomic) BOOL shouldLog;
@property (nonatomic) BOOL showGlossaryLinks;
@property (nonatomic) float statusBarHeight;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *toolbarBarTintColor;
@property (nonatomic) float topContentInset;
@property (nonatomic) BOOL translucentBar;
@property (nonatomic) BOOL useRemoteAssetsForLocalHelp;

- (void).cxx_destruct;
- (void)alertURLRequestProblem;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)appName;
- (id)baseURL;
- (id)cellHighlightedColor;
- (id)configServerAppIdentifier;
- (int)configServerDeviceType;
- (id)configServerTargetedReleaseVersion;
- (id)configServerURL;
- (BOOL)connected;
- (id)connectionManager;
- (id)currentTopic;
- (BOOL)darkMode;
- (void)dealloc;
- (id)defaultDarkModeBackgroundColor;
- (id)defaultDarkModeHighlightColor;
- (id)defaultDarkModeSeparatorColor;
- (id)defaultDarkModeTextColor;
- (id)defaultDarkModeViewBackgroundColor;
- (id)defaultDarkModeViewNavigationSeparatorColor;
- (id)delegate;
- (id)deviceType;
- (BOOL)dismissed;
- (int)displayType;
- (BOOL)enableContextMenu;
- (id)fullBaseURLString;
- (id)fullLocalizedBaseURL;
- (id)fullLocalizedLocalBaseURL;
- (void)getHelpURLFromConfigurationServerDisplayError:(BOOL)arg1;
- (id)helpVersion;
- (id)init;
- (BOOL)isOnline;
- (id)localResourceBundleURL;
- (id)locale;
- (id)localizationModel;
- (id)localizedURLForRemoteFile:(id)arg1 useLocalResource:(BOOL)arg2;
- (id)navigationJSONURLWithLocalResource:(BOOL)arg1;
- (id)navigationModel;
- (id)normalizedHTMLStringFromHTMLString:(id)arg1 topic:(id)arg2 useLocalResource:(BOOL)arg3;
- (void)onConnectionChanged:(id)arg1;
- (void)onModelLoadFailed:(id)arg1 error:(id)arg2;
- (void)onModelLoadSucceeded:(id)arg1;
- (id)operationQueue;
- (id)remoteHelpURL;
- (id)searchBarBarTintColor;
- (id)searchJSONURLWithLocalResource:(BOOL)arg1;
- (id)searchModel;
- (BOOL)searchTermsShouldBeHighlighted;
- (id)selectedISOCode;
- (id)selectedTopicID;
- (id)selectedTopicName;
- (void)setAppName:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCellHighlightedColor:(id)arg1;
- (void)setConfigServerAppIdentifier:(id)arg1;
- (void)setConfigServerDeviceType:(int)arg1;
- (void)setConfigServerTargetedReleaseVersion:(id)arg1;
- (void)setConfigServerURL:(id)arg1;
- (void)setConnectionManager:(id)arg1;
- (void)setCurrentTopic:(id)arg1;
- (void)setDarkMode:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setDismissed:(BOOL)arg1;
- (void)setDisplayType:(int)arg1;
- (void)setEnableContextMenu:(BOOL)arg1;
- (void)setHelpVersion:(id)arg1;
- (void)setLocalResourceBundleURL:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizationModel:(id)arg1;
- (void)setNavigationModel:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRemoteHelpURL:(id)arg1;
- (void)setSearchBarBarTintColor:(id)arg1;
- (void)setSearchModel:(id)arg1;
- (void)setSearchTermsShouldBeHighlighted:(BOOL)arg1;
- (void)setSelectedISOCode:(id)arg1;
- (void)setSelectedTopicID:(id)arg1;
- (void)setSelectedTopicName:(id)arg1;
- (void)setShouldLog:(BOOL)arg1;
- (void)setShowGlossaryLinks:(BOOL)arg1;
- (void)setToolbarBarTintColor:(id)arg1;
- (void)setTopContentInset:(float)arg1;
- (void)setTranslucentBar:(BOOL)arg1;
- (void)setUseRemoteAssetsForLocalHelp:(BOOL)arg1;
- (BOOL)shouldLog;
- (BOOL)showGlossaryLinks;
- (float)statusBarHeight;
- (void)syncSelectedTopicId;
- (id)toolbarBarTintColor;
- (float)topContentInset;
- (BOOL)translucentBar;
- (void)updateLocalizedStringTableNameForiSOCodes:(id)arg1;
- (BOOL)useRemoteAssetsForLocalHelp;

@end
