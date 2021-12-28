//vector vs list

//���� ������ ����
//vector : �޸𸮻� ���� ����
//list : ����� ��ũ�� ����Ʈ ( ������ ���������� ���� )

//vector
//�ڷᱸ���� ���� ���Ҹ� ���� or ���� �ϴ� ���� ����
//�̿��� ��ġ������ list���� ����
//index�� ������ �� �ְ�, Ž�� �ӵ��� list���� ����

//list
//��� ��ġ�� ���Ҹ� ���� or ���� �� �� vector���� ����
//index�� ������ �� ����, Ž�� �ӵ��� vector���� ����



#include<iostream>
#include<list>
using namespace std;

int main() {
	// �迭�� ��ü�� �� �ִ� �ڷᱸ��
	// �迭�� ���� �� ����, ���ϰ� ����� �� �ְ� ����
	
	list<int>tmpList;
	list<int>::iterator beginIter; //iterator ����

	cout << "list�� �� ����" << endl;
	tmpList.push_back(10);
	tmpList.push_back(20);
	tmpList.push_back(30);
	tmpList.push_front(-1);  
	tmpList.push_front(-999); // -999 -1 10 20 30
	

	cout << "list ���" << endl;
	for (beginIter = tmpList.begin(); beginIter != tmpList.end(); beginIter++) {
		cout << *beginIter << " ";
	}
	cout << endl;

	cout << "�ι� °�� 500 ����" << endl;
	beginIter = tmpList.begin();
	beginIter++;
	tmpList.insert(beginIter, 500);

	cout << "list ���" << endl;
	for (beginIter = tmpList.begin(); beginIter != tmpList.end(); beginIter++) {
		cout << *beginIter << " ";
	}
	cout << endl;

	cout << "list �ʱ�ȭ" << endl;
	tmpList.clear();

	cout << "list�� ����°�?" << tmpList.empty() << endl;

	return 0;
}