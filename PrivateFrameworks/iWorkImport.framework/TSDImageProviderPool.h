/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {
    BOOL mHaveRaisedFileDescriptorLimit;
    TSUPointerKeyDictionary *mImageDataToImageProviderMap;
    unsigned int mOpenFileDescriptorLimit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (Class)p_providerClassForData:(id)arg1;
+ (Class)p_providerClassForData:(id)arg1 validateLength:(BOOL)arg2;
+ (id)sharedPool;

- (void)addInterestInProviderForData:(id)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)flushImageProviders;
- (id)init;
- (BOOL)isBitmapData:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned int)arg1;
- (id)p_providerForData:(id)arg1 temporary:(BOOL)arg2 shouldValidate:(BOOL)arg3;
- (unsigned int)p_providerLimitForFileDescriptorLimit:(unsigned int)arg1;
- (unsigned int)p_removeProvidersWithZeroInterest;
- (void)p_updateFileDescriptorLimit;
- (id)providerForData:(id)arg1 shouldValidate:(BOOL)arg2;
- (oneway void)release;
- (void)removeInterestInProviderForData:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (id)temporaryProviderForData:(id)arg1 shouldValidate:(BOOL)arg2;
- (void)willCloseDocumentContext:(id)arg1;
- (void)willCullData:(id)arg1;

@end
