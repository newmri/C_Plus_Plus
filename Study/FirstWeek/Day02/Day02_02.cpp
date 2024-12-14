#include <iostream>

using namespace std;

// ##1.Encapsulation(hiding)

class IPhone
{

public:
	void SetOS(const char* os)
	{
		if (!strcmp(os, "IOS")) strcpy_s(m_os, os);
		else strcpy_s(m_os, "IOS");
	}

	const char* GetOS()
	{
		return m_os;
	}

private:
	char m_os[16];
};


class NoseTablet
{

public:
	void Take()
	{
		cout << "Nose water is gone now!" << endl;
	}
};

class FeverTablet
{

public:
	void Take()
	{
		cout << "Fever is gone now!" << endl;
	}
};

// ##2.Encapsulation
class Tablet
{

public:
	void Take()
	{
		m_noseTablet.Take();
		m_feverTablet.Take();
	}

private:
	NoseTablet m_noseTablet;
	FeverTablet m_feverTablet;
};

int main()
{
	IPhone iPhone;
	iPhone.SetOS("Android");
	cout << iPhone.GetOS() << endl;

	Tablet tablet;
	tablet.Take();
	system("pause");
}