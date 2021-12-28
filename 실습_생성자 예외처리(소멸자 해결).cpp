//예제 2번
#include<iostream>
using namespace std;


class List {
private:
	
public:
	int* list;

	List() {
	
	}
	~List() {
		cout << "소멸자 실행 (역할 : 리스트 해제)" << endl;
		delete[] list;
	}
};

//프로그램의 흐름을 담당하는 class -> main함수에 적어줄 내용을 적게 하려고
//예외처리가 필요한 생성자의 내용을 복사해서 옮겨줌 (생성자로)
class Start {
private:
	List myList;
public:
	Start() try : myList() {
		cout << "Start 객체의 생성자" << endl;

		// ===== List class의 생성자 내용
		cout << "생성자 실행 (역할 : 리스트 생성)" << endl;

		int dataSize = 2;
		myList.list = new int[dataSize];
		for (int a = 0; a < dataSize; a++) {
			myList.list[a] = a;
		}

		for (int a = 0; a < 5; a++) {
			if (a >= dataSize) {
				throw string("데이터가 5개보다 적음"); //에러 메시지
			}
			cout << myList.list[a] << endl;
		}
		// ===== List class의 생성자 내용

		// ===== Start class의 생성자 내용
		// ~~~
		// ===== Start class의 생성자 내용 
	}
	catch (...) { //...의 의미는 그 어떠한 예외처리라도 다 받겠다
		throw; // 받은 throw를 아래에 있는 catch로 전달해줌
	}
};

int main() {

	try {
		Start start;
	}
	catch (string message) {
		cout << message << endl;
	}


	return 0;
}