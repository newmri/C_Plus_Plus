// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

// ##1. this pointer
class CPlayer
{
public:
	CPlayer()
	{

	}

	// explicit: grammer to avoid C style init
	explicit CPlayer(int n) : m_val(n) { cout << "Constructor" << endl; }

public:
	void PrintThis() 
	{
		cout << "this: " << this << endl;
	}

private:
	int m_val;
};

int main()
{
	CPlayer p;
	p.PrintThis();
	cout << "&player1: " << &p << endl;
	cout << "-------------------------" << endl;

	CPlayer p2(100); // C++ Style
	//CPlayer p3 = 200; // C Style Error with explicit keyword

    return 0;
}

