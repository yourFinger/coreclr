// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.

#ifndef __GCTOCLREVENTSINK_H__
#define __GCTOCLREVENTSINK_H__

#include "gcinterface.h"

class GCToCLREventSink : public IGCToCLREventSink
{
public:
    void FireDynamicEvent(const char* eventName, void* payload, uint32_t payloadSize);
};

extern GCToCLREventSink g_gcToClrEventSink;

#endif // __GCTOCLREVENTSINK_H__

