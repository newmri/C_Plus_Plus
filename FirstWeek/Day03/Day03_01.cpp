#include <iostream>

using namespace std;

// ##1. Creator
// the process of object: allocate memory -> call creator

// When create object compiler automatically create these
// 1. Default Creator
// 2. Default Destructor
// 3. Default Copy Creator
// 4. Default Assignment Operator

class CPlayer
{
public:
	CPlayer() { cout << "Default Creator" << endl; }
	CPlayer(int n) { cout << "Creator With argument" << endl;} // Overloading!

};

int main()
{
	CPlayer player{ 1 };
	// ##2. Deferences among new, malloc and calloc
	//CPlayer* p = new CPlayer; // Call Creator O
	//CPlayer* p = (CPlayer*)malloc(sizeof(CPlayer)); // Call Creator X
	//CPlayer* p = new CPlayer{ 1 }; // Call Creator O
	system("pause");
}