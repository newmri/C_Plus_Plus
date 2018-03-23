#include "stdafx.h"

// ##1. C++ Style Casting
// static_cast, dynamic_cast,const_cast, reinterpret_cast

class A
{


};

class B
{

};

class Parent
{
public:
	virtual ~Parent() {}
};

class Child : public Parent
{
public:
	void PlayGame() { cout << "I m playing a game!" << endl; }
};

int main()
{
	// ##2. static_cast
	// cast type at compile time
	int n = static_cast<int>(3.14f); // C++ style

	A a;
	B* p = (B*)&a; // force type casting

	// B* p =  static_cast<B*>(&a); // decide if this is correct at compile time

	// ##3. dynamic_cast
	Parent* parent = new Child;
	// DownCasting
	static_cast<Child*>(parent)->PlayGame();

	// Danger!
	// static_cast does not consider if this is right or not
	{
		Parent* parent = new Parent;
		// DownCasting
		static_cast<Child*>(parent)->PlayGame();
		// dynamic_cast is based on dynamic binding. so, need to include virtual keyword
		Child* child = dynamic_cast<Child*>(parent); // Error!
		// return nullptr when trying unright down casting
		if(child != nullptr) child->PlayGame();
	}

	// ##4. const_cast
	// allow casintg const Pointer or Reference
	//const int* ptr = nullptr;
	//int* ptr2 = const_cast<int*>(ptr);

	Child player;
	const Child& r = player;
	// r.PlayGame();// error
	const_cast<Child&>(r).PlayGame();

	// ##5. reinterpret_cast
	int a = 100;
	// force casting
	// float* ptr = static_cast<float*>(&a); // error
	float* ptr = reinterpret_cast<float*>(&a); // ok

}