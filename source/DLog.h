//
//  DLog.h
//  Greenhouse
//
//  Created by Roy Clarkson on 6/22/10.
//  Copyright 2010 VMware. All rights reserved.
//
// See the following URL for more information:
// http://iphoneincubator.com/blog/debugging/the-evolution-of-a-replacement-for-nslog

// DLog is almost a drop-in replacement for NSLog
// DLog();
// DLog(@"here");
// DLog(@"value: %d", x);
// Unfortunately this doesn't work DLog(aStringVariable); you have to do this instead DLog(@"%@", aStringVariable);

#ifdef DEBUG
	#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
	#define DLog(...)
#endif

// ALog always displays output regardless of the DEBUG setting
#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);