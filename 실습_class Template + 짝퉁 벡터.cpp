#include<iostream>
#include<vector>
#include"list.h"
using namespace std;

int main() {

	cout << "���� vector ��������� ����� ���" << endl;
	vector<int> list; 
	list.push_back(1); 
	list.push_back(3);
	list.push_back(5);

	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
	cout << endl;

	cout << "�� ¦�� vector������� ���" << endl;
	List<int>myList(5);
	myList.push_back(1);
	myList.push_back(3);
	myList.push_back(5);

	for (int index = 0; index < myList.size(); index++) {
		cout << myList.at(index) << " ";
	}
	cout << endl;

	return 0;
}