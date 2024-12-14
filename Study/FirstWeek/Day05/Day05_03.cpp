#include "stdafx.h"

class CPlayer
{
public:
	CPlayer(const char* name)
	{
		m_name = new char[strlen(name) + 1];
		strcpy_s(m_name, strlen(name) + 1, name);
	}

	~CPlayer()
	{
		if (m_name) {
			delete[] m_name;
			m_name = nullptr;
		}

		cout << "Called Destructor!" << endl;
	}

	// Depth Copy Constructor
	CPlayer(const CPlayer& other)
	{
		m_name = new char[strlen(other.m_name) + 1];
		strcpy_s(m_name, strlen(other.m_name) + 1, other.m_name);
	}

public:
	void PrintName()
	{
		cout << "My name is " << m_name << endl;
	}

private:
	char* m_name;
};

int main()
{
	CPlayer player1("Warrior");
	player1.PrintName();

	CPlayer player2(player1);
	player2.PrintName();

}