#include "stdafx.h"

int main()
{
	CMyString str1; // null
	CMyString str2 = "Hello"; // Constructor
	CMyString str3 = str2; // Copy Constructor

	str1 = "World"; // copy
	str3 = str1; // copy

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	CMyString str4 = str3 + "!!!!"; // Add
	CMyString str5 = str2 + str4; // Add
	CMyString str6 = "!!!!" + str5; // Add

	cout << str4 << endl;
	cout << str5 << endl;
	cout << str6 << endl;
	
	str1 += "!!!!";
	cout << str1 << endl;
	str2 += str1;
	cout << str2 << endl;

	if (str1 == "Hello");
	else  cout << str1 << " and Hello are different" << endl;
	if ("Hello" == str1);
	else  cout << "Hello" << " and " << str1 << " are different" << endl;
	if (str1 == str2);
	else  cout << str1 << " and " << str1 << " are different" << endl;

	if (str1 != "Hello")  cout << str1 << " and Hello are different" << endl;
	if ("Hello" != str1) cout << "Hello" << " and " << str1 << " are different" << endl;
	if (str1 != str2) cout << str1 << " and " << str1 << " are different" << endl;

	CMyString str("Hiya");
	if (str == "Hiya") cout << str << " and " << "Hiya are identical" << endl;
}