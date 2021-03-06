/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXFileLogger : NSObject {
    NSString *_facility;
    NSString *_filePath;
}

@property (nonatomic, copy) NSString *facility;
@property (nonatomic, copy) NSString *filePath;

+ (id)defaultFileLogger;
+ (id)fileLoggerWithFacility:(id)arg1;
+ (id)logDirectory;

- (void)dealloc;
- (id)facility;
- (id)filePath;
- (id)initWithFacility:(id)arg1;
- (void)log:(id)arg1;
- (void)setFacility:(id)arg1;
- (void)setFilePath:(id)arg1;

@end
