// Day04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ##1. class and const

class CPlayer
{
public:
	CPlayer() : m_cnt(1), m_val(1) // Initializer
	{
		// Already allocated memory. so, cant not be modified
		//m_cnt = 1; 
	}

public:
	// const member function
	// Can't modify member variable
	void ConstFunc() const
	{
		// m_val = 1; // Error
		// Can't call normal func
		// NormalFunc(); // Error
	}

	void NormalFunc()
	{
		m_val = 1;
	}

	void PrintFunc() const
	{
		cout << "const member func" << endl;
	}

	void PrintFunc()
	{
		cout << "member func" << endl;
	}

private:
	const int m_cnt;
	int m_val;
};

int main()
{
	// const
	const int n{ 1 };

	// const object
	const CPlayer player;
	//player.NormalFunc(); // error
	// const object can call const func
	//player.ConstFunc(); // OK

    return 0;
}

