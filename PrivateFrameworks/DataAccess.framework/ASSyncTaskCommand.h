/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface ASSyncTaskCommand : NSObject {
    NSString *_serverID;
    NSInteger _type;
}

- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)appendCommandData:(id)arg1;
- (id)clientID;
- (void)dealloc;
- (id)initWithCommandType:(NSInteger)arg1 serverID:(id)arg2;
- (id)serverID;
- (void)success;
- (NSInteger)type;

@end