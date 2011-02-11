/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRSingleton.h"

@protocol BRHomeShareHandler;

@interface BRHomeShareManager : BRSingleton {
@private
	Class _homeShareHandlerClass;	// 4 = 0x4
	id<BRHomeShareHandler> _handlerInstance;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x3167b219
+ (id)singleton;	// 0x3167b20d
- (void)disableHomeSharing;	// 0x3167b2e1
- (void)enableHomeSharing;	// 0x3167b359
- (void)enableHomeSharingWithAccountName:(id)accountName andPassword:(id)password;	// 0x3167b305
- (id)handler;	// 0x3167b37d
- (BOOL)hasHomeShareAccount;	// 0x3167b299
- (id)homeShareAccount;	// 0x3167b275
- (id)homeSharingGroupIDIsEnabled:(id *)enabled;	// 0x3167b331
- (BOOL)isHomeSharingEnabled;	// 0x3167b2bd
- (long)pairForHomeShareStreamingWithHost:(ATVDataServerRef)host;	// 0x3167b24d
- (unsigned long long)pairingGUIDForServer:(ATVDataServerRef)server;	// 0x3167b225
- (void)registerHandlerClass:(Class)aClass;	// 0x3167b45d
@end
