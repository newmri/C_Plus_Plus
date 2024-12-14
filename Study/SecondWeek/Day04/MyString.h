#pragma once

class CMyString
{
public:
	CMyString();
	CMyString(const char* str);
	CMyString(const CMyString& other);
	~CMyString();

public:
	void operator=(const char* str);
	void operator=(const CMyString& other);

public:
	void operator+=(const char* str);
	void operator+=(const CMyString& other);

public:
	bool operator==(const char* str);
	bool operator==(const CMyString& other);

public:
	bool operator!=(const char* str);
	bool operator!=(const CMyString& other);

public:
	CMyString operator+(const char* str);
	CMyString operator+(const CMyString& other);

public:
	friend ostream& operator<<(ostream& out, const  CMyString& str);
	friend CMyString operator+(const char* str, CMyString& cStr);
	friend bool operator==(const char* str, const CMyString& cStr);
	friend bool operator!=(const char* str, const CMyString& cStr);

public:
	bool IsIdenticalString(const char* str) const;

public:
	const char* CatStringBackward(const char* str);
	const char* CatStringForward(const char* str);

public:
	void CopyString(const char* str);
	void CopyString(const char* to, const char* from);

public:
	const char* GetString() const;
	const int GetLen() const;

private:
	const int GetLen(const char* str) const;

private:
	char*	m_str;
	int		m_len;
};