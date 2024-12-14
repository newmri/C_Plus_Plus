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
	if (idx == -1) {
		cout << "Don't exist this student." << endl;
		return;
	}
	auto itor = m_student.begin();
	for (int i = 0; i < idx; ++i) ++itor;

	cout << " ------------ No. " << idx + 1 << " ------------" << endl;
	cout << "Name: " << itor->name << endl;
	cout << "Korean: " << itor->kor << endl;
	cout << "English: " << itor->eng << endl;
	cout << "Math: " << itor->math << endl;
	cout << "Total: " << itor->total << endl;
	cout << "Avg: " << itor->avg << endl;
	cout << endl;

}

void CReportCardManager::ShowAllStudent()
{
	this->Sort();
	for (size_t i = 0; i < m_student.size(); ++i) this->ShowStudent(i);
}

int CReportCardManager::SearchStudent()
{
	char name[NAME_LEN];
	cout << "Name: ";
	cin >> name;
	auto itor = m_student.begin();
	for (size_t i = 0; i < m_student.size(); ++i) {
		if (strcmp(name, itor->name) == 0) return i;
		++itor;
	}

	return -1;
}


void CReportCardManager::DeleteStudent()
{
	int idx = this->SearchStudent();
	auto itor = m_student.begin();
	for (int i = 0; i < idx; ++i) ++itor;
	m_student.erase(itor);

}

void CReportCardManager::Sort()
{
	m_student.sort([](const tagStudentInfo& lv, const tagStudentInfo& rv) {return (lv.avg > rv.avg); });
}
