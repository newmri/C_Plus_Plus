// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

