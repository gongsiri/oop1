#include<iostream>
using namespace std;

// 오버로딩 하는 경우

//void swapVar(int& num1, int& num2) { // 원본 값을 바꿔야 하기에 래퍼런스 붙임
//
//	int tmp = num1; // 잠깐 저장
//	num1 = num2;
//	num2 = tmp; // tmp 옮겨줌
//}
//
//void swapVar(double& num1, double& num2) { // 원본 값을 바꿔야 하기에 래퍼런스 붙임
//
//	double tmp = num1; // 잠깐 저장
//	num1 = num2;
//	num2 = tmp; // tmp 옮겨줌
//}
//
//void swapVar(char& num1, char& num2) { // 원본 값을 바꿔야 하기에 래퍼런스 붙임
//
//	char tmp = num1; // 잠깐 저장
//	num1 = num2;
//	num2 = tmp; // tmp 옮겨줌
//}

template <typename T>
void swapVar(T& num1, T& num2) {

	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}
int main() {
	int first = 10;
	int second = 20;
	swapVar(first, second);

	cout << first << " " << second << endl;

	return 0;
}