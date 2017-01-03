/******************************************************************************/
/*!
\file		SourceC.cpp
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Source data in C.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#include <Stdafx.h>

#ifndef __cplusplus

//#include <Stdafx.h>
//#include "MyDataC_Test.h"

void Initialize(void)
{
	/* GetBBInstance(); */
}

void DoStuff(void)
{
	TestMyData();
	TestBlackBoard();
}

void Shutdown(void)
{
	FreeBlackBoard();
}

#endif