/******************************************************************************/
/*!
\file		MyDataCPP.h
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Dynamic data class in CPP.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#ifdef __cplusplus

//#include <memory>
//#include "SourceCPP.h"

class MyData
{
public:

	template <typename T>
	MyData();
	MyData(int value);
	MyData(bool value);
	MyData(float value);

	~MyData();

	// reset data and free allocated memory
	void Reset(void);
	// check if data is already set
	bool IsValid(void);
	// check is data is the correct type
	bool IsType(DataType type);
	
	template <typename T>
	void SetData(const T &value);

	void SetData(int value);
	void SetData(bool value);
	void SetData(float value);

	template <typename T>
	T *GetData(void);

	bool GetDataInt(int &value);
	bool GetDataBool(bool &value);
	bool GetDataFloat(float &value);

private:
	union
	{
		int m_int;
		bool m_bool;
		float m_float;
		void *m_data;
	};

	DataType m_type;
};

template <typename T>
MyData::MyData()
{
	SetData<T>();
}

template <typename T>
void MyData::SetData(const T &value)
{
	Reset();

	m_data = new T(value);
	m_type = DataType::TYPE_CUSTOM;
}

template <typename T>
T *MyData::GetData(void)
{
	if (!IsValid())
		return nullptr;

	T *ptr = static_cast<T *>(m_data);

	return ptr;
}

#endif