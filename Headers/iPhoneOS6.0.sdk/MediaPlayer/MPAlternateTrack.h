/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, AVMediaSelectionOption;

@interface MPAlternateTrack : XXUnknownSuperclass {
	NSString* _name;
	AVMediaSelectionOption* _option;
	BOOL _isSDH;
}
@property(readonly, assign, nonatomic) NSString* displayName;
@property(assign, nonatomic) BOOL isSDH;	// @synthesize=_isSDH
@property(readonly, assign, nonatomic) NSString* name;	// @synthesize=_name
@property(readonly, assign, nonatomic) AVMediaSelectionOption* option;	// @synthesize=_option
+(id)copyOffTrack;
+(id)threeCharCodesForEncodedISO639_2_T:(id)encodedISO639_2_T;
-(id)initWithName:(id)name option:(id)option;
-(id)_humanReadableLanguage;
-(int)compare:(id)compare;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)displayName;
// declared property getter: -(BOOL)isSDH;
// declared property getter: -(id)name;
// declared property getter: -(id)option;
// declared property setter: -(void)setIsSDH:(BOOL)sdh;
@end

