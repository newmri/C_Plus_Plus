#include "stdafx.h"

int main()
{
	// ##1. iterator
	// each container's internal structure and operation is different.
	// way of access united by iterator
	// overloaded object incre and decre, substitude, compare so on..
	// has position of elements -> resemble as pointer
	// random access, full duplex, one way, input, output

	// ##2. iterator of vector
	// random access
	// [], +, -, +=, -=, ++, --
	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	{
	// begin: return position of first element
	vector<int>::iterator itor = v.begin();
	// not a pointer, overloading
	cout << *itor << endl;
	cout << itor[1] << endl;
	cout << *(itor + 1) << endl;
	cout << "-------------------------------" << endl;
	// return position of after last element
	
		vector<int>::iterator itorEnd = v.end();

		for (; itor != itorEnd; ++itor) cout << *itor << endl;
		cout << "-------------------------------" << endl;
	}
	// empty vector has same begin and end
	if (v.begin() == v.end()) cout << "Vector is empty" << endl;

	// ##3. mid insert
	vector<int>::iterator itor = v.begin();
	vector<int>::iterator itorEnd = v.end();
	v.insert(itor + 2, 30);
	itor = v.begin();
	itorEnd = v.end();
	for (; itor != itorEnd; ++itor) cout << *itor << endl;
	cout << "-------------------------------" << endl;


	// ##4. mid delete
	itor = v.begin();
	itorEnd = v.end();
	// return position after delete position
	vector<int>::iterator itorE = v.erase(itor + 1);
	cout << *itorE << endl;
	itorEnd = v.end();
	cout << "-------------------------------" << endl;

	for (; itor != itorEnd; ++itor) cout << *itor << endl;

}