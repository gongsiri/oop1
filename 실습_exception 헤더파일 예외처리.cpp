//���� 3��
//c++ exception �������

#include<iostream>
#include<exception>
#include<vector>
using namespace std;

//���� �߻��� �� �ִ� ���ܸ� �˾Ƽ� �����
int main() {

	//�Ʒ� ������ ���������� ������ �߻���Ų ��Ȳ��
	//������ ������ ���� (���� 702 ������)
	try {

		// ERROR : length_error
		string tmp = "hello";
		cout << "tmp�� �� : " << tmp << endl;
		cout << "tmp�� ���� : " << tmp.size() << endl;

		tmp.resize(-1);
		cout << "tmp�� ���� : " << tmp.size() << endl;

		//ERROR : out_of_range
		vector<int> tmpVector(10); //int�� 10ĭ¥�� �迭�� ���� ��
		tmpVector.at(20) = 100; // �迭 20��°�� �����ؼ� ���� 100���� �ٲ��

		//ERROR : invalid_argument - ���������� ������ �߻���Ŵ
		int num1, num2;
		cout << "ù ��° ���� : ";
		cin >> num1;
		cout << "�� ��° ���� : ";
		cin >> num2;
		if (num2 == 0) {
			throw invalid_argument("0���δ� ���� �� �����ϴ�.");
		}
		else {
			cout << num1 / num2 << endl;
		}
	}
	catch (exception& e) {
		cout << "���� �߻�" << endl;
		cout << typeid(e).name() << endl;
		cout << e.what() << endl;
	}
	return 0;
}