// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;


// TODO: reference additional headers your program requires here
#include "MyString.h"

#define SAFE_DELETE(ptr){ if(ptr) { delete[] ptr; ptr = nullptr;} }