#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;

int main() {

//ofstream ��ü �ν��Ͻ�ȭ
	ofstream outStrm("integerFile.txt");

	if (!outStrm.is_open()) {
		cout << "integerFile�� �� �� �����ϴ�.";
		assert(false);
	}
	//���� ������ �����ε� �Լ��� Ȱ���� ���Ͽ� ����
	for (int i = 1; i <= 10; i++) {
		outStrm << i * 10 << endl;  // ��ü�� �Է���
	}
	//���� �ݱ�
	outStrm.close();
	//return ���Ŀ� ofstream ��ü�� �Ҹ�
	return 0;

}