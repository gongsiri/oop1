#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<pair<int, string>> soldier;

	soldier.push_back(pair<int, string>(3, "�����"));
	soldier.push_back(pair<int, string>(4, "������"));
	soldier.push_back(pair<int, string>(1, "������"));
	soldier.push_back(pair<int, string>(4, "���ϱ�"));
	soldier.push_back(pair<int, string>(2, "�ڹμ�"));
	soldier.push_back(pair<int, string>(1, "����ȣ"));

	vector<pair<int, string>>::iterator it;
	for (auto it = soldier.begin(); it != soldier.end(); it++)
		cout << it->first << " : " << it->second << endl;

	sort(soldier.begin(), soldier.end(), [](pair<int, string> i, pair<int, string> j) {return i.first > j.first;});
	for (auto i = soldier.begin(); i != soldier.end(); i++)
		cout << i->first << " : " << i->second << endl;
	return 0;
}