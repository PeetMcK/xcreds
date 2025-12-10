//
//  XCreds-Bridging-Header.h
//  XCreds
//
//  Created by Timothy Perfitt on 6/3/22.
//

#ifndef XCreds_Bridging_Header_h
#define XCreds_Bridging_Header_h
#import "SecurityPrivateAPI.h"
#import "XCredsLoginPlugin.h"
// Removed - from deleted tcsopensourcetools submodule:
// #import "TCSKeychain.h"
// #import "TCSUnifiedLogger.h"
// #import "TCTaskHelper.h"
// Removed - from deleted ProductLicense Carthage dependency:
// #if !defined(AUTOFILL_TARGET) && !defined(FILEVAULTLOGIN_TARGET) && !defined(FILEVAULTLOGINHELPER_TARGET)
// #import <ProductLicense/ProductLicense.h>
// #endif
// Removed - from deleted tcsopensourcetools submodule:
// #import "TCSLoginWindowUtilities.h"
#import "DNSResolver.h"
#import "TCTaskWrapperWithBlocks.h"

// Kerb bits
#import "KerbUtil.h"
#import "GSSItem.h"
#import "krb5.h"

#include <membership.h>
// Removed - from deleted tcsopensourcetools submodule:
// #import "TCSTKSmartCard.h"
#endif /* XCreds_Bridging_Header_h */
