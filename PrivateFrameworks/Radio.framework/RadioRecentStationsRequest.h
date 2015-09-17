/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsRequest : RadioRequest {
    RadioStation *_currentStation;
    NSString *_currentStationStringID;
    SSURLConnectionRequest *_request;
    BOOL _shouldGroupResponses;
    unsigned int _stationCount;
}

@property (nonatomic) BOOL shouldGroupResponses;
@property (nonatomic) unsigned int stationCount;

- (void).cxx_destruct;
- (void)_configureRequestPropertiesForCaching:(id)arg1 returningCacheKey:(id*)arg2;
- (id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg1;
- (id)_recentStationsResponseWithConnectionResponse:(id)arg1 returningError:(id*)arg2;
- (void)cancel;
- (void)getCachedRecentStationsResponseWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCurrentStation:(id)arg1;
- (id)initWithCurrentStationStringID:(id)arg1;
- (void)setShouldGroupResponses:(BOOL)arg1;
- (void)setStationCount:(unsigned int)arg1;
- (BOOL)shouldGroupResponses;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (unsigned int)stationCount;

@end