#pragma once

static const unsigned int NAME_LEN = 65;

#include <iostream>
#include <vector>

#include "ReportCardManager.h"
#include "StudentInfo.h"

using namespace std;


#define SAFE_DELETE(ptr) if(ptr != nullptr){delete[] ptr; ptr = nullptr;}