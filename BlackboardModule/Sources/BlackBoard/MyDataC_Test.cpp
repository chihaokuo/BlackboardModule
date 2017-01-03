/******************************************************************************/
/*!
\file		MyDataC_Test.cpp
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Test driver in C.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#include <Stdafx.h>

#ifndef __cplusplus

#include "MyDataC_Test.h"

void TestMyData(void)
{
	MyData data1;
	printf("MyData size: %d\n", sizeof(data1));

	// test int
	printf("\n(Int Type)\n");
	int myint = 5;
	printf("myint: %d\n", myint);
	MyDataC_SetInt(&data1, myint);
	myint = 3;
	printf("myint change to %d\n", myint);
	if (MyDataC_GetInt(&data1, &myint))
		printf("myint: %d\n", myint);
	else
		printf("Wrong Type, not Int\n");

	// test bool
	printf("\n(Bool Type)\n");
	bool mybool = true;
	printf("mybool: %s\n", mybool ? "True" : "False");
	MyDataC_SetBool(&data1, mybool);
	mybool = false;
	printf("mybool change to %s\n", mybool ? "True" : "False");
	// test if it's int
	if (MyDataC_GetInt(&data1, &myint))
		printf("Int: %d\n", myint);
	else
		printf("Wrong Type, not Int\n");
	// test if it's bool
	if (MyDataC_GetBool(&data1, &mybool))
		printf("mybool: %s\n", mybool ? "True" : "False");
	else
		printf("Wrong Type, not Bool\n");

	// test user-defined type
	printf("\n(Vec2 type)\n");
	Vector2 *vec2 = (Vector2 *)malloc(sizeof(Vector2));
	vec2->x = vec2->y = 7.0f;
	printf("vec2: %f %f\n", vec2->x, vec2->y);

	MyDataC_Set(&data1, TYPE_CUSTOM, (void *)vec2);
	Vector2 *newvec = 0;
	printf("create newvec\n");
	if (MyDataC_Get(&data1, TYPE_CUSTOM, &newvec))
		printf("newvec: %f %f\n", newvec->x, newvec->y);
	else
		printf("Wrong Type, not Custom\n");

	MyDataC_Reset(&data1);

}

void TestBlackBoard(void)
{
	ReserveDataBB(100);

	// test int
	printf("\n(Store int 999 to array index 10 in blackboard)\n");
	int myint = 999;
	printf("myint: %d\n", myint);
	MyData *mydata = GetDataBB(10);
	MyDataC_SetInt(mydata, myint);
	myint = 500;
	printf("myint change to %d\n", myint);
	if (MyDataC_GetInt(GetDataBB(10), &myint))
		printf("myint: %d\n", myint);
	else
		printf("Wrong Type, not Int\n");
}

#endif