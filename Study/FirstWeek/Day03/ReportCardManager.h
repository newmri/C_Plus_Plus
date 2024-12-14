#pragma once

struct tagStudentInfo;

class CReportCardManager
{
public:
	CReportCardManager();

public:
	void Update();
	void ShowStudent(const int idx);
	void ShowAllStudent();
	void SearchStudent();
	void InputReportCard();
	bool CheckError(const int& score);

private:
	tagStudentInfo* m_student;
	int m_studentBeforeNum, m_studentNum;
};