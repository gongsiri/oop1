#include<iostream>
#include<list>
#include<vector> //STL sequence container, 검색 강점
using namespace std;
int main() {
	vector<int> iVec;
	for (auto i = 0; i < 10; i++)
		iVec.push_back(i); //값을 넣음

	cout << iVec.size() << endl;
	cout << iVec.back() << endl;
	cout << iVec[7] << endl;
	for (auto it = iVec.begin(); it != iVec.end(); ++it)
		cout << *it << endl;

	//vector<int>::iterator it;
	//for (it = iVec.begin(); it != iVec.end(); ++it)
	//	cout << *it << endl;
	
	return 0;
}