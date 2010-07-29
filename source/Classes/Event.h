//
//  Event.h
//  Greenhouse
//
//  Created by Roy Clarkson on 7/8/10.
//  Copyright 2010 VMware, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WebDataModelObject.h"


@interface Event : WebDataModelObject 
{

}

@property (nonatomic, assign) NSInteger eventId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *hashtag;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupProfileKey;

@end