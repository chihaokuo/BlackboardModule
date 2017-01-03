/******************************************************************************/
/*!
\file		BlackBoardCPP.h
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Blackboard class in C++.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#ifdef __cplusplus

//#include <string>
//#include <unordered_map>
//#include <vector>
//#include "MyDataCPP.h"

/* blackboard class */
class MyBlackBoard
{
public:
	MyBlackBoard();
	~MyBlackBoard();

	bool SetData(const std::string &name, MyData &mydata);
	MyData *GetData(const std::string &name);

private:
	std::vector<MyData *> m_datas;							// dynamic allocated data array
	std::unordered_map<std::string, unsigned> m_hashtable;	// hash table for data

	bool HasData(const std::string &name);
};

#endif