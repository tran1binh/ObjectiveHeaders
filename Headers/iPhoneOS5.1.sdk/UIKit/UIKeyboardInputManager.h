/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardInputManager.h"
#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface UIKeyboardInputManager : XXUnknownSuperclass {
}
+(id)activeInstance;
+(void)releaseSharedInstance;
+(id)sharedInstanceForInputMode:(id)inputMode inHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;
-(void)acceptInput;
-(BOOL)acceptInputString:(id)string;
-(BOOL)acceptsCharacter:(unsigned short)character;
-(id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point deletePreceding:(unsigned*)preceding deleteFollowing:(unsigned*)following fromVariantKey:(BOOL)variantKey;
-(id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point firstDelete:(unsigned*)aDelete fromVariantKey:(BOOL)variantKey;
-(void)appendToInputContext:(id)inputContext;
-(void)clearInput;
-(void)clearInputContext;
-(id)deleteFromInput:(unsigned*)input;
-(unsigned)inputCount;
-(BOOL)inputEmpty;
-(unsigned)inputIndex;
-(void)inputLocationChanged;
-(id)inputString;
-(BOOL)removeSuffixOfInputContext:(id)inputContext;
-(void)setInput:(id)input;
-(void)setInput:(id)input typedString:(id)string;
-(void)setInputIndex:(unsigned)index;
-(BOOL)stringEndsWord:(id)word;
-(unsigned)wordHistoryDepth;
@end

@interface UIKeyboardInputManager (ResultSpecializations)
-(id)accessibilityLabelForCandidate:(id)candidate;
-(id)autocorrection;
-(id)candidates;
-(id)defaultCandidate;
-(unsigned)defaultCandidateIndex;
-(id)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method;
-(void)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method completion:(id)completion;
-(BOOL)isSentenceDelimiter:(unsigned short)delimiter;
-(unsigned)maximumNumberOfColumnsForSortingMethod:(id)sortingMethod interfaceOrientation:(int)orientation isInline:(BOOL)anInline reducedWidth:(BOOL)width;
-(unsigned)phraseBoundary;
-(id)remainingInput;
-(id)searchStringForMarkedText;
-(void)setPhraseBoundary:(unsigned)boundary;
-(void)setUsesCandidateSelection:(BOOL)selection;
-(BOOL)shouldShiftAfterChar:(unsigned short)aChar withSpaces:(int)spaces currentShift:(BOOL)shift;
-(BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)popupVariantString;
-(BOOL)shouldSuppressAutocorrectionWithTerminator:(id)terminator;
-(id)sortingMethods;
-(id)stringForDoubleKey:(id)doubleKey;
-(BOOL)suppliesCompletions;
-(BOOL)supportsNumberKeySelection;
-(BOOL)supportsSetPhraseBoundary;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppressesCandidateDisplay;
-(id)titleForSortingMethod:(id)sortingMethod;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesCandidateSelection;
@end

@interface UIKeyboardInputManager (FeatureSpecializations)
-(void)configureInputModeSpecificFeatures:(id)features withLayout:(id)layout;
-(void)configureKeyboard:(id)keyboard forAutocorrection:(id)autocorrection;
-(void)configureKeyboard:(id)keyboard forCandidates:(id)candidates;
-(void)setAutoCorrects:(BOOL)corrects;
-(void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;
-(void)setInSplitKeyboardMode:(BOOL)splitKeyboardMode;
-(void)setKeyboardEventsLagging:(BOOL)lagging;
-(void)setLearnsCorrection:(BOOL)correction;
-(void)setShallowPrediction:(BOOL)prediction;
-(void)setShift:(BOOL)shift;
-(BOOL)shouldExtendPriorWord;
@end

@interface UIKeyboardInputManager (DynamicDictionarySpecializations)
+(id)dynamicDictionaryFilePathForInputMode:(id)inputMode;
+(id)keyboardUserDirectory;
+(void)removeAllDynamicDictionaries;
+(void)removeDynamicDictionaryForInputMode:(id)inputMode;
+(id)userDictionaryWordKeyPairsFilePath;
-(void)addToTypingHistory:(id)typingHistory;
-(void)candidateAccepted:(id)accepted;
-(void)clearDynamicDictionary;
-(void)decreaseUserFrequency:(id)frequency;
-(void)increaseUserFrequency:(id)frequency;
-(void)lastAcceptedCandidateCorrected;
-(void)textAccepted:(id)accepted;
@end

@interface UIKeyboardInputManager (AlphabetInputSpecializations)
-(CFArrayRef)chargeableKeys;
-(CFDictionaryRef)chargedKeyProbabilities;
-(void)setCalculatesChargedKeyProbabilities:(BOOL)probabilities;
-(id)shadowTyping;
@end

@interface UIKeyboardInputManager (InputSpecializations)
-(id)addInputObject:(id)object;
-(id)setInputObject:(id)object;
@end

@interface UIKeyboardInputManager (ZephyrEngineSpecializations)
-(BOOL)canHandleKeyHitTest;
-(BOOL)canUseGeometryKeyTouch;
-(void)clearKeyAreas;
-(void)deleteFromStrokeHistory:(BOOL)strokeHistory;
-(int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift;
-(int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;
-(BOOL)keySlidIntoSwipe;
-(void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;
@end

@interface UIKeyboardInputManager (LayoutKnowledge)
+(void)beginRegisteringKeyplaneWithName:(id)name;
+(void)clearAllCentroids;
+(void)endRegisteringKeyplane;
+(void)registerCentroid:(CGPoint)centroid forKey:(id)key;
-(void)beginRegisteringKeyplaneWithName:(id)name;
-(void)clearAllCentroids;
-(void)endRegisteringKeyplane;
-(void)registerCentroid:(CGPoint)centroid forKey:(id)key;
-(void)setKeyboardMatchType:(int)type;
@end

@interface UIKeyboardInputManager (Typology)
-(void)setTypologyRecorder:(id)recorder;
@end

@interface UIKeyboardInputManager (ShortcutConversion)
-(unsigned)maximumShortcutLengthAllowed;
-(id)shortcutConversionForInput:(id)input andExistingString:(id)string existingStringStartsInMiddleOfWord:(BOOL)word;
-(BOOL)supportsShortcutConversion;
@end

