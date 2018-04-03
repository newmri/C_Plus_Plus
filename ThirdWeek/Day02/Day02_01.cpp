#include "stdafx.h"

// �����̳�: �ڷᱸ�� ��ü
// ���� ��ġ���
	// 1. ǥ�� ������ list, vector, deque
	// 2. ǥ�� ����(�� ������) (����-�� Ʈ��)	map, multimap, set, multiset
// �޸� ������
	// 1. �迭��� vector,deque
	// 2. ����� ������

// vector: �����迭, �ε��� ���� ����
// list : ����� ���Ḯ��Ʈ, �ε��� ���� �Ұ�
// map: Ʈ�� ���, Ű�� ���� ����, Ű�� �ε��� ���� ����, �ߺ�Ű ����
// multimap: map�� �����ϳ� �ε��� ���� �Ұ�, �ߺ�Ű ���
// set: �ϳ��� key�� ����, �ߺ�Ű �Ұ�
// multiset: set�� �����ϳ� �ߺ�Ű ����

// string
// ���ӵ� �޸� ��� �����̳�, vector�� ����� Ư¡
// ���ڸ��� ����, ǥ�� �����̳ʰ� �ƴ�, �ٻ� �����̳�

// STL Ư¡
// 1. ȿ����
// 2. �Ϲ�ȭ(���� ����)
// 3. �̽ļ� Ȯ��(ȣȯ��) 
// 4. Ȯ�强(�ҽ� ����) 
// 5. ������ Ÿ�ӿ� Ÿ�� ������, ��Ÿ�ӽ� �ӵ� ���� ���� ����
// 6. ���������� Ŀ��
// 7. ������������

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