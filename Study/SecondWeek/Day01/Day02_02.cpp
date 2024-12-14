#include "stdafx.h"

// ##1. Inheritance

class CHuman
{
public:
	CHuman() { cout<<"Call Human" << endl; }
	CHuman(const char* name) { strcpy_s(m_name, name); }
	~CHuman() { cout << "Call Human Destructor" << endl; }

public:
	void ShowName() { cout << m_name << endl; }

protected:
	char	m_name[16];
	char	m_gender[16];
	int		m_age;
};

class CStudent : public CHuman
{
public:
	CStudent() {}
	//CStudent(const char* name, const char* major) : CHuman(name) { strcpy_s(m_major, major); }
	CStudent(const char* name, const char* major) 
	{
		cout << "Call Student" << endl;
		strcpy_s(m_name, name);
		strcpy_s(m_major, major);
	}

	~CStudent() { cout << "Call Student Destructor" << endl; }

public:
	void ShowMajor() { cout << m_major << endl; }

private:
	char m_major[32];
};

class CWorker : public CStudent
{
public:
	void ShowPosition() { cout << m_position << endl; }

private:
	char m_position[32];
};

// OBject Creation Process: Alloc Memory and Call Constructor
// OBject Destruction Process: Call Destructor and return Memory 

int main()
{
	//CHuman human("Jack");
	//human.ShowName();
	CStudent student("Kim","Computer");
	student.ShowName();
	student.ShowMajor();
}