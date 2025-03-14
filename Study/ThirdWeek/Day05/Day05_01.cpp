// Day05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ##1. list
// Double Linked List

int main()
{
	// ##2
	//list<int> list1;
	//list<float list2;

	// ##3 Insert and Delete elements
	list<int> lst;

	lst.push_back(30);
	lst.push_back(40);
	lst.push_front(20);

	lst.pop_back();
	lst.pop_front();
	lst.push_back(40);
	lst.push_back(50);

	list<int>::iterator itor = lst.begin();
	list<int>::iterator itorEnd = lst.end();

	while (itor != itorEnd) cout << *(itor++) << endl;
	cout << "------------------------------------------------" << endl;
	// ##4. front, back, empty, swap, clear

	// ##5. reverse
	lst.reverse();
	itor = lst.begin();
	while (itor != itorEnd) cout << *(itor++) << endl;
	cout << "------------------------------------------------" << endl;

	// ##6. sort
	lst.sort();
	itor = lst.begin();
	while (itor != itorEnd) cout << *(itor++) << endl;

	cout << "------------------------------------------------" << endl;

	// ##7. list iterator
	// list uses double iterator
	// ++, --


	// ##8. Insert in mid
	itor = lst.begin();
	++itor;
	lst.insert(itor, 35);
	itor = lst.begin();
	while (itor != itorEnd) cout << *(itor++) << endl;

	cout << "------------------------------------------------" << endl;

	// ##9. Delete in mid
	itor = lst.begin();
	++itor;
	lst.erase(itor);
	itor = lst.begin();

	while (itor != itorEnd) cout << *(itor++) << endl;

	// ## 10. vector vs list
	// vector: array, index, random iterator, search, sort(algorithm)
	// list: node, sequential, double iterator, insert delete, sort(memeber)
    
	return 0;
}

