/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollView.h"
#import "UITextInput.h"
#import "UITextSelectingContainer.h"
#import "UIKit-Structs.h"
#import "UITextView.h"

@class UITextRange, NSDictionary, UITextPosition, DOMHTMLElement, UITextSelectionView, UITextInteractionAssistant, UIDelayedAction, UIColor, NSString, UIFont, WebFrame, UIWebDocumentView;
@protocol UITextInputDelegate, UITextInputTokenizer, UITextViewDelegate, UITextSelectingContent;

@interface UITextView : UIScrollView <UITextSelectingContainer, UITextInput> {
@private
	WebFrame* m_frame;
	DOMHTMLElement* m_body;
	int m_marginTop;
	UIDelayedAction* m_selectionTimer;
	UIDelayedAction* m_longPressAction;
	BOOL m_editable;
	BOOL m_editing;
	BOOL m_becomesEditableWithGestures;
	BOOL m_reentrancyGuard;
	BOOL m_readyForScroll;
	BOOL m_hasExplicitTextAlignment;
	BOOL m_hasExplicitLineHeight;
	UITextInteractionAssistant* m_interactionAssistant;
	UITextSelectionView* m_selectionView;
	UIWebDocumentView* m_webView;
	UIFont* m_font;
	UIColor* m_textColor;
	int m_textAlignment;
	UIView* m_inputView;
	UIView* m_inputAccessoryView;
	float m_lineHeight;
	BOOL m_skipScrollContainingView;
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition* beginningOfDocument;
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent>* content;
@property(assign, nonatomic) unsigned dataDetectorTypes;
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition* endOfDocument;
@property(retain, nonatomic) UIFont* font;
@property(retain) UIView* inputAccessoryView;
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;
@property(retain) UIView* inputView;	// @synthesize=m_inputView
@property(readonly, assign, nonatomic) UITextInteractionAssistant* interactionAssistant;
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(readonly, assign, nonatomic) UITextRange* markedTextRange;
@property(copy, nonatomic) NSDictionary* markedTextStyle;
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;
@property(copy) UITextRange* selectedTextRange;
@property(assign, nonatomic) int selectionAffinity;
@property(assign, nonatomic) int selectionGranularity;
@property(readonly, assign, nonatomic) UITextSelectionView* selectionView;
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString* text;
@property(assign, nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor* textColor;
@property(readonly, assign, nonatomic) UIResponder<UITextSelection>* textDocument;
@property(readonly, assign, nonatomic) UIView* textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;
+(id)bestInterpretationForDictationResult:(id)dictationResult;
+(id)bestInterpretationForMarsVoltas:(id)marsVoltas;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame font:(id)font;
-(id)initWithFrame:(CGRect)frame webView:(id)view;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)_bold:(id)bold;
-(void)_dealloc;
-(void)_define:(id)define;
-(id)_findWebViewWordBoundaryFromPosition:(id)position;
-(void)_italicize:(id)italicize;
-(id)_keyboardResponder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_promptForReplace:(id)replace;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(void)_showTextStyleOptions:(id)options;
-(void)_underline:(id)underline;
-(id)automaticallySelectedOverlay;
-(int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;
-(BOOL)becomeFirstResponder;
-(BOOL)becomesEditableWithGestures;
-(void)beginSelectionChange;
// declared property getter: -(id)beginningOfDocument;
-(float)bottomBufferHeight;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(BOOL)canResignFirstResponder;
-(void)cancelDataDetectorsWithWebLock;
-(void)cancelInteractionWithLink;
-(CGRect)caretRectForPosition:(id)position;
-(id)characterRangeAtPoint:(CGPoint)point;
-(id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;
-(id)closestPositionToPoint:(CGPoint)point;
-(id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;
-(void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;
-(int)comparePosition:(id)position toPosition:(id)position2;
-(CGPoint)constrainedPoint:(CGPoint)point;
// declared property getter: -(id)content;
-(id)contentAsHTMLString;
-(void)copy:(id)copy;
-(CGImageRef)createSnapshotWithRect:(CGRect)rect;
-(void)cut:(id)cut;
// declared property getter: -(unsigned)dataDetectorTypes;
-(void)dealloc;
-(void)delayedUpdateForKeyboardDidShow;
-(void)deleteBackward;
-(void)detachInteractionAssistant;
-(void)detachSelectionView;
-(void)didMoveToSuperview;
-(void)displayScrollerIndicators;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)endOfDocument;
-(void)endSelectionChange;
-(void)ensureSelection;
-(CGRect)firstRectForRange:(id)range;
// declared property getter: -(id)font;
-(void)forwardInvocation:(id)invocation;
-(CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;
-(BOOL)hasText;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
// declared property getter: -(id)inputAccessoryView;
// declared property getter: -(id)inputDelegate;
// declared property getter: -(id)inputView;
-(void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;
-(id)insertDictationResultPlaceholder;
-(void)insertText:(id)text;
// declared property getter: -(id)interactionAssistant;
// declared property getter: -(BOOL)isEditable;
// declared property getter: -(BOOL)isEditing;
-(BOOL)isFirstResponder;
-(BOOL)isInteractingWithLink;
-(void)keyboardDidShow:(id)keyboard;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)keyboardInputChanged:(id)changed;
-(void)keyboardInputChangedSelection:(id)selection;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(float)lineHeight;
-(void)makeTextWritingDirectionLeftToRight:(id)right;
-(void)makeTextWritingDirectionRightToLeft:(id)left;
-(int)marginTop;
// declared property getter: -(id)markedTextRange;
// declared property getter: -(id)markedTextStyle;
-(id)metadataDictionariesForDictationResults;
-(id)methodSignatureForSelector:(SEL)selector;
-(BOOL)mightHaveLinks;
-(CGImageRef)newSnapshotWithRect:(CGRect)rect;
-(CGPoint)offset;
-(int)offsetFromPosition:(id)position toPosition:(id)position2;
-(void)paste:(id)paste;
-(void)performBecomeEditableTasks;
-(id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;
-(id)positionFromPosition:(id)position offset:(int)offset;
-(id)positionWithinRange:(id)range farthestInDirection:(int)direction;
-(void)recalculateStyle;
-(CGRect)rectForSelection:(NSRange)selection;
-(id)rectsForRange:(id)range;
-(void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;
-(void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;
-(void)removeFromSuperview;
-(void)replace:(id)replace;
-(void)replaceRange:(id)range withText:(id)text;
-(void)resetDataDetectorsResultsWithWebLock;
-(BOOL)resignFirstResponder;
-(BOOL)respondsToSelector:(SEL)selector;
-(void)scrollRangeToVisible:(NSRange)visible;
-(void)scrollRectToVisibleInContainingScrollView;
-(void)scrollSelectionToVisible:(BOOL)visible;
-(void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;
-(BOOL)scrollingEnabled;
-(void)select:(id)select;
-(void)selectAll;
-(void)selectAll:(id)all;
// declared property getter: -(NSRange)selectedRange;
-(id)selectedText;
// declared property getter: -(id)selectedTextRange;
// declared property getter: -(int)selectionAffinity;
-(CGRect)selectionClipRect;
// declared property getter: -(int)selectionGranularity;
// declared property getter: -(id)selectionView;
-(void)setAllowsFourWayRubberBanding:(BOOL)banding;
-(void)setAllowsRubberBanding:(BOOL)banding;
-(void)setBaseWritingDirection:(int)direction forRange:(id)range;
-(void)setBecomesEditableWithGestures:(BOOL)gestures;
-(void)setBottomBufferHeight:(float)height;
-(void)setContentToHTMLString:(id)htmlstring;
// declared property setter: -(void)setDataDetectorTypes:(unsigned)types;
-(void)setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;
// declared property setter: -(void)setEditable:(BOOL)editable;
// declared property setter: -(void)setEditing:(BOOL)editing;
// declared property setter: -(void)setFont:(id)font;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setInputAccessoryView:(id)view;
// declared property setter: -(void)setInputDelegate:(id)delegate;
// declared property setter: -(void)setInputView:(id)view;
-(void)setLineHeight:(float)height;
-(void)setMarginTop:(int)top;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
// declared property setter: -(void)setMarkedTextStyle:(id)style;
-(void)setMarsVoltas:(id)voltas withCorrectionIdentifier:(id)correctionIdentifier;
-(void)setOffset:(CGPoint)offset;
-(void)setRichText:(BOOL)text;
-(void)setScrollerIndicatorSubrect:(CGRect)subrect;
-(void)setScrollingEnabled:(BOOL)enabled;
// declared property setter: -(void)setSelectedRange:(NSRange)range;
// declared property setter: -(void)setSelectedTextRange:(id)range;
// declared property setter: -(void)setSelectionAffinity:(int)affinity;
// declared property setter: -(void)setSelectionGranularity:(int)granularity;
-(void)setSelectionToEnd;
-(void)setSelectionToStart;
-(void)setShowScrollerIndicators:(BOOL)indicators;
// declared property setter: -(void)setText:(id)text;
// declared property setter: -(void)setTextAlignment:(int)alignment;
// declared property setter: -(void)setTextColor:(id)color;
-(BOOL)shouldScrollEnclosingScrollView;
-(BOOL)shouldStartDataDetectors;
-(BOOL)showScrollerIndicators;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)startDataDetectorsWithWebLock;
-(void)startInteractionWithLinkAtPoint:(CGPoint)point;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)point;
-(id)styleString;
-(id)supportedPasteboardTypesForCurrentSelection;
-(void)tapLinkAtPoint:(CGPoint)point;
// declared property getter: -(id)text;
// declared property getter: -(int)textAlignment;
// declared property getter: -(id)textColor;
// declared property getter: -(id)textDocument;
-(id)textInRange:(id)range;
-(id)textInputTraits;
-(id)textRangeFromPosition:(id)position toPosition:(id)position2;
-(CGSize)tileSizeForSize:(CGSize)size;
// declared property getter: -(id)tokenizer;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(id)undoManager;
-(id)undoManagerForWebView:(id)webView;
-(void)unmarkText;
-(void)updateContentEditableAttribute:(BOOL)attribute;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)point;
-(void)updateSelection;
-(void)updateWebViewObjects;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)point;
-(CGRect)visibleRect;
-(CGRect)visibleTextRect;
-(id)webView;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)webViewDidChange:(id)webView;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)point;
@end

@interface UITextView (SyntheticEvents)
-(id)_automationValue;
@end

@interface UITextView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

@interface UITextView (UITextViewPrintFormatter)
-(Class)_printFormatterClass;
@end

