/******************************************************************************/
/*!
\file		MyDataCPP.cpp
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Dynamic data class in CPP.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#include <Stdafx.h>

#ifdef __cplusplus

MyData::MyData(int value)
{
	SetData(value);
}

MyData::MyData(bool value)
{
	SetData(value);
}

MyData::MyData(float value)
{
	SetData(value);
}

MyData::~MyData()
{
	Reset();
}

// reset data and free allocated memory
void MyData::Reset(void)
{
	// free custom data type
	if (m_type == DataType::TYPE_CUSTOM)
		delete m_data;

	m_type = DataType::TYPE_NONE;
}

// check if data is already set
bool MyData::IsValid(void)
{
	if (m_type == TYPE_NONE)
		return false;

	return true;
}

// check is data is the correct type
bool MyData::IsType(DataType type)
{
	if (m_type == type)
		return true;

	return false;
}

void MyData::SetData(int value)
{
	Reset();

	m_int = value;
	m_type = DataType::TYPE_INT;

	printf("\tCopy %d to MyData\n", value);
}

void MyData::SetData(bool value)
{
	Reset();

	m_bool = value;
	m_type = DataType::TYPE_BOOL;

	printf("\tCopy %s to MyData\n", value ? "True" : "False");
}

void MyData::SetData(float value)
{
	Reset();

	m_float = value;
	m_type = DataType::TYPE_FLOAT;

	printf("\tCopy %f to MyData\n", value);
}

bool MyData::GetDataInt(int &value)
{
	if (m_type != DataType::TYPE_INT)
		return false;

	value = m_int;

	return true;
}

bool MyData::GetDataBool(bool &value)
{
	if (m_type != DataType::TYPE_BOOL)
		return false;

	value = m_bool;

	return true;
}

bool MyData::GetDataFloat(float &value)
{
	if (m_type != DataType::TYPE_FLOAT)
		return false;

	value = m_float;

	return true;
}

#endif