//inputstream 상세하게

#include<iostream>
#include<string>
using namespace std;

int main() {
	
	//#1
	//string n = " ";

	//while (true) { // 무한으로 입력 받지만 원하는 시점에 종료를 하고 싶을 때 이 방법은 좋지 않다.

	//	cout << "뭔가를 입력하시오 (-1 입력시 종료) : ";
	//	cin >> n;
	//	
	//	if (n == "-1") {
	//		break;
	//	}

	//	cout << "입력한 뭔가는 : " << n << endl;
	//}

	//#2 (eof 실습)
	string n = "";
	cout << "뭔가를 입력하시오 ";
	while (cin >> n) { //입력을 받을 수 있는 상태라면~~ true / 받을 수 없다면~~ false
		cout << "입력한 뭔가는 : " << n << endl;
	}
	
	cin.clear(); // 이 부분을 해주지 않으면 cin에 EOF 상태가 계속 남아 있음
	cin >> n; // 이 부분은 해결되지 않음 ( 아직 cin이 EOF 상태이기 때문) - 위 줄을 해결하고 나면 문제 없이 동작함
	//컨트롤 + z를 통해 EOF를 유발할 수 있다. 
	//eof는 End Of File의 약자로, 파일이 끝났으니 더 이상 입력을 받지 말라는 의미

	return 0;
}