#pragma once

#include "Define.h"

struct tagStudentInfo
{
	tagStudentInfo()
	{
		memset(this, 0, sizeof(this));
	}

	char name[NAME_LEN];
	int kor, eng, math, total;
	float avg;
};