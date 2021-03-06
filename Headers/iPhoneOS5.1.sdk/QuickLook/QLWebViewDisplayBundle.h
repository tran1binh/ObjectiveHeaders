/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "QLDisplayBundle.h"
#import "QLScrubViewDataSource.h"
#import "UIWebPDFViewHandlerDelegate.h"
#import "UIWebViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, UIWebView, QLScrubView, QLPDFHanderDelegateForwarder;

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate> {
	UIWebView* _webView;
	unsigned _isLoadedDuringZoom : 1;
	unsigned _isHTMLContent : 1;
	unsigned _isPDFContent : 1;
	unsigned _isSpreadsheetContent : 1;
	unsigned _isPlainText : 1;
	unsigned _isRTFContent : 1;
	unsigned _isCSVContent : 1;
	unsigned _loadStarted : 1;
	float _defaultZoom;
	float _navigationBarHeight;
	QLScrubView* _scrubView;
	int _lastPage;
	BOOL _inScroll;
	BOOL _webViewReadyForThumbnailing;
	NSMutableArray* _htmlSlideNodes;
	QLPDFHanderDelegateForwarder* _forwarder;
}
-(CGPDFDocumentRef)_getCGPDFDocumentRef;
-(void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished context:(void*)context;
-(void)_hideScrubberIfNeeded:(BOOL)needed;
-(id)_htmlPageXPath;
-(id)_htmlSlideNodes;
-(id)_scrubView;
-(void)_showScrubberIfNeeded:(BOOL)needed;
-(void)_tearDownWebView;
-(BOOL)acceptControllerTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;
-(int)backgroundType;
-(BOOL)canPrint;
-(CGRect)contentFrameWithoutOverlay;
-(unsigned)currentPageNumber;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)loadView;
-(void)loadWithHints:(id)hints;
-(int)numberOfPagesInScrubView:(id)scrubView;
-(CGPoint)originForPDFPageLabelViewWithHandler:(id)handler proposedOrigin:(CGPoint)origin;
-(void)overlayWillAppearAnimated:(BOOL)overlay;
-(void)overlayWillDisappearAnimated:(BOOL)overlay;
-(int)pageCount;
-(CGSize)pageSizeAtIndex:(int)index;
-(id)pdfPreviewURL;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)unlocked;
-(void)prepareForSlidingIn:(id)anIn;
-(void)prepareForZoomingIn;
-(void)prepareForZoomingOut;
-(id)printPageRenderer;
-(void)scrollToPage:(unsigned)page;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrubView:(id)view didSelectPageAtIndex:(unsigned)index;
-(CGSize)scrubView:(id)view pageSizeAtIndex:(unsigned)index;
-(id)scrubView:(id)view thumbnailOperationForPageAtIndex:(unsigned)index;
-(void)setPreviewItem:(id)item;
-(void)tearDownUI;
-(void)uiWebView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)uiWebView:(id)view didFirstLayoutInFrame:(id)frame;
-(void)uiWebView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;
-(void)uiWebView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;
-(id)uiWebView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;
-(void)userInteractedWithScrubView:(id)scrubView;
-(void)viewDidLayoutSubviews;
-(id)webView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

