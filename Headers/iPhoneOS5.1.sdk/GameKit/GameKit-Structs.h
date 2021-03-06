/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

typedef struct _NSZone NSZone;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int location;
	int length;
} XXStruct_ny2fMB;

typedef struct {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
	int _field5;
	int _field6;
} XXStruct_nh4N8A;

typedef struct GKGameInfo {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	BOOL _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7;
} GKGameInfo;

typedef struct dispatch_source_s dispatch_source_s;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct CGPath* CGPathRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct in_addr {
	unsigned _field1;
} in_addr;

typedef struct sockaddr_in {
	unsigned char _field1;
	unsigned char _field2;
	unsigned short _field3;
	in_addr _field4;
	BOOL _field5[8];
} sockaddr_in;

typedef struct {
	unsigned playButtonVisible : 1;
	unsigned usePlayerBackground : 1;
	unsigned translucentNavBar : 1;
	unsigned reserved : 27;
} XXStruct_CXv6bA;

typedef struct __GSEvent* GSEventRef;

typedef struct __CTParagraphStyle* CTParagraphStyleRef;

typedef struct CGContext* CGContextRef;

typedef struct dispatch_semaphore_s dispatch_semaphore_s;

typedef struct {
	float _field1;
	float _field2;
	id _field3;
} XXStruct_p8MRTB;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct __CTFont* CTFontRef;

typedef struct __CTRun* CTRunRef;

typedef struct __CTLine* CTLineRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct GKImageAtlasImageInfo {
	unsigned _field1;
	long long _field2;
	unsigned _field3;
	unsigned _field4;
	float _field5;
	unsigned char _field6;
	BOOL _field7;
} GKImageAtlasImageInfo;

typedef struct CGImage* CGImageRef;


