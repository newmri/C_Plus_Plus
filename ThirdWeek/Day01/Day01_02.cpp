#include "stdafx.h"
#include "Test.h"
#include "Test.cpp"
// ##1. class template

template<typename T>
class CPoint
{
public:
	CPoint(T x, T y) : m_x(x), m_y(y) {}

public:
	void Draw() { cout << m_x << ", " << m_y << endl; }

private:
	T m_x, m_y;
};

template<typename T>
class CIsMax
{
public:
	T operator()(T a, T b) { return (a > b) ? a : b; }
};

template<>
class CIsMax <char*>
{
public:
	char* operator()(char* a, char* b) { return (strlen(a) > strlen(b)) ? a : b; }
};

template<typename T, int len = 5> // default
class CArray
{
private:
	T arr[len];
};

int main()
{
	// template class
	CPoint<int> pos(1, 2);
	CPoint<float> pos2(1.1f, 2.2f);

	pos.Draw();
	pos2.Draw();

	CIsMax<int> functor;
	cout << functor(1, 2) << endl;

	CIsMax<char*> charFuctor;
	cout << charFuctor("tie", "tomato") << endl;

	CArray<int, 7> array; // int arr[7]
	CArray<float> arr2; // float arr2[5]

	CTest<int> test;
	test.Add(1, 2);

}