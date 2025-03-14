// Day02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class CPerson
{
public:
	void WhoAreYou() { cout << "Im human" << endl; }

};

class CStudent : public CPerson
{
public:
	void WhoAreYou() { cout << "Im Student" << endl; }

};

int main()
{
	CPerson person;
	CStudent student;
	person.WhoAreYou();
	student.WhoAreYou();

	// Static Binding: Call Function
	// Dynamic Binding: Call Virtual Function
	CPerson* p = &student;
	p->WhoAreYou();
    return 0;
}

