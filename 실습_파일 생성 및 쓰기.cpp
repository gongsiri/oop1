//파일입출력
#include<iostream>
#include<fstream>
using namespace std;

// 간소한 소형 데이터 베이스
// 데이터를 저장할 수 있는 공간 ( 프로그램은 꺼졌을 때, 데이터가 소실되는데 이를 유지시키기 위해서 사용 )
int main() {

	//#1 : 파일 생성 및 쓰기
	ofstream outFile; //파일을 열어서 쓸 수 있는 상태로 만들어주는 클래스
	outFile.open("new_file.txt");//해당 파일이 있으면 그걸 열어주고 없으면 만들어 줌

	//파일입출력처럼, 프로그램 내에서만 돌아가는 게 아닌 프로그램 밖에 있는 파일과 소통을 해야 할 때 예외처리가 필수적
	//그렇지 않으면 파일이 열리지 않았을 때 아래쪽 코드를 실행하면서 에러가 날 것이기 때문
	if (!outFile.is_open()) { //파일이 제대로 열렸는지 예외처리
		cout << "파일을 여는 데 실패했습니다!" << endl;
		return 0;  //프로그램 종료
	}

	outFile << "hello world" << endl;
	outFile << "i love programming" << endl;
	outFile << "my best programming lang is C++" << endl;  //파일에 값을 쓰는 과정

	outFile.close(); //이걸 해야 파일에 업로드됨

	return 0;
}