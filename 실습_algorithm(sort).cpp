#include<iostream>
#include<algorithm>
using namespace std;

bool condition(int num1, int num2) {
	return num1 > num2;
}

int main() {

	int arr[10] = { 5,3,4,9,8,7,6,2,1,10 };

	cout << "���� �� �迭 : ";
	for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	sort(arr, arr+ sizeof(arr) / sizeof(*arr)); // arr�� arr+ ����� ���� (arr, 11)
	
	cout << "���� �� �迭 : ";
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	sort(arr, arr + sizeof(arr) / sizeof(*arr),condition); //��������

	cout << "������ �� �迭 : ";
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}