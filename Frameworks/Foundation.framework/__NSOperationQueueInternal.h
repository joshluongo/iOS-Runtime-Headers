/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject<OS_dispatch_queue>, NSOperation;

@interface __NSOperationQueueInternal : NSObject {
    int __actualMaxNumOps;
    NSOperation *__firstOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastOperation;
    NSOperation *__lastPriOperation[5];
    unsigned char __mainQ;
    int __maxNumOps;
    BOOL __nameBuffer[160];
    int __numExecOps;
    unsigned char __overcommit;
    unsigned char __pad1[1];
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSObject<OS_dispatch_queue> *__pending_barrier;
    unsigned int __poke;
    int __queueLock;
    unsigned char __suspended;
}

- (void)dealloc;
- (void)finalize;
- (id)init;

@end