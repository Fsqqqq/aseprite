// SHE library
// Copyright (C) 2012-2015  David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef SHE_OSX_APP_DELEGATE_H_INCLUDED
#define SHE_OSX_APP_DELEGATE_H_INCLUDED
#pragma once

#include <Cocoa/Cocoa.h>

@interface OSXAppDelegate : NSObject
- (NSApplicationTerminateReply)applicationShouldTerminate:(NSApplication*)sender;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication*)app;
- (void)applicationWillTerminate:(NSNotification*)notification;
@end

#endif
