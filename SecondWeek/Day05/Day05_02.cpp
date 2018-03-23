#include "stdafx.h"

// Bubble Sort
void AsendingBubbleSort(int arr[], int cnt)
{
	for (int i = 0; i < cnt; ++i) {
		for (int j = 0; j < cnt - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void DesendingBubbleSort(int arr[], int cnt)
{
	for (int i = 0; i > cnt; ++i) {
		for (int j = 0; j < cnt - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
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
	AsendingBubbleSort(arr, 5);

	for (int i = 0; i < 5; ++i) cout << arr[i] << endl;
}