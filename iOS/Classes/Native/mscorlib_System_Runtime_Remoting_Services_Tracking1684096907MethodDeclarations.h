﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2484604634;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef2484604634.h"

// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern "C"  void TrackingServices__cctor_m1041791976 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyMarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C"  void TrackingServices_NotifyMarshaledObject_m2408179062 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, ObjRef_t2484604634 * ___or1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C"  void TrackingServices_NotifyUnmarshaledObject_m1221428029 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, ObjRef_t2484604634 * ___or1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyDisconnectedObject(System.Object)
extern "C"  void TrackingServices_NotifyDisconnectedObject_m3316648914 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
