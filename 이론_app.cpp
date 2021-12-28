#include "이론_Dynamica_array.h"
#include "이론_my_execption.h"

#include<iostream>
using namespace std;

void UseArray(DynamicArray& arr) {
	try {
		arr.setAt(5, 77); // 5번 방에 77 대입
		//arr.setAt(10,2); // 예외발생
		cout << arr.getSize() << endl;
		//cout << arr.getAt(0) << endl; // 쓰레기 값이 나옴
		//cout << arr.getAt(-5); // 예외발생
	}
	catch (Myexception& e) { // 읽기 전용 문자열
		cout <<"메모리 번지 주소 : "  <<e.sender << endl;
		cout <<"예외 종류 : " <<e.description << endl;
		cout <<"index 번호: "<<e.info << endl;

	}
}
int main() {
	try {
		DynamicArray arr(10); // arraysize = 10
		UseArray(arr);
	}
	catch (Myexception& e) { // 읽기 전용 문자열
		cout << "예외 종류 : " << e.description << endl;
	}

	return 0;
}
//#include "이론_Dynamica_array.h"
//#include<iostream>
//using namespace std;
//
//void UseArray(DynamicArray& arr) {
//	try {
//		arr.setAt(5, 77); // 5번 방에 77 대입
//		//arr.setAt(10,2); // 예외발생
//		cout << arr.getSize() << endl;
//		cout << arr.getAt(0) << endl; // 쓰레기 값이 나옴
//		cout << arr.getAt(-5); // 예외발생
//	}
//	catch (const char* e) { // 읽기 전용 문자열
//		cout << e << endl;
//	}
//}
//int main() {
//	DynamicArray arr(10); // arraysize = 10
//	UseArray(arr);
//
//	return 0;
//}