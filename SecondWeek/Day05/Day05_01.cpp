// Day05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ##1. Function Object
class CPlus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	CPlus functor;
	cout << functor(10, 20) << endl; // fuctor.operator()(10,20)
    return 0;
}

