#include<iostream>
#include<fstream>
using namespace std;

int main() {

	//#2 ���� �б�
	ifstream inFile;
	inFile.open("new_file.txt");

	if (!inFile.is_open()) {
		cout << "������ ���� �� �����߽��ϴ�." << endl;
		return 0;
	}

	char c;
	while (inFile.get(c)) {  // cin -> inFile�� �ٲ�
		cout.put(c);
	}

	//string ���� �ٲٷ���
	string list[10];
	char tmp[100];
	int index = 0;
	while (inFile.getline(tmp, 100)) {
		list[index] = tmp; //string �迭�� ���� �ִ� �κ�
		index++;
	}
	for (int a = 0; a < 10; a++) { //���� ���� string �迭�� �� ����?? Ȯ���ϴ� �κ�
		cout << list[a] << endl;
	}

	inFile.close();
	return 0;
}