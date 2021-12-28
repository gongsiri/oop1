///ascii 정수를 리턴해 주는 get 함수
//#include<iostream>
//using namespace std;
//
//int main() {
//	int x;
//	cout << "공백 없이 문자 5개를 입력하시오 : "; 
//	for (int i = 0; i < 5; i++) {
//		x = cin.get();  //아스키코드 정수를 리턴해줌 , 공백도 하나하나 다 읽음
//		cout << x << " ";
//	}
//	return 0;
//}

//각 단어의 첫글자를 대문자로 만드는 get,put 함수
#include<iostream>
using namespace std;

int main() {
	char c;
	cout << "여러 줄의 글자를 입력하세요(종료하려면 eof 입력) : " << endl;
	char pre = '\n';
	while (cin.get(c)) {
		if (pre == ' ' || pre == '\n') {
			cout.put(toupper(c));
		}
		else {
			cout.put(c);
		}
		pre = c;
	}
	return 0;
}
