#include "stdafx.h"

// ##1. Temp Object
// Literal Object

class CPlayer
{
public:
	CPlayer(const char* name) : m_name(name) { cout << m_name << "s constructor" << endl; }

	~CPlayer() { cout << m_name << "s destructor" << endl; }

private:
	const char* m_name;
};

int main()
{
	CPlayer player("General Object");
	CPlayer("Temp Object");
}