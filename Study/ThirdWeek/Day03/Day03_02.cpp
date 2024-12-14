#include "stdafx.h"

int main()
{
	// ##1. memory policy of vector
	vector<int> v;
	//// When vector is full , expand capacity as much as 1.5 times
	//for (int i = 0; i < 10; ++i) {
	//	v.push_back(i);

	//	cout << "size: " << v.size() << endl;
	//	cout << "capacity: " << v.capacity() << endl;
	//	cout << "address: " << &v[0] << endl;
	//	cout << "---------------------------------------" << endl;
	//}
	
	// ##2. reserve of memory
	v.reserve(100);
	for (int i = 0; i < 10; ++i) {
		v.push_back(i);

		cout << "size: " << v.size() << endl;
		cout << "capacity: " << v.capacity() << endl;
		cout << "address: " << &v[0] << endl;
		cout << "---------------------------------------" << endl;
	}

	while (true);
}