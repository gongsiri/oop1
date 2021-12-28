//#pragma once

#ifndef  DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray {
protected:
	int* arr; // �Ҵ�� �޸� ����
	int size; // �迭 ũ��

public:
	DynamicArray(int arraySize);
	~DynamicArray();

	void setAt(int index, int value);
	int getAt(int index) const; // �� �ٲ� �� ���⿡ const
	int getSize() const;
};

#endif
