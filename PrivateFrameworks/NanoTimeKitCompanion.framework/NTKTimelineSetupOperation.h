/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelineSetupOperation : NTKTimelineDataOperation {
    CLKComplicationTimelineEntry * _currentEntry;
    unsigned int  _directions;
    NSDate * _endDate;
    id /* block */  _handler;
    unsigned int  _privacyBehavior;
    NSDate * _startDate;
    unsigned int  _timelineAnimationBehavior;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_getCurrentEntry;
- (void)_getEndDate;
- (void)_getPrivacyBehavior;
- (void)_getStartDate;
- (void)_getTimeTravelDirections;
- (void)_getTimelineAnimationBehavior;
- (void)_invokeHandler;
- (void)_start;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;

@end
