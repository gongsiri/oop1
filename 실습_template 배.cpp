#include<iostream>
using namespace std;

template <typename T, int N>
void printSum(T(&arr)[N]) { // �迭�� ������ �ű� ������ ���۷����� ����

	T total = 0;
	
	for (int index = 0; index < N; index++) {
		total += arr[index];
	}
	cout << total << endl;
}

int main() {

	int list[4] = { 10,20,30,40 };
	printSum(list);

	double list2[4] = { 1.1,2.2,3.3,4.4 };
	printSum(list2);

	double list3[3] = { 1.1,2.2,3.3 };
	printSum(list3);

	//�迭�� ���̸� ���� ������� �ʾƵ� �Ǹ�, �迭�� �ڷ��� ���� ������� �ʾƵ� �Ǵ� ���°� ��

	return 0;
}