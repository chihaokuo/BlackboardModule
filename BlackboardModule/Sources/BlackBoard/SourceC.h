/******************************************************************************/
/*!
\file		SourceC.h
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Source data in C.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#ifndef __cplusplus

typedef enum DataTypeC
{
	TYPE_NONE,		/* type not specified (default) */
	TYPE_INT,
	TYPE_BOOL,
	TYPE_FLOAT,
	TYPE_CUSTOM,	/* user-defined type */

	/* add more types here */
} DataType;

/* user-defined type */
typedef struct Vec2
{
	float x, y;
} Vector2;

void Initialize(void);

void DoStuff(void);

void Shutdown(void);


#endif