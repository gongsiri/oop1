#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;

int main() {

	//���� ���� 
	char ch;
	//ifstream ��ü�� ofstream ��ü �ν��Ͻ�ȭ
	ifstream istr;
	ofstream ostr;
	//integerFile�� copy ���� ���������� ���ȴ��� Ȯ��
	istr.open("integerFile.txt",ios::in);
	if (!istr.is_open()) {
		cout << "������ �� �� �����ϴ�." << endl;
		assert(false);
	}
	ostr.open("copy", ios::out); // out�� �ϸ� ������ �ִ� �� �� ����� �� / app�� �� ����� �߰���
	if (!ostr.is_open()) {
		cout << "������ �� �� �����ϴ�." << endl;
		assert(false);
	}
	//integerFile�� ������ �о� copy�� ����
	while (istr.get(ch)) {
		ostr.put(ch);
	}
	istr.close();
	ostr.close();
	return 0;
}