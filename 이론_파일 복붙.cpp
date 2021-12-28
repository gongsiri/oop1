#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;

int main() {

	//변수 선언 
	char ch;
	//ifstream 객체와 ofstream 객체 인스턴스화
	ifstream istr;
	ofstream ostr;
	//integerFile과 copy 열고 정상적으로 열렸는지 확인
	istr.open("integerFile.txt",ios::in);
	if (!istr.is_open()) {
		cout << "파일을 열 수 없습니다." << endl;
		assert(false);
	}
	ostr.open("copy", ios::out); // out을 하면 기존에 있던 거 다 지우고 씀 / app는 안 지우고 추가됨
	if (!ostr.is_open()) {
		cout << "파일을 열 수 없습니다." << endl;
		assert(false);
	}
	//integerFile의 내용을 읽어 copy에 쓰기
	while (istr.get(ch)) {
		ostr.put(ch);
	}
	istr.close();
	ostr.close();
	return 0;
}