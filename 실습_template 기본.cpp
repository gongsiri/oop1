#include <iostream>
using namespace std;

// Template
// �ڷ����� ���� �Լ��� ���� �� �ۼ��� �ʿ� ����, �ϳ��� �Լ��� �����ϰ� ���ִ� ���
// �Լ� �����ε� �ʿ� ���� ����

// �Լ� �����ε� (�Լ� �̸��� ������ ���ǿ� ���� ����)

//void checkType(int var) {
//	cout << "�Ű����� : " << var << endl;
//	cout << "�ڷ��� : " << typeid(var).name() << endl;
//}
//
//void checkType(double var) {
//	cout << "�Ű����� : " << var << endl;
//	cout << "�ڷ��� : " << typeid(var).name() << endl;
//}
//
//void checkType(char var) {
//	cout << "�Ű����� : " << var << endl;
//	cout << "�ڷ��� : " << typeid(var).name() << endl;
//}

template <typename T>
void checkType(T var) {
	cout << "�Ű����� : " << var << endl;
	cout << "�ڷ��� : " << typeid(var).name() << endl;
}

int main() {
	
	checkType(10);
	checkType(8.5);
	checkType('a');

	return 0;
}