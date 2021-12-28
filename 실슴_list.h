#pragma once
template<typename T>
class List {
private:
	T* dataList; // ���� ������ ���� �Ҵ� �迭
	int max_size; // �ִ� ������
	int current; // ���� index ��ġ
public:
	List(int _size) : max_size{ _size } {
		dataList = new T[max_size]; // ���� �迭 ����
		current = 0; // ���� index�� 0���� �ʱ�ȭ
	}

	void push_back(T data) { // ¦�� ���� �� �ڿ� ���� �߰��ϴ� �Լ�
		dataList[current] = data;
		current++;
	}

	T pop() { // ¦�� ���� �� ���� ���� �����ϰ� ��ȯ�ϴ� �Լ�
		current--;
		T tmp = dataList[current];
		dataList[current] = NULL;

		return tmp;
	}

	int size() { // ¦�� ������ ���� ����� ��ȯ�ϴ� �Լ�
		return current;
	}

	int total_size() { // �� ¦�� ���Ͱ� ���� �� �ִ� �ִ� ����
		return max_size;
	}

	T at(int index) { // ¦�� ������ Ư�� index ��° �� ��ȯ
		return dataList[index];
	}
};
