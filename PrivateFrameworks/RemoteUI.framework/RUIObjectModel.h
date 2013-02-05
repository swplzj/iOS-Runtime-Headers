/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSArray, RUIPage, UIAlertView, NSTimer, NSMutableArray, NSDictionary, NSString, <RUIObjectModelDelegate>, NSMutableDictionary, NSURL;

@interface RUIObjectModel : NSObject <UIWebViewDelegate, RUITableViewDelegate, RUIPageDelegate> {
    NSDictionary *_alert;
    NSDictionary *_clientInfo;
    UIAlertView *_confirmationAlert;
    NSDictionary *_confirmationAttributes;
    NSString *_confirmationButtonName;
    NSString *_confirmationURLString;
    struct OpaqueJSContext { } *_ctx;
    int _currentPage;
    NSMutableArray *_defaultPages;
    <RUIObjectModelDelegate> *_delegate;
    NSMutableArray *_displayedPages;
    NSString *_inlineScript;
    NSString *_name;
    NSMutableDictionary *_namedPages;
    int _nextButtonStyle;
    int _refreshDelay;
    NSTimer *_refreshTimer;
    NSString *_refreshURL;
    NSURL *_scriptURL;
    UIAlertView *_secondConfirmationAlert;
    NSDictionary *_serverInfo;
    NSURL *_sourceURL;
    NSString *_validationFunction;
}

@property(retain) NSDictionary * alert;
@property(readonly) NSArray * allPages;
@property(retain) NSDictionary * clientInfo;
@property(readonly) NSArray * defaultPages;
@property(readonly) NSArray * displayedPages;
@property(retain) NSString * inlineScript;
@property(retain) NSString * name;
@property(readonly) NSDictionary * namedPages;
@property int nextButtonStyle;
@property(readonly) NSArray * pages;
@property int refreshDelay;
@property(retain) NSString * refreshURL;
@property(retain) NSURL * scriptURL;
@property(retain) NSDictionary * serverInfo;
@property(retain) NSURL * sourceURL;
@property(retain) NSString * validationFunction;
@property(readonly) RUIPage * visiblePage;

+ (id)objectModelForXMLNamed:(id)arg1;

- (void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2;
- (BOOL)RUIPage:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (void)RUIPage:(id)arg1 toggledEditing:(BOOL)arg2;
- (void)_cleanupConfirmation;
- (void)_cleanupRefreshTimer;
- (void)_displaySupplementalPage:(id)arg1;
- (id)_firstPageForPresentation;
- (void)_handleButtonPress:(id)arg1 attributes:(id)arg2;
- (void)_handleButtonPressConfirmed:(id)arg1 attributes:(id)arg2;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2;
- (void)_handleLinkPressConfirmed:(id)arg1 attributes:(id)arg2;
- (void)_nextPage;
- (id)_pageContainingTableView:(id)arg1;
- (void)_populatePageNavItem:(id)arg1 withNextButton:(BOOL)arg2;
- (void)_presentConfirmationWithAttributes:(id)arg1;
- (void)_presentSecondConfirmationWithAttributes:(id)arg1;
- (id)alert;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)alertView;
- (id)allPages;
- (void)back:(id)arg1;
- (id)clientInfo;
- (void)dealloc;
- (id)defaultPages;
- (id)description;
- (id)displayedPages;
- (BOOL)goBack;
- (BOOL)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2;
- (BOOL)hasConfirmationAttributes:(id)arg1;
- (BOOL)hasSecondConfirmationAttributes:(id)arg1;
- (id)init;
- (id)inlineScript;
- (id)invokeStringFunction:(id)arg1;
- (id)name;
- (id)namedPages;
- (id)newNavigationControllerForPresentation;
- (int)nextButtonStyle;
- (id)pages;
- (void)populatePostbackDictionary:(id)arg1;
- (id)postbackData;
- (id)postbackDictionary;
- (BOOL)prepareScriptContext;
- (void)presentInParentViewController:(id)arg1 animated:(BOOL)arg2;
- (int)refreshDelay;
- (void)refreshTimeout;
- (id)refreshURL;
- (id)relativeURLWithString:(id)arg1;
- (void)remoteUIWebViewControllerDonePressed:(id)arg1;
- (id)rowForFormField:(id)arg1;
- (void)runScript;
- (id)scriptURL;
- (id)serverInfo;
- (void)setAlert:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInlineScript:(id)arg1;
- (void)setJSGlobalContext:(struct OpaqueJSContext { }*)arg1;
- (void)setName:(id)arg1;
- (void)setNextButtonStyle:(int)arg1;
- (void)setPages:(id)arg1;
- (void)setRefreshDelay:(int)arg1;
- (void)setRefreshURL:(id)arg1;
- (void)setScriptURL:(id)arg1;
- (void)setServerInfo:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setValidationFunction:(id)arg1;
- (id)sourceURL;
- (id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2;
- (BOOL)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2;
- (void)tableViewOM:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)tableViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;
- (void)tableViewOMDidChange:(id)arg1;
- (BOOL)validateWithFunction:(id)arg1;
- (id)validationFunction;
- (id)visiblePage;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;

@end