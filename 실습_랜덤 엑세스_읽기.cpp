//#2 : 랜덤 엑세스 - 파일 읽기

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;


class Client {
private: 
	int index;
	string name;
	int balance;
public:  // 직접 값을 넣는 게 아니라 생성자 필요하진 않음
	int getIndex() { return index; }
	string getName() { return name; }
	int getBalance() { return balance; }

};
int main() {

	ifstream inFile("client.txt");
	if (!inFile.is_open()) {
		cout << "파일을 여는 데 실패했습니다." << endl;
		return 0;
	}

	cout << left << setw(10) << "번호" << setw(20) << "이름" << "잔액" << endl;

	Client myClinet;
	inFile.read(reinterpret_cast<char*>(&myClinet),sizeof(myClinet)); //특정 길이만큼 읽어와서 왼쪽에 넣어주는 명령어
	
	while (inFile) {  //읽어오는 동안
		if (myClinet.getName() != "") { //이름이 비어 있으면 출력 안 함
			cout << left << setw(10) << myClinet.getIndex() << setw(20) << myClinet.getName() << myClinet.getBalance() << endl;
		}
		inFile.read(reinterpret_cast<char*>(&myClinet), sizeof(myClinet)); //더 이상 읽을 게 없다면 while문 탈출
	}
	inFile.close();
}
