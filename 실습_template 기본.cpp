#include <iostream>
using namespace std;

// Template
// 자료형에 따라서 함수를 여러 개 작성할 필요 없이, 하나의 함수로 동작하게 해주는 기능
// 함수 오버로딩 필요 없게 해줌

// 함수 오버로딩 (함수 이름은 같은데 조건에 따라 선택)

//void checkType(int var) {
//	cout << "매개변수 : " << var << endl;
//	cout << "자료형 : " << typeid(var).name() << endl;
//}
//
//void checkType(double var) {
//	cout << "매개변수 : " << var << endl;
//	cout << "자료형 : " << typeid(var).name() << endl;
//}
//
//void checkType(char var) {
//	cout << "매개변수 : " << var << endl;
//	cout << "자료형 : " << typeid(var).name() << endl;
//}

template <typename T>
void checkType(T var) {
	cout << "매개변수 : " << var << endl;
	cout << "자료형 : " << typeid(var).name() << endl;
}

int main() {
	
	checkType(10);
	checkType(8.5);
	checkType('a');

	return 0;
}