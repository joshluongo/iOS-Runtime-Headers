/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScanner : NSObject {
    HAPWACScanRequest * _activeRequest;
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _scanInProgres;
}

@property (nonatomic, retain) HAPWACScanRequest *activeRequest;
@property (nonatomic, retain) NSMutableArray *pendingRequests;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isScanInProgress, nonatomic, readonly) BOOL scanInProgres;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)__nextRequest;
- (id)__pendingRequestWithUUID:(id)arg1;
- (void)__runRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)activeRequest;
- (BOOL)activeScan;
- (void)addRequest:(id)arg1;
- (void)cancelRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initPrivate;
- (BOOL)isScanInProgress;
- (id)pendingRequests;
- (id)queue;
- (void)scanForWACAndExtractSetupDictWithNumberOfScans:(unsigned int)arg1 andCompletion:(id /* block */)arg2;
- (void)setActiveRequest:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setQueue:(id)arg1;

@end
