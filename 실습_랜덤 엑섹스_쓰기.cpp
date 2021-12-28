//#2 : ���� ������ - ���� ����

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//�ʿ��� �������� ����� �� ���ؼ�, �� �����ŭ �̵��ϴ� �� vs
//class�� ��� ������ �־�ΰ�, class�� �����ŭ �̵��ϴ� ��
//�翬�� ���ڰ� ���ϱ� ������ ���� ���������� class�� ����ϴ� ���� ������
class Client {
private:  // class�� �����͸� �����ְ� ó��
	int index;
	string name;
	int balance;
public:
	Client(int _index, string _name, int _balance) { //���� ���� ���� ���� ��ü�� ���Ͽ� ���� ������ ������ ����
		index = _index;
		name = _name;
		balance = _balance;
	}
};
int main() {
	ofstream outFile("client.txt");
	if (!outFile.is_open()) {
		cout << "������ ���� �� �����߽��ϴ�." << endl;
		return 0;
	}

	cout << "������ ����, �̸�, �ܾ��� �Է��ϼ���" << endl;
	cout << "?";

	int tmpIndex;  //�Է��� ������ �ӽ÷� ��Ƶ� ������
	string tmpName;
	int tmpBalance;

	while (cin >> tmpIndex >> tmpName >> tmpBalance) {
		
		//���� ���������ٸ� �̷��� ���� ��
		//outFile << tmpIndex << " " << tmpName << " " << tmpBalance << endll;

		Client myClient(tmpIndex, tmpName, tmpBalance);  //��ü ����

		outFile.seekp(tmpIndex*sizeof(myClient));  //seekg�� �Է��� ��, seekp�� ����� �� ���ϴ� ��ġ�� �̵��ϴ� ��ɾ� ( �������� �����ŭ �̵� )
		                                           //sizof(myClient) == ��ü�� ����
		outFile.write(reinterpret_cast<const char*>(&myClient),sizeof(myClient)); // ������ ���� (Ư�� ����� ��Ƶΰ� �� �ȿ� �����͸� ���� ��ɾ�)
		
		cout << "������ ����, �̸�, �ܾ��� �Է��ϼ���" << endl;
		cout << "?";
	}

	outFile.close();
}

//���������� : ������ ���� �κк��� �����͸� ���������� �б�/���� ( ��� ������ ó�� )
//
//���������� : ������ Ư�� ��ġ�� �̵��ؼ� �����͸� �б�/����
// Ư�� ��ġ ( �������� ����� �������� �̵�)