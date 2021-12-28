#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<pair<int, string>> soldier;

	soldier.push_back(pair<int, string>(3, "±è»óÈÆ"));
	soldier.push_back(pair<int, string>(4, "½ÉÁø¿ì"));
	soldier.push_back(pair<int, string>(1, "¼ºÀ±¸ğ"));
	soldier.push_back(pair<int, string>(4, "ÃÖÀÏ±¸"));
	soldier.push_back(pair<int, string>(2, "¹Ú¹Î¼®"));
	soldier.push_back(pair<int, string>(1, "Â÷º´È£"));

	vector<pair<int, string>>::iterator it;
	for (auto it = soldier.begin(); it != soldier.end(); it++)
		cout << it->first << " : " << it->second << endl;

	sort(soldier.begin(), soldier.end(), [](pair<int, string> i, pair<int, string> j) {return i.first > j.first;});
	for (auto i = soldier.begin(); i != soldier.end(); i++)
		cout << i->first << " : " << i->second << endl;
	return 0;
}