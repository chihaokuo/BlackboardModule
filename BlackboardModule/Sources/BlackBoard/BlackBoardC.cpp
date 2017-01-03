/******************************************************************************/
/*!
\file		BlackBoardC.cpp
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Blackboard class in C.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#include <Stdafx.h>

#ifndef __cplusplus

/* C-style singleton */
MyBlackBoard *GetBBInstance(void)
{
	static MyBlackBoard *bb = 0;

	if (bb == 0)
	{
		bb = (MyBlackBoard *)malloc(sizeof(MyBlackBoard));
		bb->num_data = 0;

		printf("\nBlackBoard created\n");
	}

	return bb;
}

/* reserve data array for blackboard */
void ReserveDataBB(unsigned num)
{
	MyBlackBoard *bb = GetBBInstance();

	if (num == 0)
		return;

	/* clear previous data array */
	if (bb->num_data)
		free(bb->mydata);

	bb->mydata = (MyData *)malloc(sizeof(MyData) * num);
	bb->num_data = num;

	printf("\nReserved %d data\n", num);
}

/* get n-th data from blackboard */
MyData *GetDataBB(unsigned index)
{
	MyBlackBoard *bb = GetBBInstance();

	/* out of bound check */
	if (index >= bb->num_data)
		return 0;

	return (bb->mydata + index);
}

/* free memory from blackboard */
void FreeBlackBoard(void)
{
	MyBlackBoard *bb = GetBBInstance();

	if (bb)
	{
		/* free MyData array first */
		if (bb->num_data)
			free(bb->mydata);

		free(bb);

		printf("\nBlackBoard freed\n");
	}
}

#endif