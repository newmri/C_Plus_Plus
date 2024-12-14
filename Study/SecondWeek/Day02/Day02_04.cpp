#include "stdafx.h"

// ##1. Pure Virtual Function

class CFigure // Abstract Class
{
public:
	virtual ~CFigure() {}
	virtual void Draw() = 0;
};

class CTriangle : public CFigure
{
public:
	virtual ~CTriangle() {}
	virtual void Draw() override { cout << "Draw Triangle" << endl; } // must be override
};

int main()
{
	//CFigure obj; // Error!
	CTriangle triangle;
	triangle.Draw();
}