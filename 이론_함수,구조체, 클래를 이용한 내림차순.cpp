#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
//1)함수
//bool myFunction(int i, int j) { return (i > j); } //앞에 값이 뒤에 값보다 작으면 true 리턴 -> 안 바뀜 / 앞에 값이 뒤에 값보다 크면 false -> 내림차순

//2)구조체
//struct mystruct {
//	bool operator()(int i, int j) { return (i > j); }
//}mystt;

//3)클래스
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

	//sort(v.begin(), v.end(),myFunction); //false가 오면 swap하는 연산이 sort 함수 내부에 있다 / 함수이용
	//sort(v.begin(), v.end(), mystt); // 구조체 이용
	//sort(v.begin(), v.end(), myobject); // 클래스 이용
	
	sort(v.begin(), v.end(), [](int i, int j) {return i > j; }); // 4)람다함수 이용
	
	for (auto i : v)
		cout << i << endl;

	//for (auto it = v.begin(); it != v.end(); ++it)
	//	cout << *it;

	return 0;
}