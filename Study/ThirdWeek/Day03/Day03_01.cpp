// Day03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{

	// Character Set
	// SBCS (Single Byte Character Set)
	// all character is 1byte -> ascii code

	// MBCS (Multi Byte Character Set)
	// 1byte or 2bytes
	char szEng[6] = "Hello";
	cout << strlen(szEng) << endl;
	char szHan[6] = "한글";
	cout << strlen(szHan) << endl;

	// WBCS(Wide Byte Character Set)
	// all character is 2bytes -> unicode
	wchar_t eng[6] = L"Hello";
	cout << wcslen(eng) << endl;
	wchar_t kor[3] = L"한글";
	cout << wcslen(kor) << endl;

	return 0;
}

