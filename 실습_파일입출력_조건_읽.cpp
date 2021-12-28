// #1 : 파일을 읽은 후 특정 조건에 맞게 출력하기

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {

	ifstream inFile("test.txt");
	
	if (!inFile.is_open()) {
		cout << "파일을 여는데 실패했습니다." << endl;
		return 0; // 프로그램 종료됨
	}

	int select = -1;

	while (select != 0) {
		cout << "사용할 기능을 선택하세요." << endl;
		cout << "1. 잔고가 0인 계좌 목록" << endl;
		cout << "2. 잔고가 마이너스인 계좌 목록" << endl;
		cout << "3. 전체 계좌 목록" << endl;
		cout << "0.프로그램 종료" << endl;
		cout << "?";
		cin >> select;

		int index;
		string name;
		int balance;

		//한글이 깨질 땐 저장 할 때 ANSI로 저장하자
		while (inFile >> index >> name >> balance) { // 파일을 읽을 수 있는 동안 돌아감
			if (select == 1) {
				if (balance == 0) {
					cout << index << " " << name << " " << balance << endl;
				}
			}
			else if (select == 2) {
				if (balance < 0) {
					cout << index << " " << name << " " << balance << endl;
				}
			}
			else if (select == 3) {
				cout << index << " " << name << " " << balance << endl;
			}
		}
		cout << endl;
		
		inFile.clear(); // eof를 초기화 해줘야 함 ( 한 번 돌면 eof로 처리해서 더이상 읽지 않기 때문 )
		inFile.seekg(0); // 파일을 한 번 읽고 나면, 커서가 파일의 가장 끝에 위치하게 되는데 이를 다시 처음으로 옮겨주는 작업
	}
	
	return 0;
}
