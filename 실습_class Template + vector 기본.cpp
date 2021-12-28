#include<iostream>
#include<vector>
using namespace std;

//Class Template
//Template의 장점 -> Class에 녹여내는 것

template <typename T>
class Data {
private:
	T num;
public:
	Data() { //생성자

	}
	void setData(T _num){ //set함수
		num = _num;
	}
	T getData() { //get함수
		return num;
	}
};

//Template의 접근 시작은, 자료형에 따라서 함수 혹은 class를 여러 개 만들어야 한다는 불편함이 있을 때
int main() {

	Data<char> myData; //class template은 객체로 선언할 때 자료형을 정해줘야 함
	myData.setData('a');
	cout << myData.getData() << endl;

	Data<int> myData2; 
	myData2.setData(10);
	cout << myData2.getData() << endl;

	Data<double> myData3; //class template은 객체로 선언할 때 자료형을 정해줘야 함
	myData3.setData(10.5);
	cout << myData3.getData() << endl;

	Data<string> myData4; //class template은 객체로 선언할 때 자료형을 정해줘야 함
	myData4.setData("안녕");
	cout << myData4.getData() << endl;

	//vector
	// 기존에 사용하던 배열의 불편한 점을 해결하고, 사용의 편의성을 주는 c++ 헤더파일
	// 배열의 사이즈를 미리 지정하지 않아도 됨, CRUD 삽입 삭제 수정 읽기가 편하다.
	vector<int> list; // 배열이 생성됨 / 형태를 보아하니 내부에 template을 사용한다고 예상해볼 수 있음
	list.push_back(1); // 배열에 1을 넣음 (동적할당 필요 없음)
	list.push_back(3);
	list.push_back(5);

	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
	cout<<endl;
	return 0;
}