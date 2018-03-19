// Day05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class CPlayer
{

public:
	void Sum(int n)
	{
		m_static += n;
		cout << m_static << endl;
	}

public:
	static void Func()
	{
		cout << "I'm not belong here!" << endl;
		//m_int; // Error
	}

public:
	static int m_static2;

private:
	static int m_static;

private:
	int m_int;
};

// Init static member
// Share static member in same class
int CPlayer::m_static = 0;
int CPlayer::m_static2 = 0;

int main()
{
	CPlayer player,p2;
	player.Sum(1);
	p2.Sum(3);
	CPlayer::m_static2 = 3;
	CPlayer::Func();



    return 0;
}

