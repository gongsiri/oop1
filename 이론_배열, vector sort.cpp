#include<iostream>
#include<list>
#include<vector> //STL sequence container, �˻� ����
#include<algorithm> //���Ϳ��� sort ����� ��ü�� ��� algorithm �ʿ�

using namespace std;
int main() {
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	sort(vec.begin(), vec.end());

	//for (auto it = vec.begin(); it != vec.end(); ++it)
	//	cout << *it;

	//modern (c++ 11)
	for (auto v : vec) //vector �����̳ʿ��� �ϳ��ϳ��� ������ ����
		cout << v;

	cout << endl;

	char arr[5] = { 'e','b','a','d','c' };
	sort(arr, arr + 5); // 0���� ������ �ʴ� 5���� ����Ŵ ������������ ��������

	for (auto p = arr; p != arr + 5; ++p)  //iterator�� ���
		cout << *p;

	//for (char* p = &arr[0]; p != arr + 5; ++p)  //iterator�� ���
	//	cout << *p;
	
	return 0;
}
		