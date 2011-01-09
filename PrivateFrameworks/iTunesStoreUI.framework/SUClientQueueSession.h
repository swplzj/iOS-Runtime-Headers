/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSSet;



@interface SUClientQueueSession : NSObject 
{
    NSInteger _count;
    NSSet *_downloadKinds;
    id _queue;
}

@property(retain) id queue;
@property(retain) NSSet *downloadKinds;
@property NSInteger count;


- (void)setCount:(NSInteger)arg1;
- (NSInteger)count;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setDownloadKinds:(id)arg1;
- (id)downloadKinds;

@end