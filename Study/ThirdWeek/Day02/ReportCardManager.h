#pragma once

#include <vector>

struct tagStudentInfo;

class CReportCardManager
{
public:
	CReportCardManager();

public:
	void Update();
	void ShowStudent(const int idx);
	void ShowAllStudent();
	int SearchStudent();
	void InputReportCard();
	void DeleteStudent();

public:
	bool CheckError(const int& score);

private:
	std::vector<tagStudentInfo> m_student;
};