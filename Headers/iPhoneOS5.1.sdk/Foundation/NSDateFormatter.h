/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFormatter.h"

@class NSMutableDictionary;

@interface NSDateFormatter : NSFormatter {
@private
	NSMutableDictionary* _attributes;
	CFDateFormatterRef _formatter;
	unsigned _counter;
}
+(id)dateFormatFromTemplate:(id)aTemplate options:(unsigned)options locale:(id)locale;
+(unsigned)defaultFormatterBehavior;
+(void)initialize;
+(id)localizedStringFromDate:(id)date dateStyle:(unsigned)style timeStyle:(unsigned)style3;
+(void)setDefaultFormatterBehavior:(unsigned)behavior;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)AMSymbol;
-(id)PMSymbol;
-(id)_dateFormat;
-(void)_regenerateFormatter;
-(void)_reset;
-(void)_setDateFormat:(id)format;
-(void)_setIsLenient:(BOOL)lenient;
-(id)calendar;
-(id)copyWithZone:(NSZone*)zone;
-(id)dateFormat;
-(id)dateFromString:(id)string;
-(unsigned)dateStyle;
-(void)dealloc;
-(id)defaultDate;
-(BOOL)doesRelativeDateFormatting;
-(void)encodeWithCoder:(id)coder;
-(id)eraSymbols;
-(void)finalize;
-(unsigned)formatterBehavior;
-(BOOL)generatesCalendarDates;
-(BOOL)getObjectValue:(out id*)value forString:(id)string errorDescription:(out id*)description;
-(BOOL)getObjectValue:(out id*)value forString:(id)string range:(inout NSRange*)range error:(out id*)error;
-(id)gregorianStartDate;
-(BOOL)isLenient;
-(id)locale;
-(id)longEraSymbols;
-(id)monthSymbols;
-(id)quarterSymbols;
-(void)setAMSymbol:(id)symbol;
-(void)setCalendar:(id)calendar;
-(void)setDateFormat:(id)format;
-(void)setDateStyle:(unsigned)style;
-(void)setDefaultDate:(id)date;
-(void)setDoesRelativeDateFormatting:(BOOL)formatting;
-(void)setEraSymbols:(id)symbols;
-(void)setFormatterBehavior:(unsigned)behavior;
-(void)setGeneratesCalendarDates:(BOOL)dates;
-(void)setGregorianStartDate:(id)date;
-(void)setLenient:(BOOL)lenient;
-(void)setLocale:(id)locale;
-(void)setLongEraSymbols:(id)symbols;
-(void)setMonthSymbols:(id)symbols;
-(void)setPMSymbol:(id)symbol;
-(void)setQuarterSymbols:(id)symbols;
-(void)setShortMonthSymbols:(id)symbols;
-(void)setShortQuarterSymbols:(id)symbols;
-(void)setShortStandaloneMonthSymbols:(id)symbols;
-(void)setShortStandaloneQuarterSymbols:(id)symbols;
-(void)setShortStandaloneWeekdaySymbols:(id)symbols;
-(void)setShortWeekdaySymbols:(id)symbols;
-(void)setStandaloneMonthSymbols:(id)symbols;
-(void)setStandaloneQuarterSymbols:(id)symbols;
-(void)setStandaloneWeekdaySymbols:(id)symbols;
-(void)setTimeStyle:(unsigned)style;
-(void)setTimeZone:(id)zone;
-(void)setTwoDigitStartDate:(id)date;
-(void)setVeryShortMonthSymbols:(id)symbols;
-(void)setVeryShortStandaloneMonthSymbols:(id)symbols;
-(void)setVeryShortStandaloneWeekdaySymbols:(id)symbols;
-(void)setVeryShortWeekdaySymbols:(id)symbols;
-(void)setWeekdaySymbols:(id)symbols;
-(id)shortMonthSymbols;
-(id)shortQuarterSymbols;
-(id)shortStandaloneMonthSymbols;
-(id)shortStandaloneQuarterSymbols;
-(id)shortStandaloneWeekdaySymbols;
-(id)shortWeekdaySymbols;
-(id)standaloneMonthSymbols;
-(id)standaloneQuarterSymbols;
-(id)standaloneWeekdaySymbols;
-(id)stringForObjectValue:(id)objectValue;
-(id)stringFromDate:(id)date;
-(unsigned)timeStyle;
-(id)timeZone;
-(id)twoDigitStartDate;
-(id)veryShortMonthSymbols;
-(id)veryShortStandaloneMonthSymbols;
-(id)veryShortStandaloneWeekdaySymbols;
-(id)veryShortWeekdaySymbols;
-(id)weekdaySymbols;
@end

