#include "stdafx.h"

// Bubble Sort using Function Object

class CSortRule
{
public:
	virtual bool operator()(int a, int b) = 0;
};

class CAsendingRule : public CSortRule
{
public:
	virtual bool operator()(int a, int b) override
	{
		return a > b;
	}
};

class CDesendingRule : public CSortRule
{
public:
	virtual bool operator()(int a, int b) override
	{
		return a < b;
	}
};

void BubbleSort(int arr[], int cnt, CSortRule& functor)
{
	for (int i = 0; i < cnt; ++i) {
		for (int j = 0; j < cnt - 1; ++j) {
			if (functor(arr[j], arr[j + 1])) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[5]{ 5,1,3,4,2 };

	CDesendingRule deRule;
	BubbleSort(arr, 5, deRule);
	for (int i = 0; i < 5; ++i) cout << arr[i] << endl;
}