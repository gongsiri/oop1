#include<iostream>
using namespace std;

int main() {


	//#4

	char c[20];

	//모든 입력 명령어는 입력 버퍼에서 값이 있는지 판단하고 그 값을 입력값으로 처리함
	//버퍼에 가져올 수 있는 값이 없을 때, 사용자로부터 입력을 받게 됨 

	cin >> c;
	cout << "그냥 cin으로 받은 결과 : " << c << endl; //입력 버퍼에서 띄어쓰기 or \n 전까지만 입력으로 인지

	cin.get(c,20); //사이즈가 정해져 있을 떈 사이즈도 같이 써줌
	cout << "cin.get으로 받은 결과 : " << c << endl;  //입력 버퍼에서 \n 전까지만 입력으로 인지

	cin.getline(c, 20);
	cout << "cin.getline으로 받은 결과 : " << c << endl; //입력 버퍼ㅔ서 \n까지 입력으로 인지 getline은 띄어쓰기 있어도 하나로 인지
	 


	return 0;
}

//hello world 입력
//
//입력버퍼 : hello world\n
//
//cin이 나타나서 hello 가져감
//남은 버퍼 :  world\n
//
//cin.get이 나타나서 가져가려고 함 ( 남아있는 값이 있네? 입력 안 받음 )
//cin.get이 나타나서  world 가져감
//남은 버퍼 : \n
//
//cin.getline이 나타나서 \n 가져감
//남은 버퍼 : empty 