NS_SWIFT_NAME(Settings)
@interface MWMSettings : NSObject

+ (BOOL)autoDownloadEnabled;
+ (void)setAutoDownloadEnabled:(BOOL)autoDownloadEnabled;

+ (MWMUnits)measurementUnits;
+ (void)setMeasurementUnits:(MWMUnits)measurementUnits;

+ (BOOL)zoomButtonsEnabled;
+ (void)setZoomButtonsEnabled:(BOOL)zoomButtonsEnabled;

+ (BOOL)compassCalibrationEnabled;
+ (void)setCompassCalibrationEnabled:(BOOL)compassCalibrationEnabled;

+ (MWMTheme)theme;
+ (void)setTheme:(MWMTheme)theme;

+ (BOOL)routingDisclaimerApproved;
+ (void)setRoutingDisclaimerApproved;

+ (NSString *)spotlightLocaleLanguageId;
+ (void)setSpotlightLocaleLanguageId:(NSString *)spotlightLocaleLanguageId;

+ (BOOL)largeFontSize;
+ (void)setLargeFontSize:(BOOL)largeFontSize;

+ (BOOL)transliteration;
+ (void)setTransliteration:(BOOL)transliteration;

+ (BOOL)isTrackWarningAlertShown;
+ (void)setTrackWarningAlertShown:(BOOL)shown;

@end
