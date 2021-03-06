/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL failed;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isFromMe;
@property (nonatomic, readonly) IMMessage *message;
@property (nonatomic, readonly) IMHandle *sender;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *time;

- (BOOL)failed;
- (BOOL)isFromMe;
- (id)message;
- (id)sender;
- (id)time;

@end
