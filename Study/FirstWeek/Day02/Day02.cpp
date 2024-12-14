#include <iostream>

using namespace std;

// ##1. Class

// Procedure Oriented ex) C
// Object Oriented ex) C++, C#, JAVA

// Abstract: Extract union unit

// Member Access Authority
// private: Can access to member by internal of class
// public: Can access to member by all
// protected: Inheritances can access to member 

// Attribute of Class
// 1. Encapsulation (hiding): Protect data from outer
// 2. Encapsulation
// 3. Inheritances
// 4. Polymorphisms: Same input variety output

class CDog
{
public:
	CDog() {};
	CDog(const char* name, const char* bark) { strcpy_s(m_name, name); strcpy_s(m_bark, bark); }

	void Move() { cout << m_name << " is moving now" << endl; }
	void Bark() { cout << m_name << " is barking now sounding " << m_bark << endl; }

private:
	char m_name[16];
	char m_bark[16];
};

int main()
{
	CDog dog{"La","Growl"};
	dog.Move();    

	system("pause");

}