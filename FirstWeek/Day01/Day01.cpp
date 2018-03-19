#include <iostream>

using namespace std;

// ##1. Condition Compile

// #if ~ #endif
// #ifdef ~ #endif
// #ifndef ~ #endif

#define CUR_VER 1

int main()
{

//	// ##2. #if ~ #endif
//#if true
//	cout << "Compile!" << endl;
//#endif

//#if(1 == CUR_VER)
//	cout<<"Version 1"<<endl;
//#else
//	cout<<"The other version"<<endl;
//#endif

	// ##3. #ifdef ~ #endif
#ifdef PI
	cout << "Here is PI" << endl;
#else
	cout << "Here isn PI" << endl;
#endif


#ifndef PI
	cout << "Here isn PI" << endl;
#else
	cout << "Here is PI" << endl;
#endif

	system("pause");
}