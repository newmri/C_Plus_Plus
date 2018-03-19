#include "stdafx.h"

// ##1. Copy Constructor
class CPoint
{
public:
	CPoint() : m_x(0), m_y(0) {}
	CPoint(int x, int y) : m_x(x), m_y(y) {}
	CPoint(const CPoint& other) : m_x(other.m_x), m_y(other.m_y)
	{
		cout << "Default Copy Constructor" << endl;
	}

	void Print()
	{
		cout << m_x << ", " << m_y << endl;
	}

private:
	int m_x, m_y;
};

void Func1(CPoint obj)
{

}

CPoint Func2()
{
	CPoint pos;
	return pos;
}

int main()
{
	CPoint pos(100, 200);
	pos.Print();

	// ##2. Point Calling Copy Constructor
	// 1
	CPoint pos2(pos); // Copy Constructor
	pos2.Print();
	// 2. Argument of Function -> call by value
	Func1(pos);
	// 3. Return of Function -> call by value
	Func2();
}