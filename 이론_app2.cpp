#include<iostream>
using namespace std;

//SP Ŭ������ ����
class SP {
private:
	int* ptr;
public:
	SP(int* ptr);
	~SP();
	int& operator*() const;
	int* operator->() const;
};
//������
SP::SP(int* p)
	: ptr(p)
{
}
//�Ҹ���
SP::~SP() {
	delete ptr;
}
//* ������ �����ε�
int& SP::operator*() const {
	return *ptr;
}
//-> ������ �����ε�
int* SP::operator->() const {
	return ptr;
}

class Integer {
private:
	SP sp;
public:
	Integer(int value);
	~Integer();
	int getValue();
};
//function-try ����� ����� ������
Integer::Integer(int v)
try :sp(new int) {
	*sp = v;
}
catch (...) {
	throw;
}
//�Ҹ���
Integer::~Integer()
{
}
//������ �Լ�
int Integer::getValue() {
	return *sp;
}

int main() {
	for (int i = 0; i < 1000000; i++) {
		try {
			Integer integer(i);
			cout << integer.getValue() << endl;
		}
		catch (...) {
			cout << "���� �߻�" << endl;
		}
	}
	return 0;
}