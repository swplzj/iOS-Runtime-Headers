/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, NSString;

@interface _MTLSamplerState : NSObject <MTLSamplerState> {
    <MTLDevice> *_device;
    NSString *_label;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned long long hash;
@property(readonly) NSString * label;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)device;
- (id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2;
- (id)label;

@end