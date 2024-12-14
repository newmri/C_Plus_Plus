#include "stdafx.h"
#include "Test.h"

template<typename T>
CTest<T>::CTest()
{
}

template<typename T>
CTest<T>::~CTest()
{
}

template<typename T>
T CTest<T>::Add(T a, T b)
{
	return a + b;
}