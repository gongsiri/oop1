#include<iostream>
#include<map>
using namespace std;

int main() {
	
	//Ű �� �������� ���¸� ������ ����
	//JSON�� �����̶� �����
	//�������� ������ �迭�� ������� ��, ���ϴ� �����͸� ���������� index�� �׻� ����ϰ� �־�� ��
	

	map<string, int> tmpMap;
	
	tmpMap.insert(pair<string, int>("level", 1));  //insert�� �� ���� �Ű������� ���� �� ����
	tmpMap.insert(pair<string, int>("hp", 100));
	tmpMap.insert(pair<string, int>("mp", 100));
	tmpMap.insert(pair<string, int>("attak", 567));
	tmpMap.insert(pair<string, int>("defense", 200));

	cout << "���ݷ� : " << tmpMap.find("attack")->second << endl; // �ι�° ���� ����
	cout << "���� : " << tmpMap.find("defense")->second << endl;
	
	cout << "map�� ũ�� : " << tmpMap.size() << endl;
	tmpMap.clear();

	cout<<"map�� ����°�?"<<tmpMap.empty();
	
	return 0;
}