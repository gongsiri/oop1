// #1 : ������ ���� �� Ư�� ���ǿ� �°� ����ϱ�

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {

	ifstream inFile("test.txt");
	
	if (!inFile.is_open()) {
		cout << "������ ���µ� �����߽��ϴ�." << endl;
		return 0; // ���α׷� �����
	}

	int select = -1;

	while (select != 0) {
		cout << "����� ����� �����ϼ���." << endl;
		cout << "1. �ܰ� 0�� ���� ���" << endl;
		cout << "2. �ܰ� ���̳ʽ��� ���� ���" << endl;
		cout << "3. ��ü ���� ���" << endl;
		cout << "0.���α׷� ����" << endl;
		cout << "?";
		cin >> select;

		int index;
		string name;
		int balance;

		//�ѱ��� ���� �� ���� �� �� ANSI�� ��������
		while (inFile >> index >> name >> balance) { // ������ ���� �� �ִ� ���� ���ư�
			if (select == 1) {
				if (balance == 0) {
					cout << index << " " << name << " " << balance << endl;
				}
			}
			else if (select == 2) {
				if (balance < 0) {
					cout << index << " " << name << " " << balance << endl;
				}
			}
			else if (select == 3) {
				cout << index << " " << name << " " << balance << endl;
			}
		}
		cout << endl;
		
		inFile.clear(); // eof�� �ʱ�ȭ ����� �� ( �� �� ���� eof�� ó���ؼ� ���̻� ���� �ʱ� ���� )
		inFile.seekg(0); // ������ �� �� �а� ����, Ŀ���� ������ ���� ���� ��ġ�ϰ� �Ǵµ� �̸� �ٽ� ó������ �Ű��ִ� �۾�
	}
	
	return 0;
}
