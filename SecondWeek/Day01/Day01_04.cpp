#include "stdafx.h"

class CPerson
{
public:
	void BaseFunc()
	{
		cout << "Parent" << endl;
	}

protected:
	int base;
};

class CStudent : public CPerson
{
public:
	void ChildFunc()
	{
		cout << "Child" << endl;
	}

private:
	int child;
};

class CTest
{


};
int main()
{
	cout << sizeof(CPerson) << endl;
	cout << sizeof(CStudent) << endl;

	CStudent stu;
	stu.BaseFunc(); // OK
	CPerson per;
	//per.ChildFunc(); // X

	// ##1. Object Pointer
	CTest obj;
	CPerson* ptr = &obj; // Error

	{
		CStudent stu;
		CPerson* per = &stu; // OK
		CPerson& r = stu; // OK
	}
}