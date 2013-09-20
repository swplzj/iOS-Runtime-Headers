/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSPComponentWriteChannel>;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    struct { 
        unsigned int ctx[96]; 
    char *_buffer;
    } _ccHmacContext;
    struct _CCCryptor { } *_cryptor;
    <TSPComponentWriteChannel> *_writeChannel;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_writeData:(id)arg1 updateHmac:(BOOL)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1 encryptionKey:(id)arg2;
- (void)writeData:(id)arg1;

@end