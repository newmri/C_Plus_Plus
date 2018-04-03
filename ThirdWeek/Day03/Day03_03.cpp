#include "stdafx.h"

// predicate
// object returns bool

bool Greater(int a, int b) { return a > b; } // Desending
bool Less(int a, int b) { return a < b; } // Asendin

int main()
{
	//// ##1. sort
	//vector<int> v{ 5, 1, 2, 3, 4 }; // Uniform Init
	//sort(v.begin(), v.end(), greater<int>());

	//for (const auto& d : v) cout << d << endl;

	// Array
	int arr[5]{ 5, 1, 3, 4, 2 };
	sort(arr, arr + 5);
	for (int i = 0; i < 5; ++i) cout << arr[i] << endl;

}