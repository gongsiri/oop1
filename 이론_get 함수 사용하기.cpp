///ascii ������ ������ �ִ� get �Լ�
//#include<iostream>
//using namespace std;
//
//int main() {
//	int x;
//	cout << "���� ���� ���� 5���� �Է��Ͻÿ� : "; 
//	for (int i = 0; i < 5; i++) {
//		x = cin.get();  //�ƽ�Ű�ڵ� ������ �������� , ���鵵 �ϳ��ϳ� �� ����
//		cout << x << " ";
//	}
//	return 0;
//}

//�� �ܾ��� ù���ڸ� �빮�ڷ� ����� get,put �Լ�
#include<iostream>
using namespace std;

int main() {
	char c;
	cout << "���� ���� ���ڸ� �Է��ϼ���(�����Ϸ��� eof �Է�) : " << endl;
	char pre = '\n';
	while (cin.get(c)) {
		if (pre == ' ' || pre == '\n') {
			cout.put(toupper(c));
		}
		else {
			cout.put(c);
		}
		pre = c;
	}
	return 0;
}
