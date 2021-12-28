// 예제 1번
// class의 생성자에서 예외처리

#include<iostream>
using namespace std;

// 동적할당 배열을 만들고, 거기에 값을 삽입하는 class 
// (내가 만든 class가 아니라 다른 사람이 만들어 놓은 class)
// List class 안쪽의 내용은 제가 수정할 수가 없어요
class List {
private:
	int* list;
public:
	List() {
		cout << "생성자 실행 (역할 : 리스트 생성)" << endl;
		
		//[가정하고 있는 상황]
		//데이터베이스 (데이터 저장소)에서 데이터를 모두 읽어 왔음
		//하지만, 난 가장 최신의 5개의 데이터만 출력하고 싶음
		//상황 1. 출력하려는 개수보다 데이터가 많음 (아무 상관 x)
		//상황 2. 출력하려는 개수보다 데이터가 적음 (문제 발생)
		int dataSize = 2;
		list = new int[dataSize];
		for (int a = 0; a < dataSize; a++) {
			list[a] = a;
		}

		for (int a = 0; a < 5; a++) {
			if (a >= dataSize) {
				throw string("데이터가 5개보다 적음"); //에러 메시지
			}
			cout << list[a] << endl;
		}
	}
	~List() { // 위쪽에서 throw가 발생하면 흐름이 변경되기 때문에 소멸자 실행 x
		cout << "소멸자 실행 (역할 : 리스트 해제)" << endl;
		delete[] list;
	}
};
//프로그램의 흐름을 담당하는 class -> main함수에 적어줄 내용을 적게 하려고
class Start {
private:
	List myList;
public:
	Start() {

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