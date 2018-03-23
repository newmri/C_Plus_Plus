#include "stdafx.h"

CMyString::CMyString()
{
	m_str = new char[1];
	this->CopyString(m_str, "");
	m_len = 0;
}

CMyString::CMyString(const char* str)
{
	m_len = GetLen(str);
	m_str = new char[m_len];
	this->CopyString(m_str, str);
}

CMyString::CMyString(const CMyString& other)
{
	this->CopyString(other.GetString());
}

CMyString::~CMyString()
{
	delete[] m_str;
}

void CMyString::operator=(const char* str)
{
	this->CopyString(str);
}

void CMyString::operator=(const CMyString& other)
{
	this->CopyString(other.GetString());
}

void CMyString::operator+=(const char* str)
{
	this->CatStringBackward(str);
}

void CMyString::operator+=(const CMyString& other)
{
	this->CatStringBackward(other.GetString());
}

bool CMyString::operator==(const char* str)
{
	return this->IsIdenticalString(str);
}

bool CMyString::operator==(const CMyString& other)
{
	return this->IsIdenticalString(other.GetString());
}

bool CMyString::operator!=(const char * str)
{
	return !this->IsIdenticalString(str);
}

bool CMyString::operator!=(const CMyString & other)
{
	return !this->IsIdenticalString(other.GetString());
}

CMyString CMyString::operator+(const char* str)
{
	return CMyString(this->CatStringBackward(str));
}

CMyString CMyString::operator+(const CMyString& other)
{
	return CMyString(this->CatStringBackward(other.GetString()));
}

bool CMyString::IsIdenticalString(const char* str) const
{
	if (this->m_len != this->GetLen(str)) return false;
	else {
		int cnt{};
		for (int i = 0; i < this->m_len; ++i) if (m_str[i] == str[i]) ++cnt;

		if (cnt == m_len) return true;
		return false;
	}
}

const char* CMyString::CatStringBackward(const char* str)
{
	int newLen = m_len + this->GetLen(str);

	CMyString tmp(this->GetString());
	SAFE_DELETE(m_str);
	m_str = new char[newLen];
	m_len = newLen;
	this->CopyString(this->m_str, tmp.GetString());

	for (int i = tmp.GetLen() - 1, j = 0; i < m_len; ++i, ++j) m_str[i] = str[j];

	return m_str;
	
}

const char* CMyString::CatStringForward(const char* str)
{
	int strLen = this->GetLen(str);
	int newLen = m_len + strLen;

	CMyString tmp(this->GetString());
	SAFE_DELETE(m_str);
	m_str = new char[newLen];
	m_len = newLen;
	this->CopyString(this->m_str, str);

	for (int i = strLen - 1, j = 0; i < m_len; ++i, ++j) m_str[i] = tmp.GetString()[j];

	return m_str;
}

void CMyString::CopyString(const char* str)
{
	m_len = this->GetLen(str);
	m_str = new char[m_len];
	this->CopyString(m_str, str);
}

void CMyString::CopyString(const char* to, const char* from)
{
	for (int i = 0; i < m_len; ++i) m_str[i] = from[i];
}

const char* CMyString::GetString() const
{
	return m_str;
}

const int CMyString::GetLen() const
{
	return m_len;
}

const int CMyString::GetLen(const char* str) const
{
	int cnt{};
	while (str[cnt] != '\0') ++cnt;
	return cnt + 1;
}


ostream& operator<<(ostream& out, const CMyString& str)
{
	if(str.GetString() != nullptr) out << str.GetString();

	return out;
}

CMyString operator+(const char* str, CMyString& cStr)
{
	CMyString tmp(cStr);
	tmp.CatStringForward(str);
	return tmp;
}

bool operator==(const char* str, const CMyString& cStr)
{
	return cStr.IsIdenticalString(str);
}

bool operator!=(const char* str, const CMyString& cStr)
{
	return !cStr.IsIdenticalString(str);
}
