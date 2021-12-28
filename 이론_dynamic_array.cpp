#include "이론_Dynamica_array.h"
#include "이론_my_execption.h"
#include<iostream>
using namespace std;

DynamicArray::DynamicArray(int arraySize) {
	try {
		arr = new int[arraySize]; // 동적할당
		size = arraySize;
		throw MemoryException(this, 0);
	}
	catch (...) {
		cout << "생성자 안쪽에서 예외처리" << endl;
		throw; // 에외를 던져줄 때 사용
	}
}

DynamicArray::~DynamicArray() {

	cout << "소멸자 동작" << endl;
	delete[]arr; // 객체가 사라지는 순간에 삭제 (힙 메모리 해제)
	arr = nullptr; // arr이 다른 용도로 못 쓰게 (포인터 변수 주소 해제)
}


void DynamicArray::setAt(int index, int value) {
	if (index < 0 || index >= getSize()) {
		//throw Myexception(this, "범위를 벗어났습니다.", index);
		throw OutOfRangeException(this, index);
	}
	arr[index] = value;
}

int DynamicArray::getAt(int index) const {
	if (index < 0 || index >= getSize()) {
		//throw Myexception(this, "범위를 벗어났습니다.", index);
		throw OutOfRangeException(this, index);
	}

	return arr[index];

}

int DynamicArray::getSize() const {
	return size;
}
//#include "이론_Dynamica_array.h"
//
//DynamicArray::DynamicArray(int arraySize) {
//	arr = new int[arraySize]; // 동적할당
//	size = arraySize;
//}
//
//DynamicArray::~DynamicArray() {
//	delete[]arr; // 객체가 사라지는 순간에 삭제 (힙 메모리 해제)
//	arr = nullptr; // arr이 다른 용도로 못 쓰게 (포인터 변수 주소 해제)
//}
//
//
//void DynamicArray::setAt(int index, int value) {
//	if (index < 0 || index >= getSize()) {
//		throw "범위를 벗어났습니다.";
//	}
//	arr[index] = value;
//}
//
//int DynamicArray::getAt(int index) const {
//	if (index < 0 || index >= getSize()) {
//		throw "범위를 벗어났습니다.";
//	}
//
//		return arr[index];
//	
//}
//
//	int DynamicArray::getSize() const {
//		return size;
//	}