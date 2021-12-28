// ���� 1��
// class�� �����ڿ��� ����ó��

#include<iostream>
using namespace std;

// �����Ҵ� �迭�� �����, �ű⿡ ���� �����ϴ� class 
// (���� ���� class�� �ƴ϶� �ٸ� ����� ����� ���� class)
// List class ������ ������ ���� ������ ���� �����
class List {
private:
	int* list;
public:
	List() {
		cout << "������ ���� (���� : ����Ʈ ����)" << endl;
		
		//[�����ϰ� �ִ� ��Ȳ]
		//�����ͺ��̽� (������ �����)���� �����͸� ��� �о� ����
		//������, �� ���� �ֽ��� 5���� �����͸� ����ϰ� ����
		//��Ȳ 1. ����Ϸ��� �������� �����Ͱ� ���� (�ƹ� ��� x)
		//��Ȳ 2. ����Ϸ��� �������� �����Ͱ� ���� (���� �߻�)
		int dataSize = 2;
		list = new int[dataSize];
		for (int a = 0; a < dataSize; a++) {
			list[a] = a;
		}

		for (int a = 0; a < 5; a++) {
			if (a >= dataSize) {
				throw string("�����Ͱ� 5������ ����"); //���� �޽���
			}
			cout << list[a] << endl;
		}
	}
	~List() { // ���ʿ��� throw�� �߻��ϸ� �帧�� ����Ǳ� ������ �Ҹ��� ���� x
		cout << "�Ҹ��� ���� (���� : ����Ʈ ����)" << endl;
		delete[] list;
	}
};
//���α׷��� �帧�� ����ϴ� class -> main�Լ��� ������ ������ ���� �Ϸ���
class Start {
private:
	List myList;
public:
	Start() {

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