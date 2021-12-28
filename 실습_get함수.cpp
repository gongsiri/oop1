#include<iostream>
#include<string>
using namespace std;

int main() {
	//#3

	//string tmp;
	//cin >> tmp;
	//cout << tmp;
	// cin이라는 명령어는, 입력 버퍼 안에 있는 값에서 \n 혹은 띄어쓰기를 만날 때까지의 값을 가져오는 명령어

	//1. 사용자가 입력을 함
	//2. 그 값이 입력 버퍼에 들어감
	//3. 출력 명령어가 입력 버퍼에서 값을 가져옴
	//4. 가져온 값을 출력함

	char c;
	//cin.get(c); // 단일 문자 즉, 한 글자를 입력받는 명령어
	//cout.put(c); // 문자열을 출력하는 명령어

	while (cin.get(c)) {
		cout.put(c);
	}
	return 0;
}