//���� 2��
#include<iostream>
using namespace std;


class List {
private:
	
public:
	int* list;

	List() {
	
	}
	~List() {
		cout << "�Ҹ��� ���� (���� : ����Ʈ ����)" << endl;
		delete[] list;
	}
};

//���α׷��� �帧�� ����ϴ� class -> main�Լ��� ������ ������ ���� �Ϸ���
//����ó���� �ʿ��� �������� ������ �����ؼ� �Ű��� (�����ڷ�)
class Start {
private:
	List myList;
public:
	Start() try : myList() {
		cout << "Start ��ü�� ������" << endl;

		// ===== List class�� ������ ����
		cout << "������ ���� (���� : ����Ʈ ����)" << endl;

		int dataSize = 2;
		myList.list = new int[dataSize];
		for (int a = 0; a < dataSize; a++) {
			myList.list[a] = a;
		}

		for (int a = 0; a < 5; a++) {
			if (a >= dataSize) {
				throw string("�����Ͱ� 5������ ����"); //���� �޽���
			}
			cout << myList.list[a] << endl;
		}
		// ===== List class�� ������ ����

		// ===== Start class�� ������ ����
		// ~~~
		// ===== Start class�� ������ ���� 
	}
	catch (...) { //...�� �ǹ̴� �� ��� ����ó���� �� �ްڴ�
		throw; // ���� throw�� �Ʒ��� �ִ� catch�� ��������
	}
};

int main() {

	try {
		Start start;
	}
	catch (string message) {
		cout << message << endl;
	}


	return 0;
}