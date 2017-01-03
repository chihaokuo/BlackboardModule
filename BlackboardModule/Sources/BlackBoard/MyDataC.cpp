/******************************************************************************/
/*!
\file		MyDataC.cpp
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Dynamic data class in C.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#include <Stdafx.h>

#ifndef __cplusplus

/* reset data and free allocated memory */
void MyDataC_Reset(MyData *mydata)
{
	/* free custom data type */
	if (mydata->m_type == TYPE_CUSTOM)
		free(mydata->m_custom);

	mydata->m_type = TYPE_NONE;
}

/* check if data is already set */
bool MyDataC_IsValid(const MyData *mydata)
{
	if (mydata->m_type == TYPE_NONE)
		return false;

	return true;
}

/* check is data is the correct type */
bool MyDataC_IsType(const MyData *mydata, DataType type)
{
	if (mydata->m_type == type)
		return true;

	return false;
}

void MyDataC_SetInt(MyData *mydata, int value)
{
	MyDataC_Reset(mydata);
	mydata->m_type = TYPE_INT;
	mydata->m_int = value;

	printf("\tCopy %d to MyData\n", value);
}

void MyDataC_SetBool(MyData *mydata, bool value)
{
	MyDataC_Reset(mydata);
	mydata->m_type = TYPE_BOOL;
	mydata->m_bool = value;

	printf("\tCopy %s to MyData\n", value ? "True" : "False");
}

void MyDataC_SetFloat(MyData *mydata, float value)
{
	MyDataC_Reset(mydata);
	mydata->m_type = TYPE_FLOAT;
	mydata->m_float = value;

	printf("\tCopy %f to MyData\n", value);

}

void MyDataC_Set(MyData *mydata, DataType type, void *value)
{
	MyDataC_Reset(mydata);
	mydata->m_type = type;

	switch (type)
	{
		/* add other types */

	case TYPE_CUSTOM:
	default:
		mydata->m_custom = value;
		break;

	}
}

bool MyDataC_GetInt(const MyData *mydata, int *value)
{
	if (MyDataC_IsType(mydata, TYPE_INT))
	{
		*value = mydata->m_int;

		printf("\tGet %d from MyData\n", *value);

		return true;
	}

	return false;
}

bool MyDataC_GetBool(const MyData *mydata, bool *value)
{
	if (MyDataC_IsType(mydata, TYPE_BOOL))
	{
		*value = mydata->m_bool;

		printf("\tGet %s from MyData\n", *value ? "True" : "False");

		return true;
	}

	return false;
}

bool MyDataC_GetFloat(const MyData *mydata, float *value)
{
	if (MyDataC_IsType(mydata, TYPE_FLOAT))
	{
		*value = mydata->m_float;

		printf("\tGet %f from MyData\n", *value);

		return true;
	}

	return false;
}

bool MyDataC_Get(const MyData *mydata, DataType type, void **value)
{
	if (MyDataC_IsValid(mydata) && (mydata->m_type == type))
	{
		switch (type)
		{
			/* add other types*/

		case TYPE_CUSTOM:
		default:
			*value = mydata->m_custom;
			break;
		}

		return true;
	}

	return false;
}

#endif