//STL
//Standard Template Library
//표준 C++라이브러리

//개발에 유용한 자료구조와 알고리즘 등을 정의해놓은 라이브러리

//다른 개발자가 짜놓은 코드 다발(또 다른 개발자를 위해 만들어 둔 것)

//vector, list, map, algorithm(sort) - 대표적인 기능

#include<iostream>
#include<vector>
using namespace std;

int main() {

	// 배열을 대체할 수 있는 자료구조
	// 배열을 조금 더 쉽고, 편리하게 사용할 수 있게 해줌
	
	vector<int> tmpVector1; // 빈 벡터 선언
	//vector<int> tmpVector2(5); // 5칸의 벡터 선언
	//vector<int> tmpVector3 = { 1,2,3,4,5 }; // 5칸의 1,2,3,4로 초기화된 벡터 선언
	//vector<int> tmpVecto4(6,0); // 6칸의 0으로 초기화된 벡터 선언

	// 크기가 가변적 - 배열에선 동적할당이 필요했음

	cout << "벡터에 값 삽입" << endl;
	tmpVector1.push_back(10);
	tmpVector1.push_back(20);
	tmpVector1.push_back(-100);
	tmpVector1.push_back(999);

	cout << "벡터의 값 출력" << endl;
	for (int index = 0; index < tmpVector1.size(); index++) {
		cout << tmpVector1[index] << " ";
	}
	cout << endl;

	cout << "2번 째 위치에 -1 삽입" << endl;
	tmpVector1.insert(tmpVector1.begin() + 1, -1); // 2번째 자리에 -1를 넣는다

	cout << "벡터의 값 출력" << endl;
	for (int index = 0; index < tmpVector1.size(); index++) {
		cout << tmpVector1[index] << " ";
	}
	cout << endl;

	cout << "벡터 초기화" << endl;
	tmpVector1.clear();
	
	cout << "벡터가 비어있는가? : " << tmpVector1.empty() << endl;

	return 0;
}

