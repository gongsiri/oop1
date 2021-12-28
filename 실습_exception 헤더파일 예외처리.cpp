//예제 3번
//c++ exception 헤더파일

#include<iostream>
#include<exception>
#include<vector>
using namespace std;

//자주 발생될 수 있는 예외를 알아서 잡아줌
int main() {

	//아래 내용은 강제적으로 에러를 발생시킨 상황들
	//에러의 종류도 많음 (교재 702 페이지)
	try {

		// ERROR : length_error
		string tmp = "hello";
		cout << "tmp의 값 : " << tmp << endl;
		cout << "tmp의 길이 : " << tmp.size() << endl;

		tmp.resize(-1);
		cout << "tmp의 길이 : " << tmp.size() << endl;

		//ERROR : out_of_range
		vector<int> tmpVector(10); //int형 10칸짜리 배열을 만든 것
		tmpVector.at(20) = 100; // 배열 20번째에 접근해서 값을 100으로 바꿔라

		//ERROR : invalid_argument - 강제적으로 에러를 발생시킴
		int num1, num2;
		cout << "첫 번째 숫자 : ";
		cin >> num1;
		cout << "두 번째 숫자 : ";
		cin >> num2;
		if (num2 == 0) {
			throw invalid_argument("0으로는 나눌 수 없습니다.");
		}
		else {
			cout << num1 / num2 << endl;
		}
	}
	catch (exception& e) {
		cout << "에러 발생" << endl;
		cout << typeid(e).name() << endl;
		cout << e.what() << endl;
	}
	return 0;
}