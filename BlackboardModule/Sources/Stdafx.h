#pragma once

#pragma warning(disable: 4005)
#pragma warning(disable: 4995) 

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <sstream>
#include <unordered_map>
#include <vector>

#include <Global.h>
#include <MyAssert.h>

// Blackboard
#ifndef __cplusplus
#include <stdlib.h>
#include <stdio.h>

#include <BlackBoard/SourceC.h>
#include <BlackBoard/MyDataC.h>
#include <BlackBoard/BlackboardC.h>
#else
#include <BlackBoard/SourceCPP.h>
#include <BlackBoard/MyDataCPP.h>
#include <BlackBoard/BlackboardCPP.h>
#endif

#pragma warning(default: 4005)
#pragma warning(default: 4995)