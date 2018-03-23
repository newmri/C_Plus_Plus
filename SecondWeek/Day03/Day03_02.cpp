#include "stdafx.h"

// ##1. inline function
// fast than normal function
// perhabs automatically inserted
inline volatile int Add(volatile int lv, volatile int rv)
{
	return lv + rv;
}

// when not inserted inline 
// 1. pointer function
// 2. recursive function

int main()
{
	int a = (1, 2, 3, 4, 5);
	cout << a << endl;

	DWORD old = GetTickCount();
	for(int i = 0; i < 100000000; ++i) Add(10, 20);
	cout << (GetTickCount() - old) << endl;
}