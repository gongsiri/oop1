#include<iostream>
using namespace std;

//SP 클래스의 정의
class SP {
private:
	int* ptr;
public:
	SP(int* ptr);
	~SP();
	int& operator*() const;
	int* operator->() const;
};
//생성자
SP::SP(int* p)
	: ptr(p)
{
}
//소멸자
SP::~SP() {
	delete ptr;
}
//* 연산자 오버로드
int& SP::operator*() const {
	return *ptr;
}
//-> 연산자 오버로드
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
//function-try 블록을 사용한 생성자
Integer::Integer(int v)
try :sp(new int) {
	*sp = v;
}
catch (...) {
	throw;
}
//소멸자
Integer::~Integer()
{
}
//접근자 함수
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
			cout << "예외 발생" << endl;
		}
	}
	return 0;
}