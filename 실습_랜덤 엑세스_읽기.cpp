//#2 : ���� ������ - ���� �б�

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;


class Client {
private: 
	int index;
	string name;
	int balance;
public:  // ���� ���� �ִ� �� �ƴ϶� ������ �ʿ����� ����
	int getIndex() { return index; }
	string getName() { return name; }
	int getBalance() { return balance; }

};
int main() {

	ifstream inFile("client.txt");
	if (!inFile.is_open()) {
		cout << "������ ���� �� �����߽��ϴ�." << endl;
		return 0;
	}

	cout << left << setw(10) << "��ȣ" << setw(20) << "�̸�" << "�ܾ�" << endl;

	Client myClinet;
	inFile.read(reinterpret_cast<char*>(&myClinet),sizeof(myClinet)); //Ư�� ���̸�ŭ �о�ͼ� ���ʿ� �־��ִ� ��ɾ�
	
	while (inFile) {  //�о���� ����
		if (myClinet.getName() != "") { //�̸��� ��� ������ ��� �� ��
			cout << left << setw(10) << myClinet.getIndex() << setw(20) << myClinet.getName() << myClinet.getBalance() << endl;
		}
		inFile.read(reinterpret_cast<char*>(&myClinet), sizeof(myClinet)); //�� �̻� ���� �� ���ٸ� while�� Ż��
	}
	inFile.close();
}
