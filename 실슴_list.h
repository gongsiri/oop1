#pragma once
template<typename T>
class List {
private:
	T* dataList; // 값을 저장할 동적 할당 배열
	int max_size; // 최대 사이즈
	int current; // 현재 index 위치
public:
	List(int _size) : max_size{ _size } {
		dataList = new T[max_size]; // 동적 배열 만듦
		current = 0; // 현재 index를 0으로 초기화
	}

	void push_back(T data) { // 짝퉁 벡터 맨 뒤에 값을 추가하는 함수
		dataList[current] = data;
		current++;
	}

	T pop() { // 짝퉁 벡터 맨 뒤의 값을 삭제하고 반환하는 함수
		current--;
		T tmp = dataList[current];
		dataList[current] = NULL;

		return tmp;
	}

	int size() { // 짝퉁 벡터의 현재 사이즈를 반환하는 함수
		return current;
	}

	int total_size() { // 이 짝퉁 벡터가 가질 수 있는 최대 길이
		return max_size;
	}

	T at(int index) { // 짝퉁 벡터의 특정 index 번째 값 반환
		return dataList[index];
	}
};
