#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;

int main() {
	int data;
	//ifstream ��ü �ν��Ͻ�ȭ
	ifstream inStrm;
	//ifstream ��ü�� ���� ����
	inStrm.open("integerFile.txt");
	if (!inStrm.is_open()) {
		cout << "������ �� �� �����ϴ�.";
		assert(false);
	}
	//ifstream ��ü�� ���� �а� ����Ϳ� ���
	for (int i = 1; i <= 10; i++) {
		inStrm >> data; // ���Ͽ��� �޸𸮷� �ε�, >>�� �̿��ؼ� �ϳ��� ����
		cout << data << " ";
	}
	//���� �ݱ�
	inStrm.close();
	return 0;
}