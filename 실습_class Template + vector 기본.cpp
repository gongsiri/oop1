#include<iostream>
#include<vector>
using namespace std;

//Class Template
//Template�� ���� -> Class�� �쿩���� ��

template <typename T>
class Data {
private:
	T num;
public:
	Data() { //������

	}
	void setData(T _num){ //set�Լ�
		num = _num;
	}
	T getData() { //get�Լ�
		return num;
	}
};

//Template�� ���� ������, �ڷ����� ���� �Լ� Ȥ�� class�� ���� �� ������ �Ѵٴ� �������� ���� ��
int main() {

	Data<char> myData; //class template�� ��ü�� ������ �� �ڷ����� ������� ��
	myData.setData('a');
	cout << myData.getData() << endl;

	Data<int> myData2; 
	myData2.setData(10);
	cout << myData2.getData() << endl;

	Data<double> myData3; //class template�� ��ü�� ������ �� �ڷ����� ������� ��
	myData3.setData(10.5);
	cout << myData3.getData() << endl;

	Data<string> myData4; //class template�� ��ü�� ������ �� �ڷ����� ������� ��
	myData4.setData("�ȳ�");
	cout << myData4.getData() << endl;

	//vector
	// ������ ����ϴ� �迭�� ������ ���� �ذ��ϰ�, ����� ���Ǽ��� �ִ� c++ �������
	// �迭�� ����� �̸� �������� �ʾƵ� ��, CRUD ���� ���� ���� �бⰡ ���ϴ�.
	vector<int> list; // �迭�� ������ / ���¸� �����ϴ� ���ο� template�� ����Ѵٰ� �����غ� �� ����
	list.push_back(1); // �迭�� 1�� ���� (�����Ҵ� �ʿ� ����)
	list.push_back(3);
	list.push_back(5);

	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
	cout<<endl;
	return 0;
}