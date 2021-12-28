//#2 : 랜덤 엑세스 - 파일 쓰기

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//필요한 변수들의 사이즈를 다 더해서, 그 사이즈만큼 이동하는 것 vs
//class에 모든 변수를 넣어두고, class의 사이즈만큼 이동하는 것
//당연히 후자가 편하기 때문에 랜덤 엑세스에선 class를 사용하는 것이 보편적
class Client {
private:  // class로 데이터를 묶어주고 처리
	int index;
	string name;
	int balance;
public:
	Client(int _index, string _name, int _balance) { //내가 값을 직접 넣은 객체를 파일에 쓰기 때문에 생성자 존재
		index = _index;
		name = _name;
		balance = _balance;
	}
};
int main() {
	ofstream outFile("client.txt");
	if (!outFile.is_open()) {
		cout << "파일을 여는 데 실패했습니다." << endl;
		return 0;
	}

	cout << "계좌의 순번, 이름, 잔액을 입력하세요" << endl;
	cout << "?";

	int tmpIndex;  //입력한 값들을 임시로 담아둘 변수들
	string tmpName;
	int tmpBalance;

	while (cin >> tmpIndex >> tmpName >> tmpBalance) {
		
		//순차 엑세스였다면 이렇게 됐을 것
		//outFile << tmpIndex << " " << tmpName << " " << tmpBalance << endll;

		Client myClient(tmpIndex, tmpName, tmpBalance);  //객체 생성

		outFile.seekp(tmpIndex*sizeof(myClient));  //seekg는 입력할 때, seekp는 출력할 때 원하는 위치로 이동하는 명령어 ( 데이터의 사이즈만큼 이동 )
		                                           //sizof(myClient) == 객체의 길이
		outFile.write(reinterpret_cast<const char*>(&myClient),sizeof(myClient)); // 데이터 쓰기 (특정 사이즈를 잡아두고 그 안에 데이터를 쓰는 명령어)
		
		cout << "계좌의 순번, 이름, 잔액을 입력하세요" << endl;
		cout << "?";
	}

	outFile.close();
}

//순차엑세스 : 파일의 시작 부분부터 데이터를 순차적으로 읽기/쓰기 ( 모든 데이터 처리 )
//
//랜덤엑세스 : 파일의 특정 위치로 이동해서 데이터를 읽기/쓰기
// 특정 위치 ( 데이터의 사이즈를 기준으로 이동)