#include<iostream>
#include<list>
#include<vector> //STL sequence container, 검색 강점
#include<algorithm> //벡터에는 sort 기능이 자체로 없어서 algorithm 필요

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
	for (auto v : vec) //vector 컨테이너에서 하나하나씩 꺼내서 찍음
		cout << v;

	cout << endl;

	char arr[5] = { 'e','b','a','d','c' };
	sort(arr, arr + 5); // 0번과 보이지 않는 5번을 가리킴 오름차순으로 정렬해줌

	for (auto p = arr; p != arr + 5; ++p)  //iterator랑 비슷
		cout << *p;

	//for (char* p = &arr[0]; p != arr + 5; ++p)  //iterator랑 비슷
	//	cout << *p;
	
	return 0;
}
		