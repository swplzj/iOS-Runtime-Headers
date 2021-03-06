/* Generated by RuntimeBrowser.
 */

@protocol RPPublishingAgentDelegate

@required

- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(NSError *)arg2;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;

@optional

- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;

@end
