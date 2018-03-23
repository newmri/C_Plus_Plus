#include "stdafx.h"

// ##1. Condition of Inheritance
// ~ Is A
// ~ Has A

class CSword
{
public:
	void Attack() { cout << "Attack With a sword" << endl; }
};

class CAxe
{
public:
	void Attack() { cout << "Attack With an Axe" << endl; }
};

// Has A
class CPlayer //: public CSword, public CAxe 	//// ambiguous
{
public:
	void Attack()
	{
		m_sword.Attack();
		m_axe.Attack();
	}
private:
	CSword m_sword;
	CAxe m_axe;
};

int main()
{
	CPlayer player;
	player.Attack();
}