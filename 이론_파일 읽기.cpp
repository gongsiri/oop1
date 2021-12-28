#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;

int main() {
	int data;
	//ifstream 객체 인스턴스화
	ifstream inStrm;
	//ifstream 객체와 파일 연결
	inStrm.open("integerFile.txt");
	if (!inStrm.is_open()) {
		cout << "파일을 열 수 없습니다.";
		assert(false);
	}
	//ifstream 객체로 파일 읽고 모니터에 출력
	for (int i = 1; i <= 10; i++) {
		inStrm >> data; // 파일에서 메모리로 로딩, >>을 이용해서 하나씩 꺼냄
		cout << data << " ";
	}
	//파일 닫기
	inStrm.close();
	return 0;
}