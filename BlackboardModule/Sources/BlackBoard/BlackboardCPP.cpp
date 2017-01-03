/******************************************************************************/
/*!
\file		BlackBoardCPP.cpp
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Blackboard class in C++.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#include <Stdafx.h>

#ifdef __cplusplus

MyBlackBoard::MyBlackBoard()
{

}

bool MyBlackBoard::SetData(const std::string &name, MyData &mydata)
{
	if (!HasData(name))
	{
		unsigned index = m_datas.size();
		m_datas.push_back(&mydata);
		m_hashtable.insert( {name, index} );

		return true;
	}

	return false;
}

MyBlackBoard::~MyBlackBoard()
{
	for (std::vector<MyData *>::iterator it = m_datas.begin(); it != m_datas.end(); ++it)
		(*it)->Reset();

	m_datas.clear();
	m_hashtable.clear();
}

MyData *MyBlackBoard::GetData(const std::string &name)
{
	std::unordered_map<std::string, unsigned>::iterator it = m_hashtable.find(name);
	if (it == m_hashtable.end())
		return nullptr;

	return m_datas[it->second];
}

bool MyBlackBoard::HasData(const std::string &name)
{
	std::unordered_map<std::string, unsigned>::const_iterator it = m_hashtable.find(name);
	if (it == m_hashtable.end())
		return false;

	return true;
}

#endif