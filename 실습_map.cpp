#include<iostream>
#include<map>
using namespace std;

int main() {
	
	//키 및 데이터의 형태를 가지고 있음
	//JSON의 장점이랑 비슷함
	//데이터의 묶음을 배열로 만들었을 때, 원하는 데이터를 가져오려면 index를 항상 기억하고 있어야 함
	

	map<string, int> tmpMap;
	
	tmpMap.insert(pair<string, int>("level", 1));  //insert는 한 개의 매개변수만 받을 수 있음
	tmpMap.insert(pair<string, int>("hp", 100));
	tmpMap.insert(pair<string, int>("mp", 100));
	tmpMap.insert(pair<string, int>("attak", 567));
	tmpMap.insert(pair<string, int>("defense", 200));

	cout << "공격력 : " << tmpMap.find("attack")->second << endl; // 두번째 원소 접근
	cout << "방어력 : " << tmpMap.find("defense")->second << endl;
	
	cout << "map의 크기 : " << tmpMap.size() << endl;
	tmpMap.clear();

	cout<<"map이 비었는가?"<<tmpMap.empty();
	
	return 0;
}