/******************************************************************************/
/*!
\file		BlackBoardC.h
\project	BlackBoard AI
\author		Chi-Hao Kuo
\summary	Blackboard class in C.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#ifndef __cplusplus

#include "MyDataC.h"

/* blackboard struct */
typedef struct BlackBoardC
{
	MyData *mydata;		/* dynamic allocated data array */
	unsigned num_data;	/* number of data reserved */
} MyBlackBoard;

/* C-style singleton */
MyBlackBoard *GetBBInstance(void);

/* reserve data array for blackboard */
void ReserveDataBB(unsigned num);

/* get n-th data from blackboard */
MyData *GetDataBB(unsigned index);

/* free memory from blackboard */
void FreeBlackBoard(void);

#endif