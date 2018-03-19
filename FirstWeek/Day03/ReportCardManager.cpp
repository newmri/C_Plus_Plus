#include "Define.h"

CReportCardManager::CReportCardManager()
{
	m_student = nullptr;
	m_studentNum = 0;
	m_studentBeforeNum = 0;
}

void CReportCardManager::Update()
{
	int sel{};

	while (true) {
		system("cls");
		cout << "1. Input Score 2. Show All 3. Search 4. Exit: ";
		cin >> sel;
		switch (sel) {
		case 1: this->InputReportCard(); break;
		case 2: this->ShowAllStudent(); break;
		case 3:
			this->SearchStudent();
			break;
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
	tagStudentInfo* studentInfo = new tagStudentInfo[studentNum];
	for (int i = 0; i < studentNum; ++i) {
		cout << "Name: ";
		cin >> studentInfo[i].name;
		do {
			cout << "Korean: ";
			cin >> studentInfo[i].kor;
		} while (this->CheckError(studentInfo[i].kor));
		do {
			cout << "English: ";
			cin >> studentInfo[i].eng;
		} while (this->CheckError(studentInfo[i].eng));
		do {
			cout << "Math: ";
			cin >> studentInfo[i].math;
		} while (this->CheckError(studentInfo[i].eng));

		studentInfo[i].total = studentInfo[i].kor + studentInfo[i].eng + studentInfo[i].math;
		studentInfo[i].avg = static_cast<float>(studentInfo[i].total / 3.0f);
	}

	this->m_studentBeforeNum = m_studentNum;
	this->m_studentNum += studentNum;

	if (m_student != nullptr) {
		tagStudentInfo* tmp = new tagStudentInfo[m_studentBeforeNum];
		memcpy(tmp, m_student, sizeof(*m_student) * m_studentBeforeNum);
		SAFE_DELETE(m_student);
		m_student = new tagStudentInfo[m_studentNum];
		memcpy(m_student, tmp, sizeof(*tmp) * m_studentBeforeNum);
		SAFE_DELETE(tmp);
		memcpy(&m_student[m_studentBeforeNum], studentInfo, sizeof(*studentInfo) * studentNum);
	}

	else {
		m_student = new tagStudentInfo[m_studentNum];
		memcpy(m_student, studentInfo, sizeof(*studentInfo) * m_studentNum);
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
	
	cout << " ------------ No. " << idx + 1 << " ------------" << endl;
	cout << "Name: " << m_student[idx].name << endl;
	cout << "Korean: " << m_student[idx].kor << endl;
	cout << "English: " << m_student[idx].eng << endl;
	cout << "Math: " << m_student[idx].math << endl;
	cout << "Total: " << m_student[idx].total << endl;
	cout << "Avg: " << m_student[idx].avg << endl;
	cout << endl;

}

void CReportCardManager::ShowAllStudent()
{
	for (int i = 0; i < m_studentNum; ++i) this->ShowStudent(i);
}

void CReportCardManager::SearchStudent()
{
	char name[NAME_LEN];
	cout << "Name: ";
	cin >> name;
	for (int i = 0; i < m_studentNum; ++i) {
		if (strcmp(name, m_student[i].name) == 0) {
			ShowStudent(i);
			return;
		}
	}

	cout << "Don't exist this student." << endl;
}