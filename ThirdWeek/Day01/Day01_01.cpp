// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

// ##1. template

// Function Template
template<typename T>
T Add(T lv, T rv) { return lv + rv; }

template<typename T>
T IsMax(T lv, T rv) { return (lv > rv) ? lv : rv; }

// Template Specialize
// Handle exception
template<>
char* IsMax(char* a, char* b) { return (strlen(a) > strlen(b)) ? a : b; }

template<typename T1, typename T2>
void SizeOf(T1 a, T2 b)
{
	cout << sizeof(T1) << endl;
	cout << sizeof(T2) << endl;

	cout << "-----------------------------------" << endl;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;

}

int main()
{
	// Template Function
	// Generates code at compile time
	cout << Add<int>(1, 2) << endl;
	cout << Add<float>(1.5f, 2.0f) << endl;

	int max = IsMax<int>(10, 20);
	cout << max << endl;

	char* pMax = IsMax<char*>("Tie", "Tomato");
	cout << pMax << endl;

	SizeOf<bool, int>(true, 1);

    return 0;
}

