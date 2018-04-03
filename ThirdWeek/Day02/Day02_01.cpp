#include "stdafx.h"

// 컨테이너: 자료구조 객체
// 원소 배치방식
	// 1. 표준 시퀀스 list, vector, deque
	// 2. 표준 연관(비 선형적) (레드-블랙 트리)	map, multimap, set, multiset
// 메모리 저장방식
	// 1. 배열기반 vector,deque
	// 2. 노드기반 나머지

// vector: 동적배열, 인덱스 연산 가능
// list : 양방향 연결리스트, 인덱스 연산 불가
// map: 트리 기반, 키와 값을 가짐, 키로 인덱스 연산 가능, 중복키 불허
// multimap: map과 동일하나 인덱스 접근 불가, 중복키 허용
// set: 하나의 key만 가짐, 중복키 불가
// multiset: set과 동일하나 중복키 가능

// string
// 연속된 메모리 기반 컨테이너, vector와 비슷한 특징
// 문자만을 저장, 표준 컨테이너가 아님, 근사 컨테이너

// STL 특징
// 1. 효율성
// 2. 일반화(재사용 보장)
// 3. 이식성 확보(호환성) 
// 4. 확장성(소스 공개) 
// 5. 컴파일 타임에 타입 정해짐, 런타임시 속도 저하 거의 없음
// 6. 실행파일이 커짐
// 7. 가독성떨어짐

int main()
{
	// ##1. vector declare
	vector<int> v;
	vector<float> v2;

	// ##2. vector element insert and delete
	for (int i = 10; i <= 50; i += 10) v.push_back(i);

	for (size_t i = 0; i < v.size(); ++i) cout << v[i] << endl;
	cout << "------------------------------------" << endl;

	v.pop_back(); // delete from back
	for (auto& d : v) cout << d << endl;
	cout << "------------------------------------" << endl;

	// ##3. size and capacity
	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;
	cout << "------------------------------------" << endl;

	v.pop_back(); // delete from back
	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;
	cout << "------------------------------------" << endl;

	v.clear(); // delete all elements
	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;
	cout << "------------------------------------" << endl;

	// init capacity
	// swap: swap all info
	//v.swap(vector<int>());
	v.shrink_to_fit();
	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;
	cout << "------------------------------------" << endl;

	// ##4. empty
	if (v.empty()) cout << "Vector is currently empty!" << endl;
	cout << "------------------------------------" << endl;

	// ##5. front and back
	for (int i = 10; i <= 50; i += 10) v.push_back(i);
	v.front() += 5; // return reference from first element
	v.back() += 5; // return reference from last element
	cout << v.front() << endl;
	cout << v.back() << endl;

}