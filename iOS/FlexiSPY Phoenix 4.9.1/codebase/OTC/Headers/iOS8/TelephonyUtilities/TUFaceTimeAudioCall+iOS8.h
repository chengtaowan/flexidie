//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUtilities/TUFaceTimeCall.h>

@interface TUFaceTimeAudioCall : TUFaceTimeCall
{
}

- (id)audioMode;
- (id)audioCategory;
- (int)callStatus;
- (int)supportedModelType;
- (int)service;
- (BOOL)shouldIgnoreStatusChange;
- (void)removeCallConnectedObserver;
- (void)addCallConnectedObserver;
- (void)handleCallConnected:(id)arg1;
- (void)unhold;
- (void)hold;
- (void)dealloc;

@end
