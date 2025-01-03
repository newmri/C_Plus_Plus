// Day04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ##1. Operation Overloading

class CPoint
{
public:
	CPoint() : m_x(0), m_y(0) {}
	CPoint(int x, int y) : m_x(x), m_y(y) {}

public:
	CPoint operator+(const CPoint& other)
	{
		return CPoint(this->m_x + other.m_x, this->m_y + other.m_y);
	}

	CPoint operator+(const int value)
	{
		return CPoint(this->m_x + value, this->m_y + value);
	}

	const CPoint& operator=(const CPoint& other)
	{
		this->m_x = other.m_x;
		this->m_y = other.m_y;
		return *this;
	}

	CPoint& operator++()
	{
		++this->m_x;
		++this->m_y;
		return *this;
	}

	CPoint operator++(int)
	{
		return CPoint(m_x++, m_y++);
	}
public:
	void Draw() { cout << m_x << ", " << m_y << endl; }

private:
	int m_x, m_y;
};

CPoint operator+(const int lv, CPoint& rv)
{
	return rv + lv;
}

// Can't be global
// =, [], (), ->

int main()
{
	{
		CPoint pos1(100, 100);
		CPoint pos2(200, 200);
		CPoint pos3 = pos1 + pos2; // pos1.operator(pos2);
		CPoint pos4 = pos1 + 500;
		CPoint pos5 = 500 + pos1;
	}

	{
		CPoint pos1;
		CPoint pos2(100, 100);
		pos1 = pos2; // pos1.operator=(pos2);

		int a{};
		cout << (a = 100) << endl; // 100
	}

	{
		CPoint pos1(100, 100);
		++pos1; // pos1.operator++();
		CPoint pos2 = pos1++; // pos1.operator++(int);
		pos1.Draw();
		pos2.Draw();
	}

    return 0;
}

