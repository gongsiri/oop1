//STL
//Standard Template Library
//ǥ�� C++���̺귯��

//���߿� ������ �ڷᱸ���� �˰��� ���� �����س��� ���̺귯��

//�ٸ� �����ڰ� ¥���� �ڵ� �ٹ�(�� �ٸ� �����ڸ� ���� ����� �� ��)

//vector, list, map, algorithm(sort) - ��ǥ���� ���

#include<iostream>
#include<vector>
using namespace std;

int main() {

	// �迭�� ��ü�� �� �ִ� �ڷᱸ��
	// �迭�� ���� �� ����, ���ϰ� ����� �� �ְ� ����
	
	vector<int> tmpVector1; // �� ���� ����
	//vector<int> tmpVector2(5); // 5ĭ�� ���� ����
	//vector<int> tmpVector3 = { 1,2,3,4,5 }; // 5ĭ�� 1,2,3,4�� �ʱ�ȭ�� ���� ����
	//vector<int> tmpVecto4(6,0); // 6ĭ�� 0���� �ʱ�ȭ�� ���� ����

	// ũ�Ⱑ ������ - �迭���� �����Ҵ��� �ʿ�����

	cout << "���Ϳ� �� ����" << endl;
	tmpVector1.push_back(10);
	tmpVector1.push_back(20);
	tmpVector1.push_back(-100);
	tmpVector1.push_back(999);

	cout << "������ �� ���" << endl;
	for (int index = 0; index < tmpVector1.size(); index++) {
		cout << tmpVector1[index] << " ";
	}
	cout << endl;

	cout << "2�� ° ��ġ�� -1 ����" << endl;
	tmpVector1.insert(tmpVector1.begin() + 1, -1); // 2��° �ڸ��� -1�� �ִ´�

	cout << "������ �� ���" << endl;
	for (int index = 0; index < tmpVector1.size(); index++) {
		cout << tmpVector1[index] << " ";
	}
	cout << endl;

	cout << "���� �ʱ�ȭ" << endl;
	tmpVector1.clear();
	
	cout << "���Ͱ� ����ִ°�? : " << tmpVector1.empty() << endl;

	return 0;
}

