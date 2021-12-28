#include "�̷�_Dynamica_array.h"
#include "�̷�_my_execption.h"
#include<iostream>
using namespace std;

DynamicArray::DynamicArray(int arraySize) {
	try {
		arr = new int[arraySize]; // �����Ҵ�
		size = arraySize;
		throw MemoryException(this, 0);
	}
	catch (...) {
		cout << "������ ���ʿ��� ����ó��" << endl;
		throw; // ���ܸ� ������ �� ���
	}
}

DynamicArray::~DynamicArray() {

	cout << "�Ҹ��� ����" << endl;
	delete[]arr; // ��ü�� ������� ������ ���� (�� �޸� ����)
	arr = nullptr; // arr�� �ٸ� �뵵�� �� ���� (������ ���� �ּ� ����)
}


void DynamicArray::setAt(int index, int value) {
	if (index < 0 || index >= getSize()) {
		//throw Myexception(this, "������ ������ϴ�.", index);
		throw OutOfRangeException(this, index);
	}
	arr[index] = value;
}

int DynamicArray::getAt(int index) const {
	if (index < 0 || index >= getSize()) {
		//throw Myexception(this, "������ ������ϴ�.", index);
		throw OutOfRangeException(this, index);
	}

	return arr[index];

}

int DynamicArray::getSize() const {
	return size;
}
//#include "�̷�_Dynamica_array.h"
//
//DynamicArray::DynamicArray(int arraySize) {
//	arr = new int[arraySize]; // �����Ҵ�
//	size = arraySize;
//}
//
//DynamicArray::~DynamicArray() {
//	delete[]arr; // ��ü�� ������� ������ ���� (�� �޸� ����)
//	arr = nullptr; // arr�� �ٸ� �뵵�� �� ���� (������ ���� �ּ� ����)
//}
//
//
//void DynamicArray::setAt(int index, int value) {
//	if (index < 0 || index >= getSize()) {
//		throw "������ ������ϴ�.";
//	}
//	arr[index] = value;
//}
//
//int DynamicArray::getAt(int index) const {
//	if (index < 0 || index >= getSize()) {
//		throw "������ ������ϴ�.";
//	}
//
//		return arr[index];
//	
//}
//
//	int DynamicArray::getSize() const {
//		return size;
//	}