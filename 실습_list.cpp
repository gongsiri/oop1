//vector vs list

//내부 구조의 차이
//vector : 메모리상 연속 공간
//list : 양방향 링크드 리스트 ( 공간이 연속적이지 않음 )

//vector
//자료구조의 끝에 원소를 삽입 or 삭제 하는 것은 빠름
//이외의 위치에서는 list보다 느림
//index로 접근할 수 있고, 탐색 속도가 list보다 빠름

//list
//어느 위치던 원소를 삽입 or 삭제 할 때 vector보다 빠름
//index로 접근할 수 없고, 탐색 속도가 vector보다 느림



#include<iostream>
#include<list>
using namespace std;

int main() {
	// 배열을 대체할 수 있는 자료구조
	// 배열을 조금 더 쉽고, 편리하게 사용할 수 있게 해줌
	
	list<int>tmpList;
	list<int>::iterator beginIter; //iterator 선언

	cout << "list에 값 삽입" << endl;
	tmpList.push_back(10);
	tmpList.push_back(20);
	tmpList.push_back(30);
	tmpList.push_front(-1);  
	tmpList.push_front(-999); // -999 -1 10 20 30
	

	cout << "list 출력" << endl;
	for (beginIter = tmpList.begin(); beginIter != tmpList.end(); beginIter++) {
		cout << *beginIter << " ";
	}
	cout << endl;

	cout << "두번 째에 500 삽입" << endl;
	beginIter = tmpList.begin();
	beginIter++;
	tmpList.insert(beginIter, 500);

	cout << "list 출력" << endl;
	for (beginIter = tmpList.begin(); beginIter != tmpList.end(); beginIter++) {
		cout << *beginIter << " ";
	}
	cout << endl;

	cout << "list 초기화" << endl;
	tmpList.clear();

	cout << "list가 비었는가?" << tmpList.empty() << endl;

	return 0;
}