#include "�̷�_Dynamica_array.h"
#include "�̷�_my_execption.h"

#include<iostream>
using namespace std;

void UseArray(DynamicArray& arr) {
	try {
		arr.setAt(5, 77); // 5�� �濡 77 ����
		//arr.setAt(10,2); // ���ܹ߻�
		cout << arr.getSize() << endl;
		//cout << arr.getAt(0) << endl; // ������ ���� ����
		//cout << arr.getAt(-5); // ���ܹ߻�
	}
	catch (Myexception& e) { // �б� ���� ���ڿ�
		cout <<"�޸� ���� �ּ� : "  <<e.sender << endl;
		cout <<"���� ���� : " <<e.description << endl;
		cout <<"index ��ȣ: "<<e.info << endl;

	}
}
int main() {
	try {
		DynamicArray arr(10); // arraysize = 10
		UseArray(arr);
	}
	catch (Myexception& e) { // �б� ���� ���ڿ�
		cout << "���� ���� : " << e.description << endl;
	}

	return 0;
}
//#include "�̷�_Dynamica_array.h"
//#include<iostream>
//using namespace std;
//
//void UseArray(DynamicArray& arr) {
//	try {
//		arr.setAt(5, 77); // 5�� �濡 77 ����
//		//arr.setAt(10,2); // ���ܹ߻�
//		cout << arr.getSize() << endl;
//		cout << arr.getAt(0) << endl; // ������ ���� ����
//		cout << arr.getAt(-5); // ���ܹ߻�
//	}
//	catch (const char* e) { // �б� ���� ���ڿ�
//		cout << e << endl;
//	}
//}
//int main() {
//	DynamicArray arr(10); // arraysize = 10
//	UseArray(arr);
//
//	return 0;
//}