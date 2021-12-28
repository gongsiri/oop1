#include<iostream>
#include<vector>
#include"list.h"
using namespace std;

int main() {

	cout << "기존 vector 헤더파일을 사용한 방법" << endl;
	vector<int> list; 
	list.push_back(1); 
	list.push_back(3);
	list.push_back(5);

	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
	cout << endl;

	cout << "내 짝퉁 vector를사용한 방법" << endl;
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