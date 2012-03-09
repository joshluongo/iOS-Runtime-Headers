/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SATimerObject : SADomainObject  {
}

@property(copy) NSString * state;
@property(retain) NSNumber * timerValue;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setState:(id)arg1;
- (id)state;
- (id)timerValue;
- (void)setTimerValue:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;

@end