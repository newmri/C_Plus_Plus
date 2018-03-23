#include "stdafx.h"

int g_num = 10;

// Cant' use extern
static int staticNum;

void Func1()
{
	g_num += 999;
	cout << g_num << endl;
}

void Func2()
{
	g_num += 10000;
}