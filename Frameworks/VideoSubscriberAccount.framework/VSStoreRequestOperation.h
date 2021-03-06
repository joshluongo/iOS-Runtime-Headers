/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSStoreRequestOperation : VSAsyncOperation {
    VSStoreRequest * _request;
    int  _requestCompletionFlag;
    VSFailable * _result;
    SSRequest * _storeServicesRequest;
}

@property (nonatomic, copy) VSStoreRequest *request;
@property (nonatomic, retain) VSFailable *result;
@property (nonatomic, retain) SSRequest *storeServicesRequest;

- (void).cxx_destruct;
- (BOOL)_isFirstToFinish;
- (void)cancel;
- (void)executionDidBegin;
- (id)request;
- (id)result;
- (void)setRequest:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setStoreServicesRequest:(id)arg1;
- (id)storeServicesRequest;

@end
