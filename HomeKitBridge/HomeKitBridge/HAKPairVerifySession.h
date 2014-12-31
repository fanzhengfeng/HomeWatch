//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class HAKAccessoryKeychainObject, NSData;

@interface HAKPairVerifySession : NSObject
{
    unsigned char _state;
    id <HAKPairingSessionDelegate> _pairingDelegate;
    id <HAKPairVerifySessionDelegate> _delegate;
    NSData *_publicKey;
    NSData *_sharedSecret;
    HAKAccessoryKeychainObject *_accessoryKeychain;
    NSData *_controllerPublicKey;
    NSData *_sessionKey;
}

@property(retain, nonatomic) NSData *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(retain, nonatomic) NSData *controllerPublicKey; // @synthesize controllerPublicKey=_controllerPublicKey;
@property(retain, nonatomic) HAKAccessoryKeychainObject *accessoryKeychain; // @synthesize accessoryKeychain=_accessoryKeychain;
@property(retain, nonatomic) NSData *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) unsigned char state; // @synthesize state=_state;
@property __weak id <HAKPairVerifySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HAKPairingSessionDelegate> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
- (id)handlePairVerify:(id)arg1;

@end

