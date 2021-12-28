//#pragma once

#ifndef  DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray {
protected:
	int* arr; // 할당된 메모리 보관
	int size; // 배열 크기

public:
	DynamicArray(int arraySize);
	~DynamicArray();

	void setAt(int index, int value);
	int getAt(int index) const; // 값 바뀔 일 없기에 const
	int getSize() const;
};

#endif
