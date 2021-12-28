//#pragma once

#ifndef  MYEXCEPTION_H
#define MYEXCEPTION_H

class Myexception {
public:
	int info;
	const void* sender; // ���� ���´���
	const char* description; // ���� ����

	Myexception(const void* sender, const char* description, int info) {
		this->info = info;
		this->description = description;
		this->sender = sender;
	}
};
//�ε��� ���� ����
class OutOfRangeException : public Myexception {
public:
	OutOfRangeException(const void* sender, int index)
		:Myexception(sender, "�ε����� ������ ������ϴ�.", index) {

	}//�θ� ������ ȣ��

};
//�޸� ���� ����
class MemoryException : public Myexception {
public:
	MemoryException(const void* sender, int bytes)
		:Myexception(sender, "�޸� �뷮 �ʰ�.", bytes) {

	}

};

#endif