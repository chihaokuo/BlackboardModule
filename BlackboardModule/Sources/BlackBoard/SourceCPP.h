/******************************************************************************/
/*!
\file		SourceCPP.h
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Source data in C++.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#ifdef __cplusplus

enum DataType
{
	TYPE_NONE,		// type not specified (default)
	TYPE_INT,
	TYPE_BOOL,
	TYPE_FLOAT,
	TYPE_CUSTOM,	// user-defined type
	// add more types here
};

struct AbstractType
{
	union
	{
		int m_int;
		bool m_bool;
		float m_float;
	};
};

//// user-defined type
//struct Vector2
//{
//	float x, y;
//};

void Initialize(void);

void DoStuff(void);

void Shutdown(void);

#endif