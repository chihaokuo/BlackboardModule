/******************************************************************************/
/*!
\file		MyDataC.h
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Dynamic data class in C.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#ifndef __cplusplus

//#include "SourceC.h"

#define true 1
#define false 0

typedef int bool;

/* dynamic data struct */
typedef struct MyData_C
{
	union
	{
		int m_int;
		bool m_bool;
		float m_float;
		void *m_custom;
	};

	enum DataType m_type;
} MyData;

/* reset data and free allocated memory */
void MyDataC_Reset(MyData *mydata);
/* check if data is already set */
bool MyDataC_IsValid(const MyData *mydata);
/* check is data is the correct type */
bool MyDataC_IsType(const MyData *mydata, DataType type);

/* getters */
void MyDataC_SetInt(MyData *mydata, int value);
void MyDataC_SetBool(MyData *mydata, bool value);
void MyDataC_SetFloat(MyData *mydata, float value);
void MyDataC_Set(MyData *mydata, DataType type, void *value);

/* setters */
bool MyDataC_GetInt(const MyData *mydata, int *value);
bool MyDataC_GetBool(const MyData *mydata, bool *value);
bool MyDataC_GetFloat(const MyData *mydata, float *value);
bool MyDataC_Get(const MyData *mydata, DataType type, void **value);

#endif