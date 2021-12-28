#include<iostream>
using namespace std;

template <typename T, int N>
void printSum(T(&arr)[N]) { // 배열을 보내줄 거기 때문에 래퍼런스로 받음

	T total = 0;
	
	for (int index = 0; index < N; index++) {
		total += arr[index];
	}
	cout << total << endl;
}

int main() {

	int list[4] = { 10,20,30,40 };
	printSum(list);

	double list2[4] = { 1.1,2.2,3.3,4.4 };
	printSum(list2);

	double list3[3] = { 1.1,2.2,3.3 };
	printSum(list3);

	//배열의 길이를 따로 고려하지 않아도 되며, 배열의 자료형 또한 고려하지 않아도 되는 형태가 됨

	return 0;
}