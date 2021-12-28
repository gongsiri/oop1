#include<iostream>
#include<list> //STL sequence container, 삽입/삭제 강점
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

	//ilist.remove(5); // 5를 지움
	ilist.sort(); //자체적으로 sort 기능을 가지고 있음


	for (auto it = ilist.begin(); it != ilist.end(); ++it) //auto가 iterator를 추론함
		cout << *it << endl;  // 모던한 코드


	//list<int>::iterator it;
	//for (it = ilist.begin(); it != ilist.end(); ++it)
	//	cout << *it << endl;
	return 0;

}