#import "OBATripStopTimeMapAnnotation.h"


@implementation OBATripStopTimeMapAnnotation

@synthesize timeFormatter;
@synthesize stopTime = _stopTime;

- (id) initWithTripDetails:(OBATripDetailsV2*)tripDetails stopTime:(OBATripStopTimeV2*)stopTime {
	if( self = [super init] ) {
		_tripDetails = [tripDetails retain];
		_stopTime = [stopTime retain];
	}
	return self;
}

#pragma mark MKAnnotation

- (NSString*) title {
	return _stopTime.stop.name;
}

- (NSString*) subtitle {
	
	long long serviceDate = 0;
	NSInteger scheduleDeviation = 0;
	
	OBATripStatusV2 * status = _tripDetails.status;
	if( status ) {
		serviceDate = status.serviceDate;
		scheduleDeviation = status.scheduleDeviation;
	}
	
	NSInteger stopTime = _stopTime.arrivalTime;
	
	NSDate * date = [NSDate dateWithTimeIntervalSince1970:(serviceDate/1000 + stopTime + scheduleDeviation)];
	return [self.timeFormatter stringFromDate:date];
}

- (CLLocationCoordinate2D) coordinate {
	return _stopTime.stop.coordinate;
}

@end