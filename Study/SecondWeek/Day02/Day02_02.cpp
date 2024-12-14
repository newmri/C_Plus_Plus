// Day02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ##1. virtual: keyword for dynamic bind

class CPerson
{
public:
	virtual ~CPerson()
	{
		cout << "Parent Destructor" << endl;
	}
public:
	virtual void WhoAreYou() { cout << "Im human" << endl; }

};

class CStudent : public CPerson
{
public:
	virtual ~CStudent()
	{
		cout << "Child Destructor" << endl;
	}

public:
	virtual void WhoAreYou() { cout << "Im Student" << endl; }

};

class CTest
{
public:
	virtual ~CTest() {}

private:
	int m_n;
};

int main()
{
	//CPerson person;
	//CStudent student;
	//CPerson* p = &student;
	//p->WhoAreYou();

	CPerson* per = new CStudent;
	delete per;

	// If virtual keyword is in class, compiler creates vfptr and vftable
	// vftable: save array of function
	// vfptr: point vftable

	//CPerson person;
	//CStudent stu;
	//int i = 0;

	// Virtual Function Pointer exists in class
	cout << sizeof(CTest) << endl;
	return 0;
}

