#include<iostream>
using namespace std;

// �����ε� �ϴ� ���

//void swapVar(int& num1, int& num2) { // ���� ���� �ٲ�� �ϱ⿡ ���۷��� ����
//
//	int tmp = num1; // ��� ����
//	num1 = num2;
//	num2 = tmp; // tmp �Ű���
//}
//
//void swapVar(double& num1, double& num2) { // ���� ���� �ٲ�� �ϱ⿡ ���۷��� ����
//
//	double tmp = num1; // ��� ����
//	num1 = num2;
//	num2 = tmp; // tmp �Ű���
//}
//
//void swapVar(char& num1, char& num2) { // ���� ���� �ٲ�� �ϱ⿡ ���۷��� ����
//
//	char tmp = num1; // ��� ����
//	num1 = num2;
//	num2 = tmp; // tmp �Ű���
//}

template <typename T>
void swapVar(T& num1, T& num2) {

	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}
int main() {
	int first = 10;
	int second = 20;
	swapVar(first, second);

	cout << first << " " << second << endl;

	return 0;
}