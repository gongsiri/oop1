#include<iostream>
#include<list> //STL sequence container, ����/���� ����
using namespace std;
int main() {
	list<char> ilist;
	
	//for (auto i = 0; i < 10; i++)
	//	ilist.push_back(i);

	ilist.push_back('e');
	ilist.push_back('b');
	ilist.push_back('a');
	ilist.push_back('d');
	ilist.push_back('c');

	//ilist.remove(5); // 5�� ����
	ilist.sort(); //��ü������ sort ����� ������ ����


	for (auto it = ilist.begin(); it != ilist.end(); ++it) //auto�� iterator�� �߷���
		cout << *it << endl;  // ����� �ڵ�


	//list<int>::iterator it;
	//for (it = ilist.begin(); it != ilist.end(); ++it)
	//	cout << *it << endl;
	return 0;

}