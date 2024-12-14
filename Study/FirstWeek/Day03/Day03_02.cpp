#include <iostream>

using namespace std;

// ##1. Destructor
// Process of Destructor: Call Destructor -> return memory

class CPlayer
{
public:
	CPlayer() {}
	~CPlayer() { cout << "Default Destructor" << endl; }
};

// Utilization of Creator and Destructor

class CTest
{
public:
	CTest() { m_ptr = nullptr; }
	~CTest() { if (m_ptr != nullptr) { delete m_ptr; m_ptr = nullptr; } }
	void Init() { m_ptr = new int(); }
private:
	int* m_ptr;
};

int main()
{
	{
		CPlayer player;
	}

	{
		CPlayer* player = new CPlayer;
		delete player; // Call Destructor
	}
	system("Pause");
}