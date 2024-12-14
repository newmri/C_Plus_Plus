#pragma once

#include <list>

struct tagStudentInfo;

class CReportCardManager
{
public:
	CReportCardManager();

public:
	void Update();

public:
	void ShowStudent(const int idx);
	void ShowAllStudent();

public:
	int SearchStudent();
	void InputReportCard();

public:
	void DeleteStudent();

public:
	void Sort();

public:
	bool CheckError(const int& score);

private:
	std::list<tagStudentInfo> m_student;
};