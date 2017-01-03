/******************************************************************************/
/*!
\file		Global.cpp
\project	AI Framework
\author		Chi-Hao Kuo
\summary	Global definitions.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#include <Stdafx.h>

Vector2::Vector2()
	: x(0.0f), y(0.0f)
{

}

Vector2::Vector2(float num_x, float num_y)
	: x(num_x), y(num_y)
{

}

Vector3::Vector3()
	: x(0.0f), y(0.0f), z(0.0f)
{

}

Vector3::Vector3(float num_x, float num_y, float num_z)
	: x(num_x), y(num_y), z(num_z)
{

}

bool NearZero(float num)
{ 
	return ((std::abs(num) < 1e-5f) ? true : false);
}

bool Near(float num1, float num2)
{ 
	return ((NearZero(num1 - num2)) ? true : false); 
}