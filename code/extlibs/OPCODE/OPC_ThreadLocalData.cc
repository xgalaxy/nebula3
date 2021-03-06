///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
*	OPCODE - Optimized Collision Detection
*	Copyright (C) 2001 Pierre Terdiman
*	Homepage: http://www.codercorner.com/Opcode.htm
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
*	Contains methods of thread local data structure.
*	\file		OPC_ThreadLocalData.cpp
*	\author		Oleh Derevenko
*	\date		April, 16, 2008
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Precompiled Header
#include "Stdafx.h"

using namespace Opcode;


void ThreadLocalData::Init()
{
	gCompletePruningSorter = new PRUNING_SORTER;
	gBipartitePruningSorter0 = new PRUNING_SORTER;
	gBipartitePruningSorter1 = new PRUNING_SORTER;
}

void ThreadLocalData::Finit()
{
	DELETESINGLE(gBipartitePruningSorter1);
	DELETESINGLE(gBipartitePruningSorter0);
	DELETESINGLE(gCompletePruningSorter);
}


