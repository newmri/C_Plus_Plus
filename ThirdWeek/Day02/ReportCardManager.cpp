#include "stdafx.h"

CReportCardManager::CReportCardManager()
{

}

void CReportCardManager::Update()
{
	int sel{};

	while (true) {
		system("cls");
		cout << "1. Input Score 2. Show All 3. Search 4. Delete 5.Exit: ";
		cin >> sel;
		switch (sel) {
		case 1: this->InputReportCard(); break;
		case 2: this->ShowAllStudent(); break;
		case 3: this->ShowStudent(this->SearchStudent()); break;
		case 4: this->DeleteStudent(); break;
		default: return;
		}
		system("pause");
	}
}

void CReportCardManager::InputReportCard()
{
	int studentNum{};

	cout << "Input student number: ";
	cin >> studentNum;
	tagStudentInfo studentInfo;

	for (int i = 0; i < studentNum; ++i) {
		cout << "Name: ";
		cin >> studentInfo.name;
		do {
			cout << "Korean: ";
			cin >> studentInfo.kor;
		} while (this->CheckError(studentInfo.kor));
		do {
			cout << "English: ";
			cin >> studentInfo.eng;
		} while (this->CheckError(studentInfo.eng));
		do {
			cout << "Math: ";
			cin >> studentInfo.math;
		} while (this->CheckError(studentInfo.eng));

		studentInfo.total = studentInfo.kor + studentInfo.eng + studentInfo.math;
		studentInfo.avg = static_cast<float>(studentInfo.total / 3.0f);

		m_student.emplace_back(studentInfo);
	}
}

bool CReportCardManager::CheckError(const int& score)
{
	if (score < 0 || score > 100) {
		cout << "Error! Input between 0 ~ 100" << endl;
		return true;
	}
	return false;
}

void CReportCardManager::ShowStudent(const int idx)
{
	if (idx != -1) {
		cout << " ------------ No. " << idx + 1 << " ------------" << endl;
		cout << "Name: " << m_student[idx].name << endl;
		cout << "Korean: " << m_student[idx].kor << endl;
		cout << "English: " << m_student[idx].eng << endl;
		cout << "Math: " << m_student[idx].math << endl;
		cout << "Total: " << m_student[idx].total << endl;
		cout << "Avg: " << m_student[idx].avg << endl;
		cout << endl;
		return;
	}

	cout << "Don't exist this student." << endl;
}

void CReportCardManager::ShowAllStudent()
{
	for (unsigned int i = 0; i < m_student.size(); ++i) this->ShowStudent(i);
}

int CReportCardManager::SearchStudent()
{
	char name[NAME_LEN];
	cout << "Name: ";
	cin >> name;
	for (unsigned int i = 0; i < m_student.size(); ++i) {
		if (strcmp(name, m_student[i].name) == 0) return i;
		
	}

	return -1;
}


void CReportCardManager::DeleteStudent()
{
	int idx = this->SearchStudent();
	auto itor = m_student.begin() + idx;
	m_student.erase(itor);

}