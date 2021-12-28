#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
//1)�Լ�
//bool myFunction(int i, int j) { return (i > j); } //�տ� ���� �ڿ� ������ ������ true ���� -> �� �ٲ� / �տ� ���� �ڿ� ������ ũ�� false -> ��������

//2)����ü
//struct mystruct {
//	bool operator()(int i, int j) { return (i > j); }
//}mystt;

//3)Ŭ����
//class myclass {
//public:
//	bool operator()(int i, int j) { return (i > j); }
//} myobject;

int main() {
	vector<char> v;
	v.push_back('e');
	v.push_back('b');
	v.push_back('a');
	v.push_back('d');
	v.push_back('c');

	//sort(v.begin(), v.end(),myFunction); //false�� ���� swap�ϴ� ������ sort �Լ� ���ο� �ִ� / �Լ��̿�
	//sort(v.begin(), v.end(), mystt); // ����ü �̿�
	//sort(v.begin(), v.end(), myobject); // Ŭ���� �̿�
	
	sort(v.begin(), v.end(), [](int i, int j) {return i > j; }); // 4)�����Լ� �̿�
	
	for (auto i : v)
		cout << i << endl;

	//for (auto it = v.begin(); it != v.end(); ++it)
	//	cout << *it;

	return 0;
}