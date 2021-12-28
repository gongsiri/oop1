#include<iostream>
#include<algorithm>
using namespace std;

bool condition(int num1, int num2) {
	return num1 > num2;
}

int main() {

	int arr[10] = { 5,3,4,9,8,7,6,2,1,10 };

	cout << "정렬 전 배열 : ";
	for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	sort(arr, arr+ sizeof(arr) / sizeof(*arr)); // arr과 arr+ 사이즈를 넣음 (arr, 11)
	
	cout << "정렬 후 배열 : ";
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	sort(arr, arr + sizeof(arr) / sizeof(*arr),condition); //내림차순

	cout << "재정렬 후 배열 : ";
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}