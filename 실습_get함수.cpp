#include<iostream>
#include<string>
using namespace std;

int main() {
	//#3

	//string tmp;
	//cin >> tmp;
	//cout << tmp;
	// cin�̶�� ��ɾ��, �Է� ���� �ȿ� �ִ� ������ \n Ȥ�� ���⸦ ���� �������� ���� �������� ��ɾ�

	//1. ����ڰ� �Է��� ��
	//2. �� ���� �Է� ���ۿ� ��
	//3. ��� ��ɾ �Է� ���ۿ��� ���� ������
	//4. ������ ���� �����

	char c;
	//cin.get(c); // ���� ���� ��, �� ���ڸ� �Է¹޴� ��ɾ�
	//cout.put(c); // ���ڿ��� ����ϴ� ��ɾ�

	while (cin.get(c)) {
		cout.put(c);
	}
	return 0;
}