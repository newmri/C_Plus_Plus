// Day01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void Func1();

extern int g_num;
//extern int staticNum; // Error

int main()
{
	Func1();
	g_num = 1;
	Func1();
    return 0;
}

