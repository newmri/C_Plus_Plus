#include <iostream>

using namespace std;

class CPlayer
{
public:
	CPlayer()
	{
		cout << "Default Creator" << endl;
	}
	~CPlayer()
	{
		cout << "Default Destructor" << endl;
	}
};

int main()
{
	{
		// Object Array
		CPlayer arr[3]{};
	}
	cout << "-------------------------" << endl;

	{
		CPlayer* ptr = new CPlayer[3];
		delete[] ptr;
	}

	cout << "-------------------------" << endl;

	{
		CPlayer* ptr[3]; // this is just pointer! so, does not call creator
	}

	cout << "-------------------------" << endl;
	{
		CPlayer* ptr[3]{ new CPlayer ,new CPlayer ,new CPlayer };
	}
	system("pause");
}