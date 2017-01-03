/******************************************************************************/
/*!
\file		Global.h
\project	AI Framework
\author		Chi-Hao Kuo
\summary	Global definitions.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#include <cmath>

typedef unsigned int		objectID;

// user-defined type
struct Vector2
{
	float x, y;

	Vector2();
	Vector2(float num_x, float num_y);
};

struct Vector3
{
	float x, y, z;

	Vector3();
	Vector3(float num_x, float num_y, float num_z);
};

class GameObject
{
};

bool NearZero(float num);
bool Near(float num1, float num2);